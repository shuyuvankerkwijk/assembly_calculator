/////////////////////////////////////////////////////////////////////////////
//
// pdex.c:  Serial flash loader for the CV-8052 on the DE0-CV and DE1-SoC boards.
// 
// Copyright (C) 2022  Jesus Calvino-Fraga, jesusc (at) ece.ubc.ca
// 
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option) any
// later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
//
/////////////////////////////////////////////////////////////////////////////
//
// To compile on Linux/macos/Windows using gcc:
// gcc pdex.c -o pdex
//
// To compile on Windows using visual studio:
// cl pdex.c
//

#ifdef __APPLE__
	#define __unix__ 1
#endif

#ifdef __unix__
	#include <limits.h>
	#ifdef __APPLE__
		#include <termios.h>
	#else
		#include <termio.h>
	#endif
	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h>
	#include <fcntl.h>
	#include <sys/signal.h>
	#include <sys/types.h>
	#include <sys/socket.h>
	#include <math.h>
	#include <time.h>
	#include <string.h>
	#include <errno.h>
	#include <ctype.h>
	#include <string.h>
	#include <stdbool.h>
	#include <dirent.h>
	
	#define strnicmp strncasecmp 
	#define TRUE true
	#define FALSE false
	#define EQ(X,Y)  (stricmp(X, Y)==0)
	#define NEQ(X,Y) (stricmp(X, Y)!=0)
	#define MAX_PATH PATH_MAX
	#define DWORD unsigned long int
	#define stricmp strcasecmp
	#define BOOL bool
#else
	#include <stdio.h>
	#include <stdlib.h>
	#include <conio.h>
	#include <windows.h>
	#include <time.h>
	#define EQ(X,Y)  (_stricmp(X, Y)==0)
	#define NEQ(X,Y) (_stricmp(X, Y)!=0)
#endif

#ifdef __unix__
	time_t start_t, stop_t;
	#define T_START time(&start_t);
	#define T_STOP time(&stop_t);
	#define T_PRINTTIME printf( "%d seconds.", (int)(stop_t-start_t));
#else
	clock_t startm, stopm;
	#define T_START if ( (startm = clock()) == -1) {printf("Error calling clock");}
	#define T_STOP if ( (stopm = clock()) == -1) {printf("Error calling clock");}
	#define T_PRINTTIME printf( "%.3f seconds.", ((double)stopm-startm)/CLOCKS_PER_SEC);
#endif

char ID_Str[7];
char Name_Str[0x20];
unsigned int memsize=0;
unsigned int pagesize=0;
unsigned char FlashBuff[0x10000];

#ifdef __unix__
	#define MAX_PATH PATH_MAX
	#define DWORD unsigned long int
	#define stricmp strcasecmp
	#define BOOL bool
	int fd;
	char SerialPort[MAX_PATH]="/dev/ttyUSB0";
	struct termios comio;
#else
	HANDLE hComm=INVALID_HANDLE_VALUE;
	int SerialPort=1;
#endif

char m_FileName[MAX_PATH]="";
char m_Serial[0x100]="";
int m_memsize=0;
int m_timeout=15;
int m_Reset=0;
char m_Baud[0x20]="115200";
int Selected_Device=-1;

#ifdef __unix__
int Select_Baud (int Baud_Rate)
{
	switch (Baud_Rate)
	{
		case 115200: return B115200;
		case 57600:  return B57600;
		case 38400:  return B38400;
		case 19200:  return B19200;
		case 9600:   return B9600;
		case 4800:   return B4800;
		case 2400:   return B2400;
		case 1800:   return B1800;
		case 1200:   return B1200;
		default:     return B4800;
	}
}

//CSIZE  Character size mask.  Values are CS5, CS6, CS7, or CS8.
//CSTOPB Set two stop bits, rather than one.
//PARENB Enable parity generation on output and parity checking for input.
//PARODD If set, then parity for input and output is odd; otherwise even parity is used.
#define ONESTOPBIT 0 
#define TWOSTOPBITS CSTOPB 
#define NOPARITY 0

int OpenSerialPort(char * devicename, int baud, int parity, int numbits, int numstop)
{
    struct termios options;
	speed_t BAUD;
	
	BAUD=Select_Baud(baud);
	if(BAUD==B4800)	printf("Baud rate set to 4800\n");
	
	//open the device(com port) to be non-blocking (read will return immediately)
	fd = open(devicename, O_RDWR | O_NOCTTY | O_NDELAY );
	if (fd < 0)
	{
		perror(devicename);
		return(1);
	}
	
	/*Reading data from a port is a little trickier. When you operate the port
	in raw data mode, each read system call will return however many characters
	are actually available in the serial input buffers. If no characters are
	available, the call will block (wait) until characters come in, an interval
	timer expires, or an error occurs. The read function can be made to return
	immediately by doing the following:*/	

	/* The FNDELAY option causes the read function to return 0 if no characters
	are available on the port. To restore normal (blocking) behavior, call
	fcntl() without the FNDELAY option:*/
	
 	//fcntl(fd, F_SETFL, FNDELAY);
    fcntl(fd, F_SETFL, 0);
	
	/*This is also used after opening a serial port with the O_NDELAY option.*/

	// Make the file descriptor asynchronous 
	
	tcgetattr(fd, &comio);
	
	//newtio.sg_ispeed = newtio.sg_ospeed = BAUD;
	cfsetospeed(&comio, (speed_t)BAUD);
	cfsetispeed(&comio, (speed_t)BAUD);
	
	comio.c_cflag = BAUD | CS8 | CSTOPB | CLOCAL | CREAD;
	comio.c_cflag &= ~(CRTSCTS); /* No hardware flow control */
	comio.c_iflag = IGNPAR;
	comio.c_iflag &= ~(IXON | IXOFF | IXANY); /* No software flow control */
	comio.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG); /* Raw input mode*/
	comio.c_oflag &= ~OPOST; /* Raw ouput mode */
	comio.c_cc[VMIN]=0;
	comio.c_cc[VTIME]=1;
	tcflush(fd, TCIFLUSH);
	tcsetattr(fd, TCSANOW, &comio);

	return(0);
}

void CloseSerialPort(void)
{
	close(fd);
}

void Sleep (int msec)
{
	struct timespec req;

	req.tv_sec=0;
	req.tv_nsec=1000000L*msec;
    nanosleep (&req, NULL);
}

void Delay (int usec)
{
	struct timespec req;

	req.tv_sec=0;
	req.tv_nsec=1000L*usec;
    nanosleep (&req, NULL);
}

#else // Windows

int OpenSerialPort (char * Port, DWORD baud, BYTE parity, BYTE bits, BYTE stop)
{
	char sPort[16];
	DCB dcb;
	COMMTIMEOUTS Timeouts;

	sprintf(sPort, "\\\\.\\%s", Port);
	
	hComm = CreateFile(sPort, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
	if (hComm == INVALID_HANDLE_VALUE)
	{
		printf("Failed to open up the comunication port %s\n", Port);
		return -1;
	}
	
	if (!GetCommState(hComm, &dcb))
	{
		printf("Failed in call to GetCommState()\n");
		return -1;
	}

	dcb.fAbortOnError=FALSE;
	dcb.BaudRate = baud; 
	dcb.Parity = parity;
	dcb.ByteSize = bits;
	dcb.StopBits = stop;
	dcb.fDsrSensitivity = FALSE;
	dcb.fOutxCtsFlow = FALSE;
	dcb.fOutxDsrFlow = FALSE;
	dcb.fOutX = FALSE;
	dcb.fInX = FALSE;

	//Now that we have all the settings in place, make the changes
	if (!SetCommState(hComm, &dcb))
	{
		printf("Failed in call to SetCommState()\n");
		return -1;
	}	

	ZeroMemory(&Timeouts, sizeof(COMMTIMEOUTS));
	Timeouts.ReadIntervalTimeout = 250;
	Timeouts.ReadTotalTimeoutMultiplier = 10;
	Timeouts.ReadTotalTimeoutConstant = 250;
	Timeouts.WriteTotalTimeoutMultiplier = 10;
	Timeouts.WriteTotalTimeoutConstant = 250;
	if (!SetCommTimeouts(hComm, &Timeouts))
	{
		printf("Failed in call to SetCommTimeouts\n");
		return -1;
	}

	return 0;
}

int CloseSerialPort (void)
{
	BOOL bSuccess;
	bSuccess = CloseHandle(hComm);
    hComm = INVALID_HANDLE_VALUE;
    if (!bSuccess)
    {
		printf("Failed to close serial port, GetLastError:%d\n", GetLastError());
		return -1;
	}
	return 0;
}
#endif


// Functions to read write hex/bin files
int hex2dec (char hex_digit)
{
   int j;
   j=toupper(hex_digit)-'0';
   if (j>9) j -= 7;
   return j;
}

unsigned char GetByte(char * buffer)
{
	return hex2dec(buffer[0])*0x10+hex2dec(buffer[1]);
}

unsigned short GetWord(char * buffer)
{
	return	hex2dec(buffer[0])*0x1000+
			hex2dec(buffer[1])*0x100+
			hex2dec(buffer[2])*0x10+
			hex2dec(buffer[3]);
}

long filesize(FILE *stream)
{
   long curpos, length;

   curpos = ftell(stream);
   fseek(stream, 0L, SEEK_END);
   length = ftell(stream);
   fseek(stream, curpos, SEEK_SET);
   return length;
}

int ReadHexFile(char * filename)
{
	char buffer[1024];
	FILE * filein;
	int j, numbytes;
	unsigned char linesize, recordtype, rchksum, value;
	unsigned short address;
	int MaxAddress=0;
	int chksum;
	int line_counter=0;
	int numread=0;
	int LoadedBytes=0;

	//Set the buffer to its default value
	for(j=0; j<0x10000; j++) FlashBuff[j]=0xff;

    if ( (filein=fopen(filename, "r")) == NULL )
    {
       printf("Error: Can't open file `%s`.\r\n", filename);
       fflush(stdout);
       return -1;
    }
    
	numbytes=filesize(filein);

    while(fgets(buffer, sizeof(buffer), filein)!=NULL)
    {
    	numread+=(strlen(buffer)+1);

    	line_counter++;
    	if(buffer[0]==':')
    	{
			linesize = GetByte(&buffer[1]);
			address = GetWord(&buffer[3]);
			recordtype = GetByte(&buffer[7]);
			rchksum = GetByte(&buffer[9]+(linesize*2));
			chksum=linesize+(address/0x100)+(address%0x100)+recordtype+rchksum;

			if (recordtype==1) break; /*End of record*/

			for(j=0; j<linesize; j++)
			{
				value=GetByte(&buffer[9]+(j*2));
				chksum+=value;
				if((address+j)<0x10000)
				{
					FlashBuff[address+j]=value;
					LoadedBytes++;
				}
			}
			if(MaxAddress<(address+linesize-1)) MaxAddress=(address+linesize-1);

			if((chksum%0x100)!=0)
			{
				printf("ERROR: Bad checksum in file '%s' at line %d\r\n", filename, line_counter);
				fflush(stdout);
				return -1;
			}
		}
    }
    fclose(filein);
	
	printf("%s: loaded %d bytes\n", filename, LoadedBytes); 

    return MaxAddress;
}

BOOL PortWrRd(char x, DWORD delay)
{
	DWORD j;
    char s=0;
    
#ifdef __unix__
    j=write(fd, &x, 1);  // For Unix/Apple
#else
    WriteFile(hComm, &x, 1, &j, NULL);
#endif

    Sleep(delay+1);
    
#ifdef __unix__
	j = read(fd, &s, 1); // For Unix/Apple
#else
    ReadFile(hComm, &s, 1, &j, NULL);
#endif

	return (s==x)?TRUE:FALSE;
}


BOOL PortWrStr(char * x, int sleeptime, int timeout)
{
    time_t ltime1, ltime2;
	char val[]="000";
	int baud=atoi(m_Baud);
	int nmsec;
	DWORD j;
    char c='$';
	
	// Prolific Serial port hack...
	nmsec=(115200*20)/baud;
  
#ifdef __unix__
    j=write(fd, x, strlen(x));  // For Unix/Apple
#else
    WriteFile(hComm, x, strlen(x), &j, NULL);
#endif
    
	Sleep(sleeptime+nmsec);

    time(&ltime2);
    ltime1=ltime2+(timeout?timeout:6);

    while((c!='.') && (ltime2<ltime1) )
    { 	
#ifdef __unix__
		j = read(fd, &c, 1); // For Unix/Apple
#else
    	ReadFile(hComm, &c, 1, &j, NULL);
#endif
        if(j==1)
		{
			if(c!='.')
			{
				val[0]=val[1];
				val[1]=val[2];
				val[2]=c;
			}
		}
		
		time(&ltime2);

    }
	if ( strlen(ID_Str)<6 ) strcat(ID_Str, val);
    return (c=='.')?TRUE:FALSE;
}

BOOL PrepareIntelLine(char * x, int address, int len) 
{
	int j;
	unsigned char chk_sum;
	char buff[0x300];
	BOOL toret=0;

	sprintf(x, ":%02X%04X00", len, address);
	chk_sum= (unsigned char) (len + (address%0x100) + (address/0x100));

	for (j=0; j<len; j++)
	{
		sprintf(buff, "%02X", FlashBuff[address+j]);
		chk_sum += (unsigned char) FlashBuff[address+j];
		strcat(x, buff);
		if (FlashBuff[address+j]!=0xff) toret=1; //Don't send empty lines
	}
	sprintf(buff,"%02X\r\n", (unsigned char)(0x100-chk_sum));
	strcat(x, buff);
	return toret;
}

int CheckPage(int j)
{
	int k, max;

	if(pagesize==64) k=j&0xffc0;
	else k=j&0xff80;

	max=k+pagesize;
	for(;k<max;k++)
	{
		if(FlashBuff[k]!=0xff) return 1;
	}
	return 0;
}

void Flash(void) 
{
    int portn, baud, GoodU=0, Utries=0;
    DWORD delay;
	char buff[0x300];
	int j;
	int dash_cnt;

	#define LINESIZE 64 // Max buff is 64, so don't increment pass 64.
	#define DE1_MEMSIZE (0x8000)

    baud=atoi(m_Baud);
    delay=14000/baud;
   
    if(OpenSerialPort(m_Serial, baud, NOPARITY, 8, ONESTOPBIT)<0)
    {
        printf("ERROR: Could not open serial port.");
        return;
    }

	printf("Waiting for manual bootloader activation...\n");
	fflush(stdout);

    for(Utries=0; Utries<200 ; Utries++)
    {
        if(PortWrRd('U', delay)) GoodU++;
        else GoodU=0;
        if(GoodU==25) break; //Assume we got the CV-8052 bootloader running
    }
    if(GoodU!=25)
    {
    	printf("Couldn't communicate with the CV-8052 bootloader.\n");
    	return;
    }

	T_START; // Measure the time it takes to program the microcontroller

	//Identify the microcontroller
	strcpy(ID_Str, ""); // Clear ID string

	//Identify the microcontroller
	printf("Identifiying...\n");
	fflush(stdout);
	if(!PortWrStr(":00000003FD", 0, 100 /*milliseconsds*/))
	{
		printf("ERROR: Part identification command failed.\n");
		goto The_end;
	}
	
	if( NEQ(ID_Str,"DE2") && NEQ(ID_Str,"DE1") && NEQ(ID_Str,"DE0") )
	{
		printf("ERROR: Not a DEx-8052 with serial bootloader. (%s)\n", ID_Str);
		goto The_end;
	}
	printf("DEx bootloader detected.\n");
	fflush(stdout);

    printf("Reading file %s...\n", m_FileName);
	if(ReadHexFile(m_FileName)<0)
    {
        printf("ERROR: Could not load HEX file.\n");
        return;
    }

	printf("Erasing Flash...");
	fflush(stdout);
	if(!PortWrStr(":00000004FC", 0, 1000)) // One second should be enough to erase 64k
	{
		printf("ERROR: Flash erase command failed.");
		fflush(stdout);
		goto The_end;
	}
	printf(" Done\n");
	fflush(stdout);
	
	printf("Writing Flash...\n");
	fflush(stdout);
	for(j=0, dash_cnt=0; j<DE1_MEMSIZE; j+=LINESIZE)
    {
		if(PrepareIntelLine(buff, j, LINESIZE))
		{
			printf("#");
			dash_cnt++;
			if(dash_cnt==64)
			{
				dash_cnt=0;
				printf("\n");
			}
			fflush(stdout);
			if(!PortWrStr(buff, 0, 5))
			{
                printf("ERROR: Flash program command failed.\n");
				fflush(stdout);
                goto The_end;
			}

		}
	}
	printf("\ndone\n");
	fflush(stdout);

	//Send the end record
	if(!PortWrStr(":00000001FF", 0, 0))
	{
		printf("ERROR: Flash end failed.\n");
		goto The_end;
	}

    printf("Flash program command completed!\n");
    
The_end:
    CloseSerialPort();
    Sleep(200);
    
    printf("Actions completed in ");
    T_STOP;
	T_PRINTTIME;
	printf("\n");
	fflush(stdout);
}

void GetOut (int val)
{
	exit(val);
}

void print_help (char * prn)
{
#ifdef __unix__
	printf("Usage example:\n"
#ifdef __APPLE__
	       "%s -p/dev/cu.usbserial-DN05FVT8 somefile.hex\n"
	       "(load flash memory with file 'somefile.hex' via /dev/cu.usbserial-DN05FVT8)\n"
#else
	       "%s -p/dev/ttyUSB0 somefile.hex\n"
	       "(load flash memory with file 'somefile.hex' via /dev/ttyUSB0)\n"
	       "(on Linux you must be a member of group 'dialout')\n"
#endif
	       "\n"
	       "Options available:\n"
	       "   -a	        (find serial port)\n"
	       "   -p[portname] (use this serial port)\n"
	       "   -h (this help)\n"
	       "\n"
#ifdef __APPLE__
		   "To check what serial ports are available on a Mac terminal type:\n"
		   "ls -l /dev | grep \"usb\"\n"
#else
	#ifdef __CYGWIN__
		   "To check what serial ports are available on a Cygwin terminal type:\n"
		   "ls -l /dev | grep \"ttyS\"\n"
	#else
		   "To check what serial ports are available on a Linux terminal type:\n"
		   "ls -l /dev | grep \"USB\"\n"
	#endif
#endif
	       , prn);
#else
	printf("Usage example:\n"
	       "%s -pCOM3 somefile.hex\n"
	       "(load flash memory with file 'somefile.hex' via COM3\n"
	       "\n"
	       "Options available:\n"
	       "   -a	        (find serial port)\n"
	       "   -p[portname] (use this serial port)\n"
	       "   -h (this help)\n"
	       "\n"
		   "To check what serial ports are available on a Windows cmd type:\n"
		   "reg query HKLM\\HARDWARE\\DEVICEMAP\\SERIALCOMM\n"
	       , prn);
#endif
	fflush(stdout);
}

// https://valelab4.ucsf.edu/svn/micromanager2/trunk/DeviceAdapters/SerialManager/SerialManager.cpp
#ifdef __unix__
void AutoPort (void)
{
	#ifdef __APPLE__
		char signature[]="cu.usbserial";
	#else
		#ifdef __CYGWIN__
			char signature[]="ttyS";
		#else
			char signature[]="ttyUSB";
		#endif
	#endif
	
	// Look for /dev files with correct signature
	char str[256];
	DIR* pdir = opendir("/dev");
	struct dirent *pent;
	if (pdir)
	{
		while ( (pent = readdir(pdir)) )
		{
			if (strstr(pent->d_name, signature) != NULL)  
			{
				sprintf(str, "/dev/%s", pent->d_name);
            	printf("Using %s.\n", str);
				fflush(stdout);
				strcpy(m_Serial, str);
				return;
			}
		}
	}
}
#else
void AutoPort (void)
{
	char str[256];
   	char lpTargetPath[5000]; // buffer to store the path of the COMPORTS
   	DWORD test;
   	int i;
   	
    for (i = 0; i < 255; i++) // checking ports from COM0 to COM255
    {
        sprintf(str, "COM%d", i); // converting to COM0, COM1, COM2
        test = QueryDosDevice(str, lpTargetPath, 5000);

        // Test the return value and error if any
        if (test != 0) //QueryDosDevice returns zero if it didn't find an object
        {
            if(strstr(lpTargetPath, "VCP")!=NULL)
            {
            	printf("Using %s.\n", str);
            	fflush(stdout);
	            strcpy(m_Serial, str);
            	return;
	        }
        }
    }
}
#endif

int main(int argc, char **argv)
{
	int j;
	
	unsigned char buff[32];
	int m_Auto=0;

    printf("Serial flash programmer for the CV-8052. (C) Jesus Calvino-Fraga 2022\n");
    fflush(stdout);
	
    for(j=1; j<argc; j++)
    {
    		 if(EQ("-h", argv[j])) {print_help(argv[0]); return 0;}
		else if(strnicmp("-p", argv[j], 2)==0) sprintf(m_Serial, "%s", &argv[j][2]);
		else if(strnicmp("-a", argv[j], 2)==0) m_Auto=1;
    	else strcpy(m_FileName, argv[j]);
    }
    
    if(m_Auto==1) AutoPort();

    if(strlen(m_FileName)==0) {print_help(argv[0]); return 1;}
    if(strlen(m_Serial)==0) {print_help(argv[0]); return 1;}

    Flash();
    return 0;
}
