/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     D_ORG = 259,
     D_BYTE = 260,
     D_WORD = 261,
     D_SKIP = 262,
     D_EQU = 263,
     D_SET = 264,
     D_MAC = 265,
     D_DBIT = 266,
     D_END = 267,
     D_DSEG = 268,
     D_ISEG = 269,
     D_BSEG = 270,
     D_CSEG = 271,
     D_XSEG = 272,
     ACALL = 273,
     ADD = 274,
     ADDC = 275,
     AJMP = 276,
     ANL = 277,
     CALL = 278,
     CJNE = 279,
     CLR = 280,
     CPL = 281,
     DA = 282,
     DEC = 283,
     DIV = 284,
     DJNZ = 285,
     INC = 286,
     D_INCLUDE = 287,
     JB = 288,
     JBC = 289,
     JC = 290,
     JMP = 291,
     JNB = 292,
     JNC = 293,
     JNZ = 294,
     JZ = 295,
     LCALL = 296,
     LJMP = 297,
     MOV = 298,
     MOVC = 299,
     MOVX = 300,
     NOP = 301,
     MUL = 302,
     ORL = 303,
     POP = 304,
     PUSH = 305,
     RET = 306,
     RETI = 307,
     RL = 308,
     RLC = 309,
     RR = 310,
     RRC = 311,
     SETB = 312,
     SJMP = 313,
     SUBB = 314,
     SWAP = 315,
     XCH = 316,
     XCHD = 317,
     XRL = 318,
     AB = 319,
     A = 320,
     C = 321,
     PC = 322,
     DPTR = 323,
     BITPOS = 324,
     R0 = 325,
     R1 = 326,
     R2 = 327,
     R3 = 328,
     R4 = 329,
     R5 = 330,
     R6 = 331,
     R7 = 332,
     USING = 333,
     AR0 = 334,
     AR1 = 335,
     AR2 = 336,
     AR3 = 337,
     AR4 = 338,
     AR5 = 339,
     AR6 = 340,
     AR7 = 341,
     VALUE = 342,
     SYMBOL = 343,
     CONTROL = 344,
     HIGH = 345,
     LOW = 346,
     NOT = 347,
     D_AT = 348,
     D_DS = 349,
     D_BIT = 350,
     D_DATA = 351,
     D_XDATA = 352,
     D_IDATA = 353,
     D_CODE = 354,
     MOD = 355,
     D_SEG = 356,
     D_RSEG = 357,
     PUBLIC = 358,
     EXTERN = 359,
     OVERL = 360,
     IF = 361,
     IFDEF = 362,
     IFNDEF = 363,
     ENDIF = 364,
     ELSE = 365,
     ERROR = 366,
     XOR = 367,
     AND = 368,
     OR = 369,
     SHL = 370,
     SHR = 371,
     C_NE = 372,
     C_EQ = 373,
     C_LE = 374,
     C_GE = 375,
     C_LT = 376,
     C_GT = 377
   };
#endif
/* Tokens.  */
#define STRING 258
#define D_ORG 259
#define D_BYTE 260
#define D_WORD 261
#define D_SKIP 262
#define D_EQU 263
#define D_SET 264
#define D_MAC 265
#define D_DBIT 266
#define D_END 267
#define D_DSEG 268
#define D_ISEG 269
#define D_BSEG 270
#define D_CSEG 271
#define D_XSEG 272
#define ACALL 273
#define ADD 274
#define ADDC 275
#define AJMP 276
#define ANL 277
#define CALL 278
#define CJNE 279
#define CLR 280
#define CPL 281
#define DA 282
#define DEC 283
#define DIV 284
#define DJNZ 285
#define INC 286
#define D_INCLUDE 287
#define JB 288
#define JBC 289
#define JC 290
#define JMP 291
#define JNB 292
#define JNC 293
#define JNZ 294
#define JZ 295
#define LCALL 296
#define LJMP 297
#define MOV 298
#define MOVC 299
#define MOVX 300
#define NOP 301
#define MUL 302
#define ORL 303
#define POP 304
#define PUSH 305
#define RET 306
#define RETI 307
#define RL 308
#define RLC 309
#define RR 310
#define RRC 311
#define SETB 312
#define SJMP 313
#define SUBB 314
#define SWAP 315
#define XCH 316
#define XCHD 317
#define XRL 318
#define AB 319
#define A 320
#define C 321
#define PC 322
#define DPTR 323
#define BITPOS 324
#define R0 325
#define R1 326
#define R2 327
#define R3 328
#define R4 329
#define R5 330
#define R6 331
#define R7 332
#define USING 333
#define AR0 334
#define AR1 335
#define AR2 336
#define AR3 337
#define AR4 338
#define AR5 339
#define AR6 340
#define AR7 341
#define VALUE 342
#define SYMBOL 343
#define CONTROL 344
#define HIGH 345
#define LOW 346
#define NOT 347
#define D_AT 348
#define D_DS 349
#define D_BIT 350
#define D_DATA 351
#define D_XDATA 352
#define D_IDATA 353
#define D_CODE 354
#define MOD 355
#define D_SEG 356
#define D_RSEG 357
#define PUBLIC 358
#define EXTERN 359
#define OVERL 360
#define IF 361
#define IFDEF 362
#define IFNDEF 363
#define ENDIF 364
#define ELSE 365
#define ERROR 366
#define XOR 367
#define AND 368
#define OR 369
#define SHL 370
#define SHR 371
#define C_NE 372
#define C_EQ 373
#define C_LE 374
#define C_GE 375
#define C_LT 376
#define C_GT 377




/* Copy the first part of user declarations.  */
#line 22 "parser.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "a51.h"

#define YYSTYPE union ystack

static unsigned char kmask[]={
	0x01, 0x02, 0x04, 0x08,	0x10, 0x20, 0x40, 0x80,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01};

static unsigned char bytebuf[0x4000]; /* used by dumplist() */
struct symbol * label_symbol = NULL;

char symexp[0x100];
char tmpexp[0x100];

char optc51[0x1000]=" ";
extern char MapFile[PATH_MAX];

int printf_float=0;

static int bytecount;
int RegisterBank=0;

int IF_Flag[0x100];
int IF_Level;
char IF_Value[0x1000];
int IF_Count;
int force_EOF;
int hash_warning_enable=1; // Just after adding this feature I found two bugs in old code!
extern int linetest;

void yyerror(char *s);
int makeop(struct opcode * op, struct mode *m, int add);
char *padline(char *line);
void dumplist(char *txt, int show);
void genbyte(int b);
void genstr(char *s);
void genword(unsigned long w);
void BadRegUse(char * x);
void objbyte(int b);
void objstr(char *s);
void objword(unsigned long w);
void set_str1(struct mode *m, union ystack *y);
void set_str2(struct mode *m, union ystack *y);
void NoObjectFileError (char * x);

/* ------------------------ G R A M M E R ----------------------------- */



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 404 "parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  233
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1954

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  280
/* YYNRULES -- Number of states.  */
#define YYNSTATES  507

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   377

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     137,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   126,     2,   143,   141,   116,   118,     2,
     138,   139,   114,   112,   140,   113,     2,   115,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   136,     2,
     124,   125,   123,     2,   142,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   119,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   117,     2,   129,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   120,   121,   122,
     127,   128,   130,   131,   132,   133,   134,   135
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    16,    20,    26,    30,
      34,    36,    39,    42,    44,    47,    50,    52,    54,    56,
      58,    60,    62,    64,    66,    68,    70,    72,    74,    76,
      78,    80,    82,    84,    86,    88,    90,    92,    94,    96,
      98,   101,   103,   107,   109,   113,   115,   119,   121,   125,
     127,   131,   134,   137,   140,   143,   146,   149,   153,   157,
     161,   165,   169,   173,   177,   181,   185,   189,   193,   198,
     202,   207,   211,   216,   220,   225,   228,   231,   237,   243,
     249,   255,   261,   264,   266,   268,   270,   272,   274,   276,
     278,   280,   284,   286,   290,   294,   300,   302,   306,   310,
     316,   318,   322,   326,   332,   334,   338,   342,   348,   350,
     354,   358,   364,   368,   372,   374,   376,   380,   382,   384,
     388,   391,   394,   397,   400,   403,   407,   411,   415,   419,
     423,   427,   431,   435,   439,   443,   447,   452,   456,   461,
     465,   469,   473,   478,   483,   488,   492,   496,   500,   505,
     509,   513,   517,   522,   526,   528,   530,   532,   535,   538,
     541,   544,   547,   550,   553,   556,   559,   562,   565,   568,
     571,   574,   577,   580,   583,   586,   589,   595,   601,   604,
     607,   610,   612,   614,   617,   620,   623,   626,   629,   632,
     635,   638,   641,   644,   647,   650,   653,   656,   659,   662,
     665,   668,   671,   674,   677,   680,   683,   686,   689,   692,
     700,   708,   716,   724,   730,   736,   742,   748,   752,   756,
     761,   766,   770,   775,   779,   784,   789,   793,   797,   801,
     805,   809,   814,   818,   822,   827,   832,   837,   843,   848,
     852,   856,   861,   863,   865,   867,   870,   872,   874,   876,
     882,   889,   896,   904,   906,   908,   911,   913,   915,   917,
     919,   921,   923,   925,   927,   929,   931,   933,   935,   937,
     939,   941,   943,   945,   947,   949,   951,   953,   955,   957,
     959
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     145,     0,    -1,   146,    -1,   146,   147,    -1,   147,    -1,
     153,   136,    94,   152,   148,    -1,    94,   152,   148,    -1,
     153,   136,    11,   152,   148,    -1,    11,   152,   148,    -1,
     153,   136,   148,    -1,   148,    -1,   149,   137,    -1,   150,
     137,    -1,   151,    -1,    88,   138,    -1,   163,   137,    -1,
     137,    -1,    64,    -1,    65,    -1,    66,    -1,    67,    -1,
      68,    -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,
      74,    -1,    75,    -1,    76,    -1,    77,    -1,    79,    -1,
      80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,
      85,    -1,    86,    -1,     1,    -1,    89,    -1,     4,   152,
      -1,    13,    -1,    13,    93,   152,    -1,    16,    -1,    16,
      93,   152,    -1,    14,    -1,    14,    93,   152,    -1,    15,
      -1,    15,    93,   152,    -1,    17,    -1,    17,    93,   152,
      -1,     5,   160,    -1,     6,   161,    -1,     7,   152,    -1,
     153,     8,    -1,   153,    10,    -1,    78,   179,    -1,   153,
      96,   179,    -1,   153,    98,   179,    -1,   153,    97,   180,
      -1,   153,    99,   180,    -1,   153,    95,   175,    -1,   153,
       9,   176,    -1,   153,     9,   177,    -1,   153,     9,    65,
      -1,   153,     9,   162,    -1,   153,   101,    99,    -1,   153,
     101,    97,    -1,   153,   101,    97,   105,    -1,   153,   101,
      96,    -1,   153,   101,    96,   105,    -1,   153,   101,    98,
      -1,   153,   101,    98,   105,    -1,   153,   101,    95,    -1,
     153,   101,    95,   105,    -1,   102,    88,    -1,   103,   154,
      -1,   104,    99,   138,   155,   139,    -1,   104,    96,   138,
     157,   139,    -1,   104,    97,   138,   159,   139,    -1,   104,
      98,   138,   158,   139,    -1,   104,    95,   138,   156,   139,
      -1,   106,   180,    -1,   107,    -1,   108,    -1,   110,    -1,
     109,    -1,    12,    -1,   162,    -1,    88,    -1,    88,    -1,
     154,   140,    88,    -1,   153,    -1,   153,   136,   162,    -1,
     155,   140,   153,    -1,   155,   140,   153,   136,   162,    -1,
     153,    -1,   153,   136,   162,    -1,   156,   140,   153,    -1,
     156,   140,   153,   136,   162,    -1,   153,    -1,   153,   136,
     162,    -1,   157,   140,   153,    -1,   157,   140,   153,   136,
     162,    -1,   153,    -1,   153,   136,   162,    -1,   155,   140,
     153,    -1,   155,   140,   153,   136,   162,    -1,   153,    -1,
     153,   136,   162,    -1,   155,   140,   153,    -1,   155,   140,
     153,   136,   162,    -1,   160,   140,   179,    -1,   160,   140,
       3,    -1,   179,    -1,     3,    -1,   161,   140,   180,    -1,
     180,    -1,   141,    -1,   138,   162,   139,    -1,   113,   162,
      -1,    90,   162,    -1,    91,   162,    -1,    92,   162,    -1,
     129,   162,    -1,   162,   117,   162,    -1,   162,   122,   162,
      -1,   162,   118,   162,    -1,   162,   121,   162,    -1,   162,
     119,   162,    -1,   162,   120,   162,    -1,   162,   114,   162,
      -1,   162,   115,   162,    -1,   162,   116,   162,    -1,   162,
     113,   162,    -1,   162,   112,   162,    -1,   162,   123,   123,
     162,    -1,   162,   128,   162,    -1,   162,   124,   124,   162,
      -1,   162,   127,   162,    -1,   162,   125,   162,    -1,   162,
     131,   162,    -1,   162,   125,   125,   162,    -1,   162,   126,
     125,   162,    -1,   162,   124,   123,   162,    -1,   162,   130,
     162,    -1,   162,   124,   162,    -1,   162,   134,   162,    -1,
     162,   124,   125,   162,    -1,   162,   132,   162,    -1,   162,
     123,   162,    -1,   162,   135,   162,    -1,   162,   123,   125,
     162,    -1,   162,   133,   162,    -1,    88,    -1,    87,    -1,
      46,    -1,    18,   181,    -1,    21,   181,    -1,    19,   164,
      -1,    20,   164,    -1,    59,   164,    -1,    63,   164,    -1,
      63,   165,    -1,    22,   164,    -1,    22,   165,    -1,    22,
     166,    -1,    48,   164,    -1,    48,   165,    -1,    48,   166,
      -1,    61,   164,    -1,    31,   170,    -1,    31,    68,    -1,
      28,   170,    -1,    27,    65,    -1,    29,    64,    -1,    36,
     142,    65,   112,    68,    -1,    36,   142,    68,   112,    65,
      -1,    36,   182,    -1,    23,   182,    -1,    47,    64,    -1,
      51,    -1,    52,    -1,    53,    65,    -1,    54,    65,    -1,
      55,    65,    -1,    56,    65,    -1,    60,    65,    -1,    62,
     164,    -1,    25,   171,    -1,    26,   171,    -1,    57,   171,
      -1,    50,   179,    -1,    49,   179,    -1,    42,   182,    -1,
      41,   182,    -1,    35,   183,    -1,    38,   183,    -1,    39,
     183,    -1,    40,   183,    -1,    58,   183,    -1,    24,   172,
      -1,    33,   167,    -1,    37,   167,    -1,    34,   167,    -1,
      30,   168,    -1,    43,   164,    -1,    43,   165,    -1,    43,
     169,    -1,    44,    65,   140,   142,    65,   112,    68,    -1,
      44,    65,   140,   142,    68,   112,    65,    -1,    44,    65,
     140,   142,    65,   112,    67,    -1,    44,    65,   140,   142,
      67,   112,    65,    -1,    45,    65,   140,   142,   178,    -1,
      45,    65,   140,   142,    68,    -1,    45,   142,   178,   140,
      65,    -1,    45,   142,    68,   140,    65,    -1,    65,   140,
     176,    -1,    65,   140,   179,    -1,    65,   140,   142,   178,
      -1,    65,   140,   143,   179,    -1,   179,   140,    65,    -1,
     179,   140,   143,   179,    -1,    66,   140,   175,    -1,    66,
     140,   115,   175,    -1,    66,   140,   126,   175,    -1,   175,
     140,   173,    -1,   176,   140,   174,    -1,   179,   140,   173,
      -1,   176,   140,    65,    -1,   176,   140,   179,    -1,   176,
     140,   143,   179,    -1,   179,   140,   176,    -1,   179,   140,
     179,    -1,   179,   140,   142,   178,    -1,   142,   178,   140,
      65,    -1,   142,   178,   140,   179,    -1,   142,   178,   140,
     143,   179,    -1,    68,   140,   143,   180,    -1,    66,   140,
     175,    -1,   179,   140,    66,    -1,   179,    69,   140,    66,
      -1,    65,    -1,   176,    -1,   179,    -1,   142,   178,    -1,
      65,    -1,    66,    -1,   175,    -1,    65,   140,   179,   140,
     173,    -1,    65,   140,   143,   179,   140,   173,    -1,   176,
     140,   143,   179,   140,   173,    -1,   142,   178,   140,   143,
     179,   140,   173,    -1,   162,    -1,   162,    -1,   162,    69,
      -1,   162,    -1,    70,    -1,    71,    -1,    72,    -1,    73,
      -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,
      -1,    85,    -1,    86,    -1,   176,    -1,   162,    -1,   177,
      -1,   162,    -1,     3,    -1,   162,    -1,   162,    -1,   162,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   202,   202,   207,   208,   212,   244,   286,   311,   338,
     357,   365,   371,   377,   382,   389,   402,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   435,
     598,   627,   633,   641,   655,   677,   683,   691,   697,   705,
     711,   719,   729,   740,   746,   760,   774,   782,   790,   798,
     806,   814,   822,   831,   840,   849,   860,   871,   882,   893,
     904,   915,   926,   937,   948,   959,   979,   984,   989,   994,
     999,  1004,  1019,  1044,  1069,  1093,  1105,  1117,  1125,  1136,
    1151,  1158,  1168,  1175,  1182,  1189,  1199,  1206,  1213,  1220,
    1231,  1238,  1245,  1252,  1262,  1269,  1276,  1283,  1293,  1300,
    1307,  1314,  1324,  1343,  1353,  1372,  1385,  1404,  1428,  1443,
    1450,  1458,  1466,  1474,  1482,  1490,  1498,  1506,  1514,  1522,
    1530,  1538,  1546,  1566,  1586,  1594,  1602,  1610,  1618,  1626,
    1634,  1642,  1650,  1658,  1666,  1674,  1682,  1690,  1698,  1706,
    1714,  1722,  1730,  1738,  1746,  1820,  1834,  1836,  1838,  1840,
    1842,  1844,  1846,  1848,  1850,  1852,  1854,  1856,  1858,  1860,
    1862,  1866,  1868,  1870,  1872,  1874,  1876,  1878,  1880,  1925,
    1959,  1961,  1963,  1965,  1967,  1969,  1971,  1973,  1975,  1981,
    1983,  1985,  1990,  2000,  2010,  2012,  2014,  2016,  2018,  2020,
    2022,  2024,  2026,  2028,  2030,  2032,  2034,  2036,  2038,  2040,
    2042,  2044,  2046,  2048,  2050,  2052,  2054,  2062,  2068,  2080,
    2086,  2097,  2105,  2118,  2126,  2134,  2145,  2158,  2166,  2179,
    2185,  2197,  2205,  2213,  2227,  2235,  2241,  2253,  2261,  2280,
    2303,  2311,  2340,  2346,  2352,  2360,  2369,  2375,  2381,  2399,
    2413,  2423,  2433,  2446,  2469,  2490,  2515,  2558,  2559,  2560,
    2561,  2562,  2563,  2564,  2565,  2569,  2570,  2571,  2572,  2573,
    2574,  2575,  2576,  2580,  2592,  2611,  2616,  2634,  2649,  2676,
    2704
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "D_ORG", "D_BYTE", "D_WORD",
  "D_SKIP", "D_EQU", "D_SET", "D_MAC", "D_DBIT", "D_END", "D_DSEG",
  "D_ISEG", "D_BSEG", "D_CSEG", "D_XSEG", "ACALL", "ADD", "ADDC", "AJMP",
  "ANL", "CALL", "CJNE", "CLR", "CPL", "DA", "DEC", "DIV", "DJNZ", "INC",
  "D_INCLUDE", "JB", "JBC", "JC", "JMP", "JNB", "JNC", "JNZ", "JZ",
  "LCALL", "LJMP", "MOV", "MOVC", "MOVX", "NOP", "MUL", "ORL", "POP",
  "PUSH", "RET", "RETI", "RL", "RLC", "RR", "RRC", "SETB", "SJMP", "SUBB",
  "SWAP", "XCH", "XCHD", "XRL", "AB", "A", "C", "PC", "DPTR", "BITPOS",
  "R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "USING", "AR0", "AR1",
  "AR2", "AR3", "AR4", "AR5", "AR6", "AR7", "VALUE", "SYMBOL", "CONTROL",
  "HIGH", "LOW", "NOT", "D_AT", "D_DS", "D_BIT", "D_DATA", "D_XDATA",
  "D_IDATA", "D_CODE", "MOD", "D_SEG", "D_RSEG", "PUBLIC", "EXTERN",
  "OVERL", "IF", "IFDEF", "IFNDEF", "ENDIF", "ELSE", "ERROR", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'|'", "'&'", "'^'", "XOR", "AND", "OR", "'>'",
  "'<'", "'='", "'!'", "SHL", "SHR", "'~'", "C_NE", "C_EQ", "C_LE", "C_GE",
  "C_LT", "C_GT", "':'", "'\\n'", "'('", "')'", "','", "'$'", "'@'", "'#'",
  "$accept", "program", "linelist", "line", "linerest", "control",
  "directive", "conditional", "defexpr", "undefsym", "publist",
  "extlist_code", "extlist_bit", "extlist_data", "extlist_idata",
  "extlist_xdata", "blist", "wlist", "expr", "instr", "two_op1", "two_op2",
  "two_op3", "two_op4", "two_op5", "two_op6", "single_op1", "single_op2",
  "three_op1", "rel", "rel2", "bit", "reg", "areg", "regi", "data8",
  "data16", "addr11", "addr16", "relative", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,    43,    45,    42,    47,    37,   124,    38,    94,
     367,   368,   369,    62,    60,    61,    33,   370,   371,   126,
     372,   373,   374,   375,   376,   377,    58,    10,    40,    41,
      44,    36,    64,    35
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   144,   145,   146,   146,   147,   147,   147,   147,   147,
     147,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   149,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   151,   151,   151,   151,   151,   151,   152,   153,
     154,   154,   155,   155,   155,   155,   156,   156,   156,   156,
     157,   157,   157,   157,   158,   158,   158,   158,   159,   159,
     159,   159,   160,   160,   160,   160,   161,   161,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   164,   164,   164,
     164,   165,   165,   166,   166,   166,   167,   168,   168,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   170,   170,   170,   170,   171,   171,   171,   172,
     172,   172,   172,   173,   174,   175,   175,   176,   176,   176,
     176,   176,   176,   176,   176,   177,   177,   177,   177,   177,
     177,   177,   177,   178,   179,   179,   180,   180,   181,   182,
     183
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     5,     3,     5,     3,     3,
       1,     2,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       4,     3,     4,     3,     4,     2,     2,     5,     5,     5,
       5,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     3,     5,     1,     3,     3,     5,
       1,     3,     3,     5,     1,     3,     3,     5,     1,     3,
       3,     5,     3,     3,     1,     1,     3,     1,     1,     3,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     4,     3,
       3,     3,     4,     4,     4,     3,     3,     3,     4,     3,
       3,     3,     4,     3,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     5,     5,     2,     2,
       2,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     7,
       7,     7,     7,     5,     5,     5,     5,     3,     3,     4,
       4,     3,     4,     3,     4,     4,     3,     3,     3,     3,
       3,     4,     3,     3,     4,     4,     4,     5,     4,     3,
       3,     4,     1,     1,     1,     2,     1,     1,     1,     5,
       6,     6,     7,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    38,     0,     0,     0,     0,     0,    87,    41,    45,
      47,    43,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,     0,     0,     0,     0,   181,   182,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,    31,    32,    33,    34,    35,    36,    37,
      89,    39,     0,     0,     0,     0,     0,    83,    84,    86,
      85,    16,     0,     0,     4,    10,     0,     0,    13,     0,
       0,   155,   154,     0,     0,     0,     0,     0,     0,   118,
      40,    88,   115,   265,   266,   267,   268,   269,   270,   271,
     272,    51,   274,   275,   114,   277,    52,   276,   117,    53,
       0,     0,     0,     0,     0,     0,   278,   157,     0,   159,
     160,   158,     0,   164,   165,   166,     0,   279,   179,     0,
     257,   258,   259,   260,   261,   262,   263,   264,     0,   201,
       0,   246,   247,   256,   189,   248,   190,   174,   242,     0,
     173,   243,   244,   175,   205,     0,     0,   172,   171,   202,
       0,   204,   280,   196,     0,   178,   203,   197,   198,   199,
     195,   194,     0,     0,     0,   206,   207,   208,     0,     0,
       0,     0,     0,   180,   167,   168,   169,   193,   192,   183,
     184,   185,   186,   191,   200,   161,   187,   170,   188,   162,
     163,    56,    14,     0,    75,    90,    76,     0,     0,     0,
       0,     0,    82,     1,     3,    11,    12,    54,     0,    55,
       0,     0,     0,     0,     0,     0,     0,    15,   121,   122,
     123,   120,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,    42,    46,    48,    44,    50,     0,     0,     0,     0,
     273,     0,     0,   255,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    64,    65,    62,
      63,    61,    57,    59,    58,    60,    73,    69,    67,    71,
      66,     0,     0,     9,   119,   135,   134,   131,   132,   133,
     125,   127,   129,   130,   128,   126,     0,     0,   150,     0,
       0,     0,   146,     0,   140,     0,   139,   137,   145,   141,
     149,   153,   147,   151,   113,   112,   116,     0,     0,   217,
     218,     0,     0,   223,   221,     0,     0,     0,     0,     0,
     254,   227,   253,   228,   226,     0,     0,   239,     0,     0,
     229,     0,   230,     0,   240,     0,   232,   233,     0,     0,
       0,     0,    91,    89,    96,     0,   100,     0,    92,     0,
       0,    92,     0,     0,    92,     0,    74,    70,    68,    72,
       0,     0,   136,   152,   144,   138,   148,   142,   143,   219,
     220,   224,   225,   222,     0,     0,     0,     0,   176,   177,
     238,   235,     0,   236,   231,   241,   234,     0,     0,     0,
     214,   213,   216,   215,     0,    81,     0,     0,    78,     0,
       0,     0,    79,     0,     0,    80,     0,    77,     0,     7,
       5,     0,   249,     0,     0,   237,     0,     0,     0,    97,
      98,   101,   102,    93,    94,    93,    94,    93,    94,   250,
       0,   251,   211,   209,   212,   210,     0,     0,     0,     0,
       0,   252,    99,   103,    95,    95,    95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    94,    95,    96,    97,    98,   110,   280,
     226,   409,   405,   407,   413,   410,   121,   126,   122,   100,
     139,   144,   145,   179,   174,   197,   170,   164,   159,   383,
     381,   165,   290,   123,   291,   146,   128,   137,   148,   183
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -291
static const yytype_int16 yypact[] =
{
     689,  -291,  1608,   310,    60,  1608,  1608,  -291,   -84,   -78,
     -76,   -71,   -52,  1608,   -30,   -30,  1608,  1332,  1608,   146,
     318,   318,   -22,  1243,   -16,  1452,  1169,  1608,  1608,  1608,
      50,  1608,  1608,  1608,  1608,  1608,  1608,  1134,    14,   -57,
    -291,     7,  1332,  1530,  1530,  -291,  -291,    17,    35,    44,
      69,   318,  1608,   -30,    74,   -30,   -30,  1356,  -291,  -291,
    -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,
    -291,  1530,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,
     -61,  -291,  1608,    26,    56,   316,    60,  -291,  -291,  -291,
    -291,  -291,   149,   562,  -291,  -291,    16,    18,  -291,    79,
      21,  -291,  -291,  1608,  1608,  1608,  1608,  1608,  1608,  -291,
    -291,  1778,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,
    -291,    20,  1778,  -291,  -291,  -291,    22,  1778,  -291,  -291,
     942,  1608,  1608,  1608,  1608,  1608,  1778,  -291,    29,  -291,
    -291,  -291,    30,  -291,  -291,  -291,    31,  1778,  -291,    42,
    -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,   301,  -291,
      43,  -291,  -291,   407,  -291,  -291,  -291,  -291,  -291,   301,
    -291,  -291,  -291,  -291,  -291,    45,    46,  -291,  -291,  -291,
      47,  -291,  1778,  -291,   -55,  -291,  -291,  -291,  -291,  -291,
    -291,  -291,    54,    55,   301,  -291,  -291,  -291,    57,   -46,
      59,    62,    51,  -291,  -291,  -291,  -291,  -291,  -291,  -291,
    -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,  -291,
    -291,  -291,  -291,   942,  -291,  -291,    68,     8,    23,    34,
      52,    58,  -291,  -291,  -291,  -291,  -291,  -291,  1267,  -291,
    1608,  1530,    60,  1530,    60,   323,   816,  -291,   113,   113,
     113,  1819,   113,  1638,  1608,  1608,  1608,  1608,  1608,  1608,
    1608,  1608,  1608,  1608,  1608,  1544,  1339,  1602,    85,  1608,
    1608,  1608,  1608,  1608,  1608,  1608,  1608,   423,    60,  -291,
     108,  -291,  -291,  -291,  -291,  -291,  1428,  1550,   -60,  1515,
    -291,    72,    11,  -291,  -291,  1608,  1608,  1608,   101,   102,
    1608,    13,    88,  1025,    95,   990,    97,   109,   110,   147,
    -291,   153,   198,   198,   198,   198,   198,  -291,  1778,  -291,
    -291,  -291,  -291,  -291,  -291,  -291,   132,   184,   186,   192,
    -291,  1608,  1608,  -291,  -291,  1800,  1800,  1819,  1819,  1819,
     553,   553,   553,   677,   677,   677,  1608,  1608,    99,  1608,
    1608,  1608,    99,  1608,   228,  1608,   113,   113,  -291,  -291,
    -291,  -291,  -291,  -291,  -291,  -291,  -291,   301,  1530,  -291,
    -291,  1608,  1608,  -291,  -291,  1530,  1530,   159,   157,  1530,
    1778,  -291,  1778,  -291,  -291,   233,   237,  -291,    60,  1060,
    -291,  1530,  -291,   238,  -291,   301,  -291,  -291,   -10,   207,
     240,   241,  -291,  -291,   171,   -80,   176,   -49,  -115,   175,
     177,   -70,   183,   178,   188,   -43,  -291,  -291,  -291,  -291,
     942,   942,    99,   228,    99,    99,   228,   228,   228,  -291,
    -291,  -291,  -291,  -291,   185,  1608,  1530,   187,  -291,  -291,
    -291,  -291,  1530,  -291,  -291,  -291,  -291,   216,   219,   220,
    -291,  -291,  -291,  -291,  1608,  -291,   198,  1608,  -291,   198,
    1608,   198,  -291,  1608,   198,  -291,  1608,  -291,   198,  -291,
    -291,  1608,  -291,   194,  1608,  -291,    40,   272,   274,  1778,
     205,  1778,   206,  1666,   -66,  1694,   -58,  1778,   210,  -291,
    1608,  -291,  -291,  -291,  -291,  -291,  1608,  1608,  1608,  1608,
    1608,  -291,  1778,  1778,  1722,  1750,  1778
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -291,  -291,  -291,   250,  -110,  -291,  -291,  -291,    33,     6,
    -291,  -204,  -291,  -291,  -291,  -291,  -291,  -291,    -2,  -291,
     426,    19,   308,    67,  -291,  -291,   331,    -9,  -291,  -290,
    -291,     9,    28,   128,   -59,    49,   -85,   351,    32,    12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -112
static const yytype_int16 yytable[] =
{
     111,   232,   127,   111,   111,   374,    99,   384,   201,   131,
     298,   136,   166,   299,   136,   132,   147,   133,   163,   163,
     279,   460,   134,   304,  -108,   163,   163,   182,   147,   163,
     182,   182,   182,   147,   147,   138,   180,   180,   129,   130,
     180,   135,   213,   167,   187,   188,   189,   160,   173,   163,
     182,   171,   124,   175,   171,   447,   196,   448,   449,   455,
     456,   205,   185,   125,   214,   198,   463,   190,   191,  -104,
     498,   203,   172,  -110,   176,   172,   220,   222,   499,   200,
     111,  -106,   209,   375,   127,   202,   199,   237,   238,   239,
     458,   459,   207,   208,   305,   181,   467,   468,   186,    99,
     210,   248,   249,   250,   251,   252,   253,   492,   493,   211,
     294,   412,   415,   310,   224,   223,   237,   238,   239,   308,
     221,   150,   151,   152,   153,   154,   155,   156,   157,   111,
     111,   111,   111,   111,   212,   302,   333,   101,   102,   216,
     103,   104,   105,   309,   225,   472,   312,   101,   102,   233,
     103,   104,   105,   235,   379,   236,   388,   323,   247,   325,
     277,   313,   278,   106,   281,   282,   283,   284,   285,   286,
     287,   288,   314,   106,   240,   241,   242,   243,   244,   107,
     245,   489,   289,   292,   491,   295,   296,   297,   108,   107,
     315,   109,   184,   366,   300,   301,   316,   303,   108,   306,
     501,   109,   307,   240,   241,   242,   243,   244,   311,   245,
     355,   149,   378,   385,   386,   246,   150,   151,   152,   153,
     154,   155,   156,   157,   267,   268,   269,   270,   389,   271,
     272,   273,   274,   275,   276,   393,   318,   416,   163,   398,
     127,   402,   127,   271,   272,   273,   274,   275,   276,   321,
     400,   399,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   348,   352,   354,   319,   356,   357,   358,
     359,   360,   361,   362,   363,   450,   127,   150,   151,   152,
     153,   154,   155,   156,   157,   163,   403,   401,   158,   417,
     322,   418,   324,   380,   382,   382,   373,   419,   163,   435,
     436,   438,   439,   440,   445,   452,   453,   454,   429,   387,
     469,   470,   457,   112,   369,   461,   462,   465,   404,   406,
     408,   411,   414,   464,   466,   471,   365,   474,   476,   111,
     111,   477,   478,   396,   490,   370,   446,   494,   377,   495,
     451,   496,   497,   234,   422,   423,   500,   424,   425,   426,
     206,   427,   392,   428,   397,   269,   270,   178,   271,   272,
     273,   274,   275,   276,   420,   421,   320,   141,     0,   163,
     163,   150,   151,   152,   153,   154,   155,   156,   157,     0,
     431,   432,     0,   161,   162,     0,   127,     0,     0,   113,
     114,   115,   116,   117,   118,   119,   120,   101,   102,     0,
     103,   104,   105,     0,     0,   101,   102,     0,   103,   104,
     105,   227,   228,   229,   230,   231,     0,   430,   326,   327,
     328,   329,   330,   106,   433,   434,   364,     0,   437,     0,
       0,   106,     0,   382,     0,     0,     0,     0,   443,   107,
     444,   140,     0,   143,     0,     0,     0,   107,   108,     0,
       0,   109,   479,     0,     0,   481,   108,     0,   483,   109,
       0,   485,   480,   195,   487,   482,     0,   484,   204,   382,
     486,     0,   382,     0,   488,     0,   293,     0,     0,   215,
       0,   217,   218,   219,     0,   473,     0,     0,   382,     0,
       0,   475,     0,     0,   502,   503,   504,   505,   506,     0,
       0,     0,   113,   114,   115,   116,   117,   118,   119,   120,
     101,   102,     0,   103,   104,   105,     0,     0,     0,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   106,   271,   272,   273,
     274,   275,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,     0,
       0,   108,    -2,     1,   109,     0,     2,     3,     4,     5,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,    82,     0,     0,     0,
       0,     0,     0,     0,    83,    84,    85,     0,    86,    87,
      88,    89,    90,   262,   263,   264,   265,   266,   267,   268,
     269,   270,     0,   271,   272,   273,   274,   275,   276,     0,
       1,     0,     0,     2,     3,     4,     5,     0,     0,    91,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,    83,    84,    85,     0,    86,    87,    88,    89,    90,
     265,   266,   267,   268,   269,   270,     0,   271,   272,   273,
     274,   275,   276,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     5,     0,     0,    91,   331,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
     332,     0,     0,     0,     0,     0,     0,     0,    83,    84,
      85,     0,    86,    87,    88,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     2,     3,     4,     5,
       0,     0,     0,    91,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    84,    85,     0,    86,    87,
      88,    89,    90,     0,     0,   374,   394,     0,     0,     0,
     150,   151,   152,   153,   154,   155,   156,   157,     0,   113,
     114,   115,   116,   117,   118,   119,   120,   101,   102,    91,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
     390,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   113,   114,   115,   116,   117,   118,
     119,   120,   101,   102,     0,   103,   104,   105,     0,   107,
       0,     0,     0,     0,     0,   441,     0,     0,   108,     0,
       0,   109,   395,   375,     0,     0,     0,     0,   106,   113,
     114,   115,   116,   117,   118,   119,   120,   101,   102,     0,
     103,   104,   105,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,     0,   109,     0,   391,     0,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,   108,   138,
     192,   109,   193,   442,   150,   151,   152,   153,   154,   155,
     156,   157,     0,   113,   114,   115,   116,   117,   118,   119,
     120,   101,   102,     0,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,   168,     0,     0,   177,     0,   150,
     151,   152,   153,   154,   155,   156,   157,   106,   113,   114,
     115,   116,   117,   118,   119,   120,   101,   102,     0,   103,
     104,   105,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,   108,     0,     0,   109,   194,     0,     0,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,   108,   168,     0,
     109,   169,     0,   150,   151,   152,   153,   154,   155,   156,
     157,     0,   113,   114,   115,   116,   117,   118,   119,   120,
     101,   102,   317,   103,   104,   105,     0,   150,   151,   152,
     153,   154,   155,   156,   157,     0,   113,   114,   115,   116,
     117,   118,   119,   120,   101,   102,   106,   103,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,     0,
     106,   108,     0,     0,   109,   169,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   138,   142,     0,
       0,     0,     0,     0,     0,   108,     0,     0,   109,     0,
       0,   113,   114,   115,   116,   117,   118,   119,   120,   101,
     102,   138,   103,   104,   105,     0,   101,   102,     0,   103,
     104,   105,     0,     0,     0,   113,   114,   115,   116,   117,
     118,   119,   120,   101,   102,   106,   103,   104,   105,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   349,   350,   351,     0,     0,     0,   107,   106,
     108,     0,     0,   109,     0,     0,     0,   108,     0,     0,
     109,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,   108,     0,     0,   109,   150,   151,
     152,   153,   154,   155,   156,   157,     0,   113,   114,   115,
     116,   117,   118,   119,   120,   101,   102,     0,   103,   104,
     105,     0,   150,   151,   152,   153,   154,   155,   156,   157,
       0,   113,   114,   115,   116,   117,   118,   119,   120,   101,
     102,   106,   103,   104,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,   106,   108,     0,     0,   109,
     367,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
     108,     0,     0,   109,   113,   114,   115,   116,   117,   118,
     119,   120,   101,   102,     0,   103,   104,   105,     0,   113,
     114,   115,   116,   117,   118,   119,   120,   101,   102,     0,
     103,   104,   105,     0,     0,     0,     0,     0,   106,     0,
       0,   101,   102,     0,   103,   104,   105,   101,   102,     0,
     103,   104,   105,   106,   107,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,     0,   109,   106,   376,   107,
       0,     0,     0,   106,     0,   371,     0,   346,   108,   347,
       0,   109,     0,   107,     0,     0,   372,     0,     0,   107,
       0,     0,   108,     0,     0,   109,     0,     0,   108,   101,
     102,   109,   103,   104,   105,   101,   102,     0,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,     0,     0,     0,     0,
       0,   106,     0,     0,     0,     0,     0,   353,     0,     0,
       0,   107,     0,     0,     0,     0,     0,   107,     0,     0,
     108,     0,     0,   109,     0,     0,   108,     0,     0,   109,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,   272,
     273,   274,   275,   276,     0,     0,     0,   334,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,     0,   271,   272,   273,   274,
     275,   276,     0,     0,     0,  -109,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,     0,   271,   272,   273,   274,   275,   276,
       0,     0,     0,  -105,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,     0,   271,   272,   273,   274,   275,   276,     0,     0,
       0,  -111,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,     0,
     271,   272,   273,   274,   275,   276,     0,     0,     0,  -107,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,   272,
     273,   274,   275,   276,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,     0,
     271,   272,   273,   274,   275,   276,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,     0,   271,
     272,   273,   274,   275,   276
};

static const yytype_int16 yycheck[] =
{
       2,    86,     4,     5,     6,    65,     0,   297,    65,    93,
      65,    13,    21,    68,    16,    93,    18,    93,    20,    21,
     130,   136,    93,    69,   139,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    65,    27,    28,     5,     6,
      31,    93,    51,    65,    32,    33,    34,    19,    64,    51,
      52,    23,     3,    25,    26,    65,    37,    67,    68,   139,
     140,    42,    30,     3,    52,    37,   136,    35,    36,   139,
     136,    64,    23,   139,    25,    26,    57,   138,   136,    65,
      82,   139,    65,   143,    86,   142,    37,     8,     9,    10,
     139,   140,    43,    44,   140,    28,   139,   140,    31,    93,
      65,   103,   104,   105,   106,   107,   108,    67,    68,    65,
     169,   315,   316,   223,    88,    82,     8,     9,    10,    68,
      71,    70,    71,    72,    73,    74,    75,    76,    77,   131,
     132,   133,   134,   135,    65,   194,   246,    87,    88,    65,
      90,    91,    92,   202,    88,   435,   138,    87,    88,     0,
      90,    91,    92,   137,   143,   137,   143,   242,   137,   244,
     140,   138,   140,   113,   131,   132,   133,   134,   135,   140,
     140,   140,   138,   113,    95,    96,    97,    98,    99,   129,
     101,   471,   140,   140,   474,   140,   140,   140,   138,   129,
     138,   141,   142,   278,   140,   140,   138,   140,   138,   140,
     490,   141,   140,    95,    96,    97,    98,    99,   140,   101,
     125,    65,   140,   112,   112,   136,    70,    71,    72,    73,
      74,    75,    76,    77,   125,   126,   127,   128,   140,   130,
     131,   132,   133,   134,   135,   140,   238,   105,   240,   142,
     242,    88,   244,   130,   131,   132,   133,   134,   135,   240,
     140,   142,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   238,   269,   270,   271,
     272,   273,   274,   275,   276,    68,   278,    70,    71,    72,
      73,    74,    75,    76,    77,   287,    88,   140,   142,   105,
     241,   105,   243,   295,   296,   297,   287,   105,   300,   140,
     143,    68,    65,   388,    66,    65,    65,   136,   367,   300,
     420,   421,   136,     3,   286,   140,   139,   139,   312,   313,
     314,   315,   316,   140,   136,   140,   277,   140,   112,   331,
     332,   112,   112,   305,   140,   286,   395,    65,   289,    65,
     399,   136,   136,    93,   346,   347,   136,   349,   350,   351,
      42,   353,   303,   355,   305,   127,   128,    26,   130,   131,
     132,   133,   134,   135,   331,   332,   238,    16,    -1,   371,
     372,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
     371,   372,    -1,    65,    66,    -1,   388,    -1,    -1,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    -1,    87,    88,    -1,    90,    91,
      92,    95,    96,    97,    98,    99,    -1,   368,    95,    96,
      97,    98,    99,   113,   375,   376,     3,    -1,   379,    -1,
      -1,   113,    -1,   435,    -1,    -1,    -1,    -1,   389,   129,
     391,    15,    -1,    17,    -1,    -1,    -1,   129,   138,    -1,
      -1,   141,   454,    -1,    -1,   457,   138,    -1,   460,   141,
      -1,   463,   456,    37,   466,   459,    -1,   461,    42,   471,
     464,    -1,   474,    -1,   468,    -1,    69,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,   436,    -1,    -1,   490,    -1,
      -1,   442,    -1,    -1,   496,   497,   498,   499,   500,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    -1,    -1,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   113,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,     0,     1,   141,    -1,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    -1,
      88,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,    -1,
       1,    -1,    -1,     4,     5,     6,     7,    -1,    -1,   137,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    88,    89,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
     123,   124,   125,   126,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,     1,    -1,    -1,
       4,     5,     6,     7,    -1,    -1,   137,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    89,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,     4,     5,     6,     7,
      -1,    -1,    -1,   137,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    -1,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,    -1,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   137,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,   138,    -1,
      -1,   141,   142,   143,    -1,    -1,    -1,    -1,   113,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,   129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,    -1,    -1,   141,    -1,   143,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    65,
      66,   141,    68,   143,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,   113,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,    -1,    -1,   141,   142,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    65,    -1,
     141,   142,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    65,    90,    91,    92,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   113,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   138,    -1,    -1,   141,   142,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,   141,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    65,    90,    91,    92,    -1,    87,    88,    -1,    90,
      91,    92,    -1,    -1,    -1,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,   113,    90,    91,    92,    -1,
      -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   123,   124,   125,    -1,    -1,    -1,   129,   113,
     138,    -1,    -1,   141,    -1,    -1,    -1,   138,    -1,    -1,
     141,    -1,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,    -1,    -1,   141,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,   113,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   138,    -1,    -1,   141,
     142,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,    -1,   141,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,    87,    88,    -1,    90,    91,    92,    87,    88,    -1,
      90,    91,    92,   113,   129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,    -1,    -1,   141,   113,   143,   129,
      -1,    -1,    -1,   113,    -1,   115,    -1,   123,   138,   125,
      -1,   141,    -1,   129,    -1,    -1,   126,    -1,    -1,   129,
      -1,    -1,   138,    -1,    -1,   141,    -1,    -1,   138,    87,
      88,   141,    90,    91,    92,    87,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,   129,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,
     138,    -1,    -1,   141,    -1,    -1,   138,    -1,    -1,   141,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,    -1,    -1,    -1,   139,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,   130,   131,   132,   133,
     134,   135,    -1,    -1,    -1,   139,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,   139,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,    -1,    -1,
      -1,   139,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,   139,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
     130,   131,   132,   133,   134,   135,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   130,
     131,   132,   133,   134,   135
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,     5,     6,     7,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      88,    89,    94,   102,   103,   104,   106,   107,   108,   109,
     110,   137,   145,   146,   147,   148,   149,   150,   151,   153,
     163,    87,    88,    90,    91,    92,   113,   129,   138,   141,
     152,   162,     3,    79,    80,    81,    82,    83,    84,    85,
      86,   160,   162,   177,   179,     3,   161,   162,   180,   152,
     152,    93,    93,    93,    93,    93,   162,   181,    65,   164,
     164,   181,    66,   164,   165,   166,   179,   162,   182,    65,
      70,    71,    72,    73,    74,    75,    76,    77,   142,   172,
     176,    65,    66,   162,   171,   175,   171,    65,    65,   142,
     170,   176,   179,    64,   168,   176,   179,    68,   170,   167,
     175,   167,   162,   183,   142,   182,   167,   183,   183,   183,
     182,   182,    66,    68,   142,   164,   165,   169,   176,   179,
      65,    65,   142,    64,   164,   165,   166,   179,   179,    65,
      65,    65,    65,   171,   183,   164,    65,   164,   164,   164,
     165,   179,   138,   152,    88,    88,   154,    95,    96,    97,
      98,    99,   180,     0,   147,   137,   137,     8,     9,    10,
      95,    96,    97,    98,    99,   101,   136,   137,   162,   162,
     162,   162,   162,   162,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   130,   131,   132,   133,   134,   135,   140,   140,   148,
     153,   152,   152,   152,   152,   152,   140,   140,   140,   140,
     176,   178,   140,    69,   178,   140,   140,   140,    65,    68,
     140,   140,   178,   140,    69,   140,   140,   140,    68,   178,
     148,   140,   138,   138,   138,   138,   138,    65,   162,   176,
     177,   175,   179,   180,   179,   180,    95,    96,    97,    98,
      99,    11,    94,   148,   139,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   123,   125,   162,   123,
     124,   125,   162,   125,   162,   125,   162,   162,   162,   162,
     162,   162,   162,   162,     3,   179,   180,   142,   143,   176,
     179,   115,   126,   175,    65,   143,   143,   179,   140,   143,
     162,   174,   162,   173,   173,   112,   112,   175,   143,   140,
      65,   143,   179,   140,    66,   142,   176,   179,   142,   142,
     140,   140,    88,    88,   153,   156,   153,   157,   153,   155,
     159,   153,   155,   158,   153,   155,   105,   105,   105,   105,
     152,   152,   162,   162,   162,   162,   162,   162,   162,   178,
     179,   175,   175,   179,   179,   140,   143,   179,    68,    65,
     180,    65,   143,   179,   179,    66,   178,    65,    67,    68,
      68,   178,    65,    65,   136,   139,   140,   136,   139,   140,
     136,   140,   139,   136,   140,   139,   136,   139,   140,   148,
     148,   140,   173,   179,   140,   179,   112,   112,   112,   162,
     153,   162,   153,   162,   153,   162,   153,   162,   153,   173,
     140,   173,    67,    68,    65,    65,   136,   136,   136,   136,
     136,   173,   162,   162,   162,   162,   162
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 213 "parser.y"
    {
			if((yyvsp[(4) - (5)]).val.v<0)
			{
				error("size in DS directive can not be negative");
			}

			if ( ( (current_seg->type==DSEG) || (current_seg->type==ISEG) ) 
				  && (ObjectFile==0) && (current_seg->value<8) )
			{
				if(pass1) warning("DS directive overlaps register bank 0");
			}

			label_symbol=(yyvsp[(1) - (5)]).sym;

			if ( (current_seg->type==DSEG) || (current_seg->type==ISEG) ||
				 (current_seg->type==XSEG) )
			{
				(yyvsp[(1) - (5)]).sym->value = current_seg->value;
				(yyvsp[(1) - (5)]).sym->flags = 0;
				current_seg->value+=(yyvsp[(4) - (5)]).val.v;
				(yyvsp[(1) - (5)]).sym->type = current_seg->type;
				(yyvsp[(1) - (5)]).sym->size = (yyvsp[(4) - (5)]).val.v;
				(yyvsp[(1) - (5)]).sym->segment=current_seg;
			}
			else
			{
				error("DS directive works only in DSEG, ISEG, or XSEG");
			}
			bytecount = 0;
			(yyval).value = 0;
		;}
    break;

  case 6:
#line 245 "parser.y"
    {
			if((yyvsp[(2) - (3)]).val.v<0)
			{
				error("size in DS directive can not be negative");
			}

			if ( ( (current_seg->type==DSEG) || (current_seg->type==ISEG) ) 
				  && (ObjectFile==0) && (current_seg->value<8) )
			{
				if(pass1) warning("DS directive overlaps register bank 0");
			}

			if(label_symbol!=NULL)
			{
				if(current_seg->type==label_symbol->type)
				{
					if ( (current_seg->type==DSEG) || (current_seg->type==ISEG) ||
						 (current_seg->type==XSEG) )
					{
						current_seg->value+= (yyvsp[(2) - (3)]).val.v;
						label_symbol->size += (yyvsp[(2) - (3)]).val.v;
					}
					else
					{
						error("DS directive works only in DSEG, ISEG, or XSEG");
					}
				}
				else
				{
					current_seg->value+= (yyvsp[(2) - (3)]).val.v;
					if(pass1) warning("DS directive without a preceding label");
				}
			}
			else
			{
				current_seg->value+= (yyvsp[(2) - (3)]).val.v;
				if(pass1) warning("DS directive without a preceding label");
			}
			bytecount = 0;
			(yyval).value = 0;
		;}
    break;

  case 7:
#line 287 "parser.y"
    {
			label_symbol=(yyvsp[(1) - (5)]).sym;
			
			if((yyvsp[(4) - (5)]).val.v<0)
			{
				error("size in DBIT directive can not be negative");
			}
			if(current_seg->type!=BSEG)
			{
				error("DBIT directive works only in BSEG");
			}
			else
			{
				(yyvsp[(1) - (5)]).sym->value = current_seg->value;
				(yyvsp[(1) - (5)]).sym->flags = 0;
				current_seg->value+=(yyvsp[(4) - (5)]).val.v;
				(yyvsp[(1) - (5)]).sym->type = current_seg->type;
				(yyvsp[(1) - (5)]).sym->size = (yyvsp[(4) - (5)]).val.v;
				(yyvsp[(1) - (5)]).sym->segment=current_seg;
			}
			bytecount = 0;
			(yyval).value = 0;
		;}
    break;

  case 8:
#line 312 "parser.y"
    {
			if((yyvsp[(2) - (3)]).val.v<0)
			{
				error("size in DBIT directive can not be negative");
			}
			if(label_symbol!=NULL)
			{
				if ( (label_symbol->type!=BSEG) || (current_seg->type!=BSEG) )
				{
					if(pass1) error("DBIT directive works only in BSEG");
				}
				else
				{
					current_seg->value+= (yyvsp[(2) - (3)]).val.v;
					label_symbol->size += (yyvsp[(2) - (3)]).val.v;
				}
			}
			else
			{
				current_seg->value+= (yyvsp[(2) - (3)]).val.v;
				if(pass1) warning("DBIT directive without a preceding label");
			}
			bytecount = 0;
			(yyval).value = 0;
		;}
    break;

  case 9:
#line 339 "parser.y"
    {
			label_symbol=(yyvsp[(1) - (3)]).sym;
			if (abort_asap)
			{
				YYABORT;
			}

			(yyvsp[(1) - (3)]).sym->type = current_seg->type;
			(yyvsp[(1) - (3)]).sym->value = current_seg->value;
			(yyvsp[(1) - (3)]).sym->segment = current_seg;
			(yyvsp[(1) - (3)]).sym->size = 0;

			if((yyvsp[(1) - (3)]).sym->type==CSEG)
			{
				current_seg->value+=(yyvsp[(3) - (3)]).value;
				bytecount = 0;
			}
		;}
    break;

  case 10:
#line 358 "parser.y"
    {
		current_seg->value+=(yyvsp[(1) - (1)]).value;
		bytecount = 0;
	;}
    break;

  case 11:
#line 366 "parser.y"
    {
		(yyval).value = (yyvsp[(1) - (2)]).value;
		if( dashl && pass2 ) dumplist((yyvsp[(2) - (2)]).str,1);
		symexp[0]=0; // start over with symbolic expression
	;}
    break;

  case 12:
#line 372 "parser.y"
    {
		(yyval).value = (yyvsp[(1) - (2)]).value;
		if( dashl && pass2 ) dumplist((yyvsp[(2) - (2)]).str,1);
		symexp[0]=0; // start over with symbolic expression
	;}
    break;

  case 13:
#line 378 "parser.y"
    {
		(yyval).value = (yyvsp[(1) - (1)]).value;
		symexp[0]=0; // start over with symbolic expression
	;}
    break;

  case 14:
#line 383 "parser.y"
    {
		if( ((yyvsp[(1) - (2)]).sym->type == UNDEF) && pass1)
				error("Undefined Macro: %s",(yyvsp[(1) - (2)]).sym->name);
		seek_eol();
		symexp[0]=0; // start over with symbolic expression
	;}
    break;

  case 15:
#line 390 "parser.y"
    {
		if (current_seg->type!=CSEG)
		{
			//Switch to last used code segment
			if(pass1) warning("%s set as the active segment.\n", last_cseg->name);  
			current_seg=last_cseg;
		}
		(yyval).value = (yyvsp[(1) - (2)]).value;
		if( dashl && pass2 ) dumplist((yyvsp[(2) - (2)]).str,1);
		symexp[0]=0; // start over with symbolic expression
		last_cseg=current_seg;
	;}
    break;

  case 16:
#line 403 "parser.y"
    {
		(yyval).value = 0;
		if( dashl && pass2 ) dumplist((yyvsp[(1) - (1)]).str,0);
		symexp[0]=0; // start over with symbolic expression
	;}
    break;

  case 17:
#line 408 "parser.y"
    { (yyval).value = 0; BadRegUse("AB");   ;}
    break;

  case 18:
#line 409 "parser.y"
    { (yyval).value = 0; BadRegUse("A");    ;}
    break;

  case 19:
#line 410 "parser.y"
    { (yyval).value = 0; BadRegUse("C");    ;}
    break;

  case 20:
#line 411 "parser.y"
    { (yyval).value = 0; BadRegUse("PC");   ;}
    break;

  case 21:
#line 412 "parser.y"
    { (yyval).value = 0; BadRegUse("DPTR"); ;}
    break;

  case 22:
#line 413 "parser.y"
    { (yyval).value = 0; BadRegUse("R0");   ;}
    break;

  case 23:
#line 414 "parser.y"
    { (yyval).value = 0; BadRegUse("R1");   ;}
    break;

  case 24:
#line 415 "parser.y"
    { (yyval).value = 0; BadRegUse("R2");   ;}
    break;

  case 25:
#line 416 "parser.y"
    { (yyval).value = 0; BadRegUse("R3");   ;}
    break;

  case 26:
#line 417 "parser.y"
    { (yyval).value = 0; BadRegUse("R4");   ;}
    break;

  case 27:
#line 418 "parser.y"
    { (yyval).value = 0; BadRegUse("R5");   ;}
    break;

  case 28:
#line 419 "parser.y"
    { (yyval).value = 0; BadRegUse("R6");   ;}
    break;

  case 29:
#line 420 "parser.y"
    { (yyval).value = 0; BadRegUse("R7");   ;}
    break;

  case 30:
#line 421 "parser.y"
    { (yyval).value = 0; BadRegUse("AR0");  ;}
    break;

  case 31:
#line 422 "parser.y"
    { (yyval).value = 0; BadRegUse("AR1");  ;}
    break;

  case 32:
#line 423 "parser.y"
    { (yyval).value = 0; BadRegUse("AR2");  ;}
    break;

  case 33:
#line 424 "parser.y"
    { (yyval).value = 0; BadRegUse("AR3");  ;}
    break;

  case 34:
#line 425 "parser.y"
    { (yyval).value = 0; BadRegUse("AR4");  ;}
    break;

  case 35:
#line 426 "parser.y"
    { (yyval).value = 0; BadRegUse("AR5");  ;}
    break;

  case 36:
#line 427 "parser.y"
    { (yyval).value = 0; BadRegUse("AR6");  ;}
    break;

  case 37:
#line 428 "parser.y"
    { (yyval).value = 0; BadRegUse("AR7");  ;}
    break;

  case 38:
#line 430 "parser.y"
    {
		seek_eol();
	;}
    break;

  case 39:
#line 436 "parser.y"
    {
	if(strncasecmp((yyvsp[(1) - (1)]).str, "INCLUDE", 7)==0)
	{
		push_include((yyvsp[(1) - (1)]).str);
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "MOD", 3)==0)
	{
	    push_include((yyvsp[(1) - (1)]).str);
		dosyminit=0; //Don't use default symbol names
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "NOMOD51", 7)==0)
	{
		dosyminit=0; //Don't use default symbol names
	}
	else if ( (strncasecmp((yyvsp[(1) - (1)]).str, "NOLIST", 6)==0) || (strncasecmp((yyvsp[(1) - (1)]).str, "NOPRINT", 7)==0) )
	{
		dashl=0;
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "PRINTF_FLOAT", 12)==0)
	{
		printf_float=1;
	}
	else if ( (strncasecmp((yyvsp[(1) - (1)]).str, "LIST", 4)==0) || (strncasecmp((yyvsp[(1) - (1)]).str, "PRINT", 5)==0) )
	{
		dashl=1;
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "OPTC51", 6)==0)
	{
		// The options are passed to the linker to verify proper
		// intermodule compatibility when compiling with C51.
		int j;

		if(pass1)
		{
			strncpy(optc51, &(yyvsp[(1) - (1)]).str[7], sizeof(optc51)-1);
			for(j=0; optc51[j]!=0; j++) // terminate string at first non-ASCII character
			{
				if( (optc51[j]<0x20) || (optc51[j]>0x7e) ) optc51[j]=0;
			}
		}

	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "ECHO", 4)==0)
	{
		if(pass2)
		{
			mesg_f("%s\n", &(yyvsp[(1) - (1)]).str[5]);
		}
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "MESSAGE", 7)==0)
	{
		if(pass2)
		{
			mesg_f("%s\n", &(yyvsp[(1) - (1)]).str[8]);
		}
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "ERROR", 5)==0)
	{
		if(pass2)
		{
			error("%s\n", &(yyvsp[(1) - (1)]).str[6]);
		}
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "WARNING", 7)==0)
	{
		if(pass2)
		{
			warning("%s\n", &(yyvsp[(1) - (1)]).str[8]);
		}
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "LINETEST", 8)==0)
	{
		linetest=atoi(&(yyvsp[(1) - (1)]).str[8]);
	}
	else if( (strncasecmp((yyvsp[(1) - (1)]).str, "POUNDWARNING", 12)==0) || (strncasecmp((yyvsp[(1) - (1)]).str, "PW", 2)==0) )
	{
		hash_warning_enable=1;
	}
	else if( (strncasecmp((yyvsp[(1) - (1)]).str, "NOPOUNDWARNING", 14)==0) || (strncasecmp((yyvsp[(1) - (1)]).str, "NPW", 3)==0) )
	{
		hash_warning_enable=0;
	}
	else if( (strncasecmp((yyvsp[(1) - (1)]).str, "HASHWARNING", 11)==0) || (strncasecmp((yyvsp[(1) - (1)]).str, "HW", 2)==0) )
	{
		hash_warning_enable=1;
	}
	else if( (strncasecmp((yyvsp[(1) - (1)]).str, "NOHASHWARNING", 13)==0) || (strncasecmp((yyvsp[(1) - (1)]).str, "NHW", 3)==0) )
	{
		hash_warning_enable=0;
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "NAME", 4)==0)
	{
		//The module name
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "DATE", 4)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "DEBUG", 5)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "PAGELENGTH", 10)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "NOTABS", 6)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "NOPAGING", 8)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "NOSYMBOLS", 9)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "XREF", 4)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "NOMACRO", 7)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "NOBUILTIN", 9)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "TITLE", 5)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "EJECT", 5)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "NOGEN", 5)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "GENONLY", 7)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "GEN", 3)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "NOCOND", 6)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "CONDONLY", 8)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "COND", 4)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "SAVE", 4)==0)
	{
	}
	else if(strncasecmp((yyvsp[(1) - (1)]).str, "RESTORE", 7)==0)
	{
	}
	else
		if (pass1) warning("Ignored unknown control '$%s'.\n", (yyvsp[(1) - (1)]).str);

	free((yyvsp[(1) - (1)]).str);
	(yyval).value = 0;
	add_ch('\n'); //Very important!
;}
    break;

  case 40:
#line 599 "parser.y"
    {
			if(current_seg->flags&RELOCATABLE)
			{
				error("ORG directive is only allowed in absolute segments");
			}
			else
			{
				if(ObjectFile==0)
				{
					if(current_seg->value>(unsigned int)(yyvsp[(2) - (2)]).val.v)
					{
						error("ORG directive must use a value that is greater than the current segment counter.");
					}
				}
				current_seg->value=(yyvsp[(2) - (2)]).val.v;
				if( pass2 ) emitaddr(current_seg->value);
				bytecount = 0;
				(yyval).value = 0;
				if( (ObjectFile==1) && pass2 )
				{
					if(current_seg->type==CSEG)
					{
						fprintf(fobj, "</CODE>\n\n");
						fprintf(fobj, "<CODE AT %04lX>\n", (yyvsp[(2) - (2)]).val.v);
					}
				}
			}
		;}
    break;

  case 41:
#line 628 "parser.y"
    {
			label_symbol=NULL;
			current_seg=abs_dseg;
			(yyval).value = 0;
		;}
    break;

  case 42:
#line 634 "parser.y"
    {
			label_symbol=NULL;
			current_seg=abs_dseg;
			current_seg->value = (yyvsp[(3) - (3)]).val.v;
			bytecount = 0;
			(yyval).value = 0;
		;}
    break;

  case 43:
#line 642 "parser.y"
    {
			label_symbol=NULL;
			if( (ObjectFile==1) && pass2 && (current_seg!=abs_cseg) )
			{
				fprintf(fobj, "</CODE>\n\n");
				fprintf(fobj, "<CODE AT %04lX>\n", abs_cseg->value);
			}
			current_seg=abs_cseg;
			last_cseg=current_seg;
			if( pass2 ) emitaddr(current_seg->value);
			bytecount = 0;
			(yyval).value = 0;
		;}
    break;

  case 44:
#line 656 "parser.y"
    {
			label_symbol=NULL;
			if(ObjectFile==0)
			{
				if(current_seg->value>(unsigned int)(yyvsp[(3) - (3)]).val.v)
				{
					error("'CSEG at' directive must use a value that is greater than the current CSEG counter.");
				}
			}
			if( (ObjectFile==1) && pass2 )
			{
				fprintf(fobj, "</CODE>\n\n");
				fprintf(fobj, "<CODE AT %04lX>\n", (yyvsp[(3) - (3)]).val.v);
			}
			current_seg=abs_cseg;
			last_cseg=current_seg;
			current_seg->value = (yyvsp[(3) - (3)]).val.v;
			if( pass2 ) emitaddr(current_seg->value);
			bytecount = 0;
			(yyval).value = 0;
	;}
    break;

  case 45:
#line 678 "parser.y"
    {
			label_symbol=NULL;
			current_seg=abs_iseg;
			(yyval).value = 0;
		;}
    break;

  case 46:
#line 684 "parser.y"
    {
			label_symbol=NULL;
			current_seg=abs_iseg;
			current_seg->value = (yyvsp[(3) - (3)]).val.v;
			bytecount = 0;
			(yyval).value = 0;
		;}
    break;

  case 47:
#line 692 "parser.y"
    {
			label_symbol=NULL;
			current_seg=abs_bseg;
			(yyval).value = 0;
		;}
    break;

  case 48:
#line 698 "parser.y"
    {
			label_symbol=NULL;
			current_seg=abs_bseg;
			current_seg->value = (yyvsp[(3) - (3)]).val.v;
			bytecount = 0;
			(yyval).value = 0;
		;}
    break;

  case 49:
#line 706 "parser.y"
    {
			label_symbol=NULL;
			current_seg=abs_xseg;
			(yyval).value = 0;
		;}
    break;

  case 50:
#line 712 "parser.y"
    {
			label_symbol=NULL;
			current_seg=abs_xseg;
			current_seg->value = (yyvsp[(3) - (3)]).val.v;
			bytecount = 0;
			(yyval).value = 0;
		;}
    break;

  case 51:
#line 720 "parser.y"
    {
			if(current_seg->type!=CSEG)
			{
				if(pass1) warning("%s set as the active segment.\n", last_cseg->name);  
				current_seg=last_cseg;
			}
			(yyval).value = (yyvsp[(2) - (2)]).value;
			last_cseg=current_seg;
		;}
    break;

  case 52:
#line 730 "parser.y"
    {
			if(current_seg->type!=CSEG)
			{
				if(pass1) warning("%s set as the active segment.\n", last_cseg->name);  
				current_seg=last_cseg;
			}
			(yyval).value = (yyvsp[(2) - (2)]).value;
			(yyval).val.s=(yyvsp[(2) - (2)]).val.s;
			last_cseg=current_seg;
		;}
    break;

  case 53:
#line 741 "parser.y"
    {
			current_seg->value+=(yyvsp[(2) - (2)]).val.v;
			(yyval).value = (yyvsp[(2) - (2)]).val.v;
			if( pass2 )	emitaddr(current_seg->value);
		;}
    break;

  case 54:
#line 747 "parser.y"
    {
			if(pass1)
			{
				(yyvsp[(1) - (2)]).sym->literal=(yyvsp[(2) - (2)]).str;
				(yyvsp[(1) - (2)]).sym->type = EQU;
				(yyvsp[(1) - (2)]).sym->value = 0;
			}
			else //pass2
			{
				free((yyvsp[(2) - (2)]).str);
			}
			(yyval).value = 0;
		;}
    break;

  case 55:
#line 761 "parser.y"
    {
			if(pass1)
			{
				(yyvsp[(1) - (2)]).sym->literal=(yyvsp[(2) - (2)]).str;
				(yyvsp[(1) - (2)]).sym->type = MAC;
				(yyvsp[(1) - (2)]).sym->value = 0;
			}
			else //pass2
			{
				free((yyvsp[(2) - (2)]).str);
			}
			(yyval).value = 0;
		;}
    break;

  case 56:
#line 775 "parser.y"
    {
			if((yyvsp[(2) - (2)]).val.v<4)
				RegisterBank=(yyvsp[(2) - (2)]).val.v;
			else
				error("Register bank can only be set to 0, 1, 2, or 3");
			(yyval).value = 0;
		;}
    break;

  case 57:
#line 783 "parser.y"
    {
			(yyvsp[(1) - (3)]).sym->type = DSEG;
			(yyvsp[(1) - (3)]).sym->segment = NULL;
			(yyvsp[(1) - (3)]).sym->flags = CONSTANT; // These are not variables but constants
			(yyvsp[(1) - (3)]).sym->value = (yyvsp[(3) - (3)]).val.v;
			(yyval).value = 0;
		;}
    break;

  case 58:
#line 791 "parser.y"
    {
			(yyvsp[(1) - (3)]).sym->type = ISEG;
			(yyvsp[(1) - (3)]).sym->segment = NULL;
			(yyvsp[(1) - (3)]).sym->flags = CONSTANT; // These are not variables but constants
			(yyvsp[(1) - (3)]).sym->value = (yyvsp[(3) - (3)]).val.v;
			(yyval).value = 0;
		;}
    break;

  case 59:
#line 799 "parser.y"
    {
			(yyvsp[(1) - (3)]).sym->type = XSEG;
			(yyvsp[(1) - (3)]).sym->segment = NULL;
			(yyvsp[(1) - (3)]).sym->flags = CONSTANT; // These are not variables but constants
			(yyvsp[(1) - (3)]).sym->value = (yyvsp[(3) - (3)]).val.v;
			(yyval).value = 0;
		;}
    break;

  case 60:
#line 807 "parser.y"
    {
			(yyvsp[(1) - (3)]).sym->type = CSEG;
			(yyvsp[(1) - (3)]).sym->segment = NULL;
			(yyvsp[(1) - (3)]).sym->flags = CONSTANT; // These are not variables but constants
			(yyvsp[(1) - (3)]).sym->value = (yyvsp[(3) - (3)]).val.v;
			(yyval).value = 0;
		;}
    break;

  case 61:
#line 815 "parser.y"
    {
			(yyvsp[(1) - (3)]).sym->type = BSEG;
			(yyvsp[(1) - (3)]).sym->segment = NULL;
			(yyvsp[(1) - (3)]).sym->flags = CONSTANT; // These are not variables but constants
			(yyvsp[(1) - (3)]).sym->value = (yyvsp[(3) - (3)]).val.v;
			(yyval).value = 0;
		;}
    break;

  case 62:
#line 823 "parser.y"
    {
			if((yyvsp[(1) - (3)]).sym->literal!=NULL) free((yyvsp[(1) - (3)]).sym->literal);
			(yyvsp[(1) - (3)]).sym->literal=(char *)malloc(2+1);
			sprintf((yyvsp[(1) - (3)]).sym->literal, "R%ld", (yyvsp[(3) - (3)]).val.v);
			(yyvsp[(1) - (3)]).sym->type = SET;
			(yyvsp[(1) - (3)]).sym->value = 0;
			(yyval).value = 0;
		;}
    break;

  case 63:
#line 832 "parser.y"
    {
			if((yyvsp[(1) - (3)]).sym->literal!=NULL) free((yyvsp[(1) - (3)]).sym->literal);
			(yyvsp[(1) - (3)]).sym->literal=(char *)malloc(3+1);
			sprintf((yyvsp[(1) - (3)]).sym->literal, "AR%ld", (yyvsp[(3) - (3)]).val.v);
			(yyvsp[(1) - (3)]).sym->type = SET;
			(yyvsp[(1) - (3)]).sym->value = 0;
			(yyval).value = 0;
		;}
    break;

  case 64:
#line 841 "parser.y"
    {
			if((yyvsp[(1) - (3)]).sym->literal!=NULL) free((yyvsp[(1) - (3)]).sym->literal);
			(yyvsp[(1) - (3)]).sym->literal=(char *)malloc(2);
			strcpy((yyvsp[(1) - (3)]).sym->literal, "A");
			(yyvsp[(1) - (3)]).sym->type = SET;
			(yyvsp[(1) - (3)]).sym->value = 0;
			(yyval).value = 0;
		;}
    break;

  case 65:
#line 850 "parser.y"
    {
			if((yyvsp[(1) - (3)]).sym->literal!=NULL)
			{
				free((yyvsp[(1) - (3)]).sym->literal);
				(yyvsp[(1) - (3)]).sym->literal=NULL;
			}
			(yyvsp[(1) - (3)]).sym->type = SET;
			(yyvsp[(1) - (3)]).sym->value = (yyvsp[(3) - (3)]).val.v;
			(yyval).value = 0;
		;}
    break;

  case 66:
#line 861 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("SEGMENT"); YYABORT; }

			if(strlen(MapFile)==0) (yyvsp[(1) - (3)]).sym->value=0;
			(yyvsp[(1) - (3)]).sym->segment=NULL;
			(yyvsp[(1) - (3)]).sym->type=CSEG;
			(yyvsp[(1) - (3)]).sym->flags=SEGMENT|RELOCATABLE;
			(yyvsp[(1) - (3)]).sym->size=0;
			(yyval).value = 0;
		;}
    break;

  case 67:
#line 872 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("SEGMENT"); YYABORT; }

			if(strlen(MapFile)==0) (yyvsp[(1) - (3)]).sym->value=0;
			(yyvsp[(1) - (3)]).sym->segment=NULL;
			(yyvsp[(1) - (3)]).sym->type=XSEG;
			(yyvsp[(1) - (3)]).sym->flags=SEGMENT|RELOCATABLE;
			(yyvsp[(1) - (3)]).sym->size=0;
			(yyval).value = 0;
		;}
    break;

  case 68:
#line 883 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("SEGMENT"); YYABORT; }

			if(strlen(MapFile)==0) (yyvsp[(1) - (4)]).sym->value=0;
			(yyvsp[(1) - (4)]).sym->segment=NULL;
			(yyvsp[(1) - (4)]).sym->type=XSEG;
			(yyvsp[(1) - (4)]).sym->flags=SEGMENT|RELOCATABLE|OVERLAYABLE;
			(yyvsp[(1) - (4)]).sym->size=0;
			(yyval).value = 0;
		;}
    break;

  case 69:
#line 894 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("SEGMENT"); YYABORT; }

			if(strlen(MapFile)==0) (yyvsp[(1) - (3)]).sym->value=0;
			(yyvsp[(1) - (3)]).sym->segment=NULL;
			(yyvsp[(1) - (3)]).sym->type=DSEG;
			(yyvsp[(1) - (3)]).sym->flags=SEGMENT|RELOCATABLE;
			(yyvsp[(1) - (3)]).sym->size=0;
			(yyval).value = 0;
		;}
    break;

  case 70:
#line 905 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("SEGMENT"); YYABORT; }

			if(strlen(MapFile)==0) (yyvsp[(1) - (4)]).sym->value=0;
			(yyvsp[(1) - (4)]).sym->segment=NULL;
			(yyvsp[(1) - (4)]).sym->type=DSEG;
			(yyvsp[(1) - (4)]).sym->flags=SEGMENT|RELOCATABLE|OVERLAYABLE;
			(yyvsp[(1) - (4)]).sym->size=0;
			(yyval).value = 0;
		;}
    break;

  case 71:
#line 916 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("SEGMENT");  YYABORT; }

			if(strlen(MapFile)==0) (yyvsp[(1) - (3)]).sym->value=0;
			(yyvsp[(1) - (3)]).sym->segment=NULL;
			(yyvsp[(1) - (3)]).sym->type=ISEG;
			(yyvsp[(1) - (3)]).sym->flags=SEGMENT|RELOCATABLE;
			(yyvsp[(1) - (3)]).sym->size=0;
			(yyval).value = 0;
		;}
    break;

  case 72:
#line 927 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("SEGMENT"); YYABORT; }

			if(strlen(MapFile)==0) (yyvsp[(1) - (4)]).sym->value=0;
			(yyvsp[(1) - (4)]).sym->segment=NULL;
			(yyvsp[(1) - (4)]).sym->type=ISEG;
			(yyvsp[(1) - (4)]).sym->flags=SEGMENT|RELOCATABLE|OVERLAYABLE;
			(yyvsp[(1) - (4)]).sym->size=0;
			(yyval).value = 0;
		;}
    break;

  case 73:
#line 938 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("SEGMENT"); YYABORT; }

			if(strlen(MapFile)==0) (yyvsp[(1) - (3)]).sym->value=0;
			(yyvsp[(1) - (3)]).sym->segment=NULL;
			(yyvsp[(1) - (3)]).sym->type=BSEG;
			(yyvsp[(1) - (3)]).sym->flags=SEGMENT|RELOCATABLE;
			(yyvsp[(1) - (3)]).sym->size=0;
			(yyval).value = 0;
		;}
    break;

  case 74:
#line 949 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("SEGMENT"); YYABORT; }

			if(strlen(MapFile)==0) (yyvsp[(1) - (4)]).sym->value=0;
			(yyvsp[(1) - (4)]).sym->segment=NULL;
			(yyvsp[(1) - (4)]).sym->type=BSEG;
			(yyvsp[(1) - (4)]).sym->flags=SEGMENT|RELOCATABLE|OVERLAYABLE;
			(yyvsp[(1) - (4)]).sym->size=0;
			(yyval).value = 0;
		;}
    break;

  case 75:
#line 960 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("RSEG"); YYABORT; }

			if((yyvsp[(2) - (2)]).sym->type==UNDEF)
			{
				error("Undefined segment: %s", (yyvsp[(2) - (2)]).sym->name);
			}
			else
			{
				current_seg=(yyvsp[(2) - (2)]).sym;
				if((pass2)&&(current_seg->type==CSEG))
				{
					fprintf(fobj, "</CODE>\n\n");
					fprintf(fobj, "<CODE %s>\n", current_seg->name);
				}
				if(pass2) emitaddr(current_seg->value); // Warning: this must be erased!
				(yyval).value = 0;
			}
		;}
    break;

  case 76:
#line 980 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("PUBLIC"); YYABORT; }
			(yyval).value = 0;
		;}
    break;

  case 77:
#line 985 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("EXTERN"); YYABORT; }
			(yyval).value = 0;
		;}
    break;

  case 78:
#line 990 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("EXTERN"); YYABORT; }
			(yyval).value = 0;
		;}
    break;

  case 79:
#line 995 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("EXTERN"); YYABORT; }
			(yyval).value = 0;
		;}
    break;

  case 80:
#line 1000 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("EXTERN"); YYABORT; }
			(yyval).value = 0;
		;}
    break;

  case 81:
#line 1005 "parser.y"
    {
			if(ObjectFile==0) { NoObjectFileError("EXTERN"); YYABORT; }
			(yyval).value = 0;
		;}
    break;

  case 82:
#line 1020 "parser.y"
    {
			IF_Level++;
			if(IF_Level>sizeof(IF_Flag))
			{
				error("Too many nested IFs");
			}
			if(pass1)
			{
				IF_Flag[IF_Level]=(yyvsp[(2) - (2)]).val.v?1:0;
				IF_Value[IF_Count]=(yyvsp[(2) - (2)]).val.v?1:0;
				IF_Count++;
				if(IF_Count>sizeof(IF_Value))
				{
					error("Too many IFs");
				}
			}
			else // use the value saved in pass 1
			{
				IF_Flag[IF_Level]=IF_Value[IF_Count];
				IF_Count++;
			}
			(yyval).value = 0;
		;}
    break;

  case 83:
#line 1045 "parser.y"
    {
			IF_Level++;
			if(IF_Level>sizeof(IF_Flag))
			{
				error("Too many nested IFs");
			}
			if(pass1)
			{
				IF_Flag[IF_Level]=( (yyvsp[(1) - (1)]).val.v == 1 )?1:0;
				IF_Value[IF_Count]=( (yyvsp[(1) - (1)]).val.v == 1 )?1:0;
				IF_Count++;
				if(IF_Count>sizeof(IF_Value))
				{
					error("Too many IFDEFs");
				}
			}
			else // use the value saved in pass 1
			{
				IF_Flag[IF_Level]=IF_Value[IF_Count];
				IF_Count++;
			}
			(yyval).value = 0;
		;}
    break;

  case 84:
#line 1070 "parser.y"
    {
			IF_Level++;
			if(IF_Level>sizeof(IF_Flag))
			{
				error("Too many nested IFs");
			}
			if(pass1)
			{
				IF_Flag[IF_Level]=( (yyvsp[(1) - (1)]).val.v == 1 )?0:1;
				IF_Value[IF_Count]=( (yyvsp[(1) - (1)]).val.v == 1 )?0:1;
				IF_Count++;
				if(IF_Count>sizeof(IF_Value))
				{
					error("Too many IFNDEFs");
				}
			}
			else // use the value saved in pass 1
			{
				IF_Flag[IF_Level]=IF_Value[IF_Count];
				IF_Count++;
			}
			(yyval).value = 0;
		;}
    break;

  case 85:
#line 1094 "parser.y"
    {
			if(IF_Level==0)
			{
				error("foound ELSE without matching IF");
			}
			else
			{
				IF_Flag[IF_Level] = (IF_Flag[IF_Level]==0?1:0);
			}
			(yyval).value = 0;
		;}
    break;

  case 86:
#line 1106 "parser.y"
    {
			if(IF_Level==0)
			{
				error("found ENDIF without matching IF");
			}
			else
			{
				IF_Level--;
			}
			(yyval).value = 0;
		;}
    break;

  case 87:
#line 1118 "parser.y"
    {
		force_EOF=1;
		(yyval).value = 0;
	;}
    break;

  case 88:
#line 1126 "parser.y"
    {
			if( (yyvsp[(1) - (1)]).val.d == 0 )
				error("Expression is undefined in pass 1");
			if( !(isbit16((yyvsp[(1) - (1)]).val.v)) )
				error("Value greater than 16-bits");
			(yyval).value = (yyvsp[(1) - (1)]).val.v;
		;}
    break;

  case 89:
#line 1137 "parser.y"
    {
			if( (yyvsp[(1) - (1)]).sym->type != SET )
			{ 
				// Only 'set' symbols are redefinable, all other generate an error
				if( (yyvsp[(1) - (1)]).sym->type != UNDEF && pass1)
					if(strncmp((yyvsp[(1) - (1)]).sym->name, "C?", 2)) // Ignore badly generated C51 Debug symbols
						error("Attempt to redefine symbol: %s",(yyvsp[(1) - (1)]).sym->name);
			}
			(yyvsp[(1) - (1)]).sym->segment=current_seg;
			(yyval).sym = (yyvsp[(1) - (1)]).sym;
		;}
    break;

  case 90:
#line 1152 "parser.y"
    {
		if( (yyvsp[(1) - (1)]).sym->type == UNDEF && pass2)
			error("Undefined symbol: %s",(yyvsp[(1) - (1)]).sym->name);
		//Mark the symbol as public
		(yyvsp[(1) - (1)]).sym->flags=PUBLIC_SYM;
	;}
    break;

  case 91:
#line 1159 "parser.y"
    {
		if( (yyvsp[(3) - (3)]).sym->type == UNDEF && pass2)
			error("Undefined symbol: %s",(yyvsp[(3) - (3)]).sym->name);
		//Mark the symbol as public
		(yyvsp[(3) - (3)]).sym->flags=PUBLIC_SYM;
	;}
    break;

  case 92:
#line 1169 "parser.y"
    {
		(yyvsp[(1) - (1)]).sym->type = CSEG;
		(yyvsp[(1) - (1)]).sym->value = 0;
		(yyvsp[(1) - (1)]).sym->size = 1;
		(yyvsp[(1) - (1)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 93:
#line 1176 "parser.y"
    {
		(yyvsp[(1) - (3)]).sym->type = CSEG;
		(yyvsp[(1) - (3)]).sym->value = 0;
		(yyvsp[(1) - (3)]).sym->size = (yyvsp[(3) - (3)]).value;
		(yyvsp[(1) - (3)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 94:
#line 1183 "parser.y"
    {
		(yyvsp[(3) - (3)]).sym->type = CSEG;
		(yyvsp[(3) - (3)]).sym->value = 0;
		(yyvsp[(3) - (3)]).sym->size = 1;
		(yyvsp[(3) - (3)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 95:
#line 1190 "parser.y"
    {
		(yyvsp[(3) - (5)]).sym->type = CSEG;
		(yyvsp[(3) - (5)]).sym->value = 0;
		(yyvsp[(3) - (5)]).sym->size = (yyvsp[(5) - (5)]).value;
		(yyvsp[(3) - (5)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 96:
#line 1200 "parser.y"
    {
		(yyvsp[(1) - (1)]).sym->type = BSEG;
		(yyvsp[(1) - (1)]).sym->value = 0;
		(yyvsp[(1) - (1)]).sym->size = 1;
		(yyvsp[(1) - (1)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 97:
#line 1207 "parser.y"
    {
		(yyvsp[(1) - (3)]).sym->type = BSEG;
		(yyvsp[(1) - (3)]).sym->value = 0;
		(yyvsp[(1) - (3)]).sym->size = (yyvsp[(3) - (3)]).value;
		(yyvsp[(1) - (3)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 98:
#line 1214 "parser.y"
    {
		(yyvsp[(3) - (3)]).sym->type = BSEG;
		(yyvsp[(3) - (3)]).sym->value = 0;
		(yyvsp[(3) - (3)]).sym->size = 1;
		(yyvsp[(3) - (3)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 99:
#line 1221 "parser.y"
    {
		(yyvsp[(3) - (5)]).sym->type = BSEG;
		(yyvsp[(3) - (5)]).sym->value = 0;
		(yyvsp[(3) - (5)]).sym->size = (yyvsp[(5) - (5)]).value;
		(yyvsp[(3) - (5)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 100:
#line 1232 "parser.y"
    {
		(yyvsp[(1) - (1)]).sym->type = DSEG;
		(yyvsp[(1) - (1)]).sym->value = 0;
		(yyvsp[(1) - (1)]).sym->size = 1;
		(yyvsp[(1) - (1)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 101:
#line 1239 "parser.y"
    {
		(yyvsp[(1) - (3)]).sym->type = DSEG;
		(yyvsp[(1) - (3)]).sym->value = 0;
		(yyvsp[(1) - (3)]).sym->size = (yyvsp[(3) - (3)]).value;
		(yyvsp[(1) - (3)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 102:
#line 1246 "parser.y"
    {
		(yyvsp[(3) - (3)]).sym->type = DSEG;
		(yyvsp[(3) - (3)]).sym->value = 0;
		(yyvsp[(3) - (3)]).sym->size = 1;
		(yyvsp[(3) - (3)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 103:
#line 1253 "parser.y"
    {
		(yyvsp[(3) - (5)]).sym->type = DSEG;
		(yyvsp[(3) - (5)]).sym->value = 0;
		(yyvsp[(3) - (5)]).sym->size = (yyvsp[(5) - (5)]).value;
		(yyvsp[(3) - (5)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 104:
#line 1263 "parser.y"
    {
		(yyvsp[(1) - (1)]).sym->type = ISEG;
		(yyvsp[(1) - (1)]).sym->value = 0;
		(yyvsp[(1) - (1)]).sym->size = 1;
		(yyvsp[(1) - (1)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 105:
#line 1270 "parser.y"
    {
		(yyvsp[(1) - (3)]).sym->type = ISEG;
		(yyvsp[(1) - (3)]).sym->value = 0;
		(yyvsp[(1) - (3)]).sym->size = (yyvsp[(3) - (3)]).value;
		(yyvsp[(1) - (3)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 106:
#line 1277 "parser.y"
    {
		(yyvsp[(3) - (3)]).sym->type = ISEG;
		(yyvsp[(3) - (3)]).sym->value = 0;
		(yyvsp[(3) - (3)]).sym->size = 1;
		(yyvsp[(3) - (3)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 107:
#line 1284 "parser.y"
    {
		(yyvsp[(3) - (5)]).sym->type = ISEG;
		(yyvsp[(3) - (5)]).sym->value = 0;
		(yyvsp[(3) - (5)]).sym->size = (yyvsp[(5) - (5)]).value;
		(yyvsp[(3) - (5)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 108:
#line 1294 "parser.y"
    {
		(yyvsp[(1) - (1)]).sym->type = XSEG;
		(yyvsp[(1) - (1)]).sym->value = 0;
		(yyvsp[(1) - (1)]).sym->size = 1;
		(yyvsp[(1) - (1)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 109:
#line 1301 "parser.y"
    {
		(yyvsp[(1) - (3)]).sym->type = XSEG;
		(yyvsp[(1) - (3)]).sym->value = 0;
		(yyvsp[(1) - (3)]).sym->size = (yyvsp[(3) - (3)]).value;
		(yyvsp[(1) - (3)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 110:
#line 1308 "parser.y"
    {
		(yyvsp[(3) - (3)]).sym->type = XSEG;
		(yyvsp[(3) - (3)]).sym->value = 0;
		(yyvsp[(3) - (3)]).sym->size = 1;
		(yyvsp[(3) - (3)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 111:
#line 1315 "parser.y"
    {
		(yyvsp[(3) - (5)]).sym->type = XSEG;
		(yyvsp[(3) - (5)]).sym->value = 0;
		(yyvsp[(3) - (5)]).sym->size = (yyvsp[(5) - (5)]).value;
		(yyvsp[(3) - (5)]).sym->flags=EXTERN_SYM;
	;}
    break;

  case 112:
#line 1325 "parser.y"
    {
			if( pass2 )
			{
				if(ObjectFile)
				{
					if((yyvsp[(3) - (3)]).val.s==1)
					{
						fprintf(fobj, "%s\n", (yyvsp[(3) - (3)]).val.rel);
					}
					else
					{
						objbyte((yyvsp[(3) - (3)]).value);
					}
				}
				genbyte((yyvsp[(3) - (3)]).value);
			}
			(yyval).value = (yyvsp[(1) - (3)]).value + 1;
		;}
    break;

  case 113:
#line 1344 "parser.y"
    {
			(yyval).value = (yyvsp[(1) - (3)]).value + strlen((yyvsp[(3) - (3)]).str);
			if( pass2 )
			{
				genstr((yyvsp[(3) - (3)]).str);
				if(ObjectFile) objstr((yyvsp[(3) - (3)]).str);
			}
			free((yyvsp[(3) - (3)]).str);
		;}
    break;

  case 114:
#line 1354 "parser.y"
    {
			if( pass2 )
			{
				if(ObjectFile)
				{
					if((yyvsp[(1) - (1)]).val.s==1)
					{
						fprintf(fobj, "%s\n", (yyvsp[(1) - (1)]).val.rel);
					}
					else
					{
						objbyte((yyvsp[(1) - (1)]).value);
					}
				}
				genbyte((yyvsp[(1) - (1)]).value);
			}
			(yyval).value = 1;
		;}
    break;

  case 115:
#line 1373 "parser.y"
    {
			(yyval).value = strlen((yyvsp[(1) - (1)]).str);
			if( pass2 )
			{
				genstr((yyvsp[(1) - (1)]).str);
				if(ObjectFile) objstr((yyvsp[(1) - (1)]).str);
			}
			free((yyvsp[(1) - (1)]).str);
		;}
    break;

  case 116:
#line 1386 "parser.y"
    {
			if( pass2 )
			{
				if(ObjectFile)
				{
					if((yyvsp[(3) - (3)]).val.s==1)
					{
						fprintf(fobj, "%s\n", (yyvsp[(3) - (3)]).val.rel);
					}
					else
					{
						objword((yyvsp[(3) - (3)]).value);
					}
				}
				genword((yyvsp[(3) - (3)]).value);
			}
			(yyval).value = (yyvsp[(1) - (3)]).value + 2;
		;}
    break;

  case 117:
#line 1405 "parser.y"
    {
			if( pass2 )
			{
				if(ObjectFile)
				{
					if((yyvsp[(1) - (1)]).val.s==1)
					{
						fprintf(fobj, "%s\n", (yyvsp[(1) - (1)]).val.rel);
					}
					else
					{
						objword((yyvsp[(1) - (1)]).value);
					}
				}
				genword((yyvsp[(1) - (1)]).value);
			}
			(yyval).value = 2;
		;}
    break;

  case 118:
#line 1429 "parser.y"
    {
			(yyval).val.v = current_seg->value;
			(yyval).val.d = 1;
			if(current_seg->flags&RELOCATABLE)
			{
				// There is a problem with relocatable expressions and the 'current program counter'
				// operator '$'.  This is because we don't know for what instruction the '$' was
				// generated, so when locating code we only know the position where the operator apperead
				// and that is what the linker is going to use.
				strcat(symexp,"$;");
				(yyval).val.s = 1;
				(yyval).val.k = 1;
			}
		;}
    break;

  case 119:
#line 1444 "parser.y"
    {
			(yyval).val.s = (yyvsp[(2) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(2) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(2) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(2) - (3)]).val.k;
		;}
    break;

  case 120:
#line 1451 "parser.y"
    {
			strcat(symexp,"0xFFFF;*;");
			(yyval).val.s = (yyvsp[(2) - (2)]).val.s;
			(yyval).val.v = -(yyvsp[(2) - (2)]).val.v;
			(yyval).val.d = (yyvsp[(2) - (2)]).val.d;
			(yyval).val.k = (yyvsp[(2) - (2)]).val.k;
		;}
    break;

  case 121:
#line 1459 "parser.y"
    {
			strcat(symexp,"0x0008;>>;");
			(yyval).val.s = (yyvsp[(2) - (2)]).val.s;
			(yyval).val.v = (((yyvsp[(2) - (2)]).val.v / 0x100) & 0xff);
			(yyval).val.d = (yyvsp[(2) - (2)]).val.d;
			(yyval).val.k = (yyvsp[(2) - (2)]).val.k;
		;}
    break;

  case 122:
#line 1467 "parser.y"
    {
			strcat(symexp,"0x00FF;&;");
			(yyval).val.s = (yyvsp[(2) - (2)]).val.s;
			(yyval).val.v = (((yyvsp[(2) - (2)]).val.v % 0x100) & 0xff);
			(yyval).val.d = (yyvsp[(2) - (2)]).val.d;
			(yyval).val.k = (yyvsp[(2) - (2)]).val.k;
		;}
    break;

  case 123:
#line 1475 "parser.y"
    {
			strcat(symexp,"~;");
			(yyval).val.s = (yyvsp[(2) - (2)]).val.s;
			(yyval).val.v = (~(yyvsp[(2) - (2)]).val.v & 0xffff);
			(yyval).val.d = (yyvsp[(2) - (2)]).val.d;
			(yyval).val.k = (yyvsp[(2) - (2)]).val.k;
		;}
    break;

  case 124:
#line 1483 "parser.y"
    {
			strcat(symexp,"~;");
			(yyval).val.s = (yyvsp[(2) - (2)]).val.s;
			(yyval).val.v = (~(yyvsp[(2) - (2)]).val.v & 0xffff);
			(yyval).val.d = (yyvsp[(2) - (2)]).val.d;
			(yyval).val.k = (yyvsp[(2) - (2)]).val.k;
		;}
    break;

  case 125:
#line 1491 "parser.y"
    {
			strcat(symexp,"|;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (3)]).val.v | (yyvsp[(3) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 126:
#line 1499 "parser.y"
    {
			strcat(symexp,"|;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (3)]).val.v | (yyvsp[(3) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 127:
#line 1507 "parser.y"
    {
			strcat(symexp,"&;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (3)]).val.v & (yyvsp[(3) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 128:
#line 1515 "parser.y"
    {
			strcat(symexp,"&;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (3)]).val.v & (yyvsp[(3) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 129:
#line 1523 "parser.y"
    {
			strcat(symexp,"^;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (3)]).val.v ^ (yyvsp[(3) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 130:
#line 1531 "parser.y"
    {
			strcat(symexp,"^;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (3)]).val.v ^ (yyvsp[(3) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 131:
#line 1539 "parser.y"
    {
			strcat(symexp,"*;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (3)]).val.v * (yyvsp[(3) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 132:
#line 1547 "parser.y"
    {
			strcat(symexp,"/;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
			if(((yyvsp[(3) - (3)]).val.v!=0)&&((yyval).val.s==0))
			{
				(yyval).val.v = (yyvsp[(1) - (3)]).val.v / (yyvsp[(3) - (3)]).val.v;
				(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			}
			else if((yyval).val.s==1)
			{
				(yyval).val.v = 1; // Relocatable symbolic expression: doesn't matter what I return!
				(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			}
			else
			{
				error("Divide by zero");
			}
		;}
    break;

  case 133:
#line 1567 "parser.y"
    {
			strcat(symexp,"%;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
			if(((yyvsp[(3) - (3)]).val.v!=0)&&((yyval).val.s==0))
			{
				(yyval).val.v = (yyvsp[(1) - (3)]).val.v % (yyvsp[(3) - (3)]).val.v;
				(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			}
			else if((yyval).val.s==1)
			{
				(yyval).val.v = 1; // Relocatable symbolic expression: doesn't matter what I return!
				(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			}
			else
			{
				error("Divide by zero");
			}
		;}
    break;

  case 134:
#line 1587 "parser.y"
    {
			strcat(symexp,"-;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (3)]).val.v - (yyvsp[(3) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 135:
#line 1595 "parser.y"
    {
			strcat(symexp,"+;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (3)]).val.v + (yyvsp[(3) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 136:
#line 1603 "parser.y"
    {
			strcat(symexp,">>;");
			(yyval).val.s = (yyvsp[(1) - (4)]).val.s | (yyvsp[(4) - (4)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (4)]).val.v >> (yyvsp[(4) - (4)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (4)]).val.d && (yyvsp[(4) - (4)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (4)]).val.k | (yyvsp[(4) - (4)]).val.k;
		;}
    break;

  case 137:
#line 1611 "parser.y"
    {
			strcat(symexp,">>;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (3)]).val.v >> (yyvsp[(3) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 138:
#line 1619 "parser.y"
    {
			strcat(symexp,"<<;");
			(yyval).val.s = (yyvsp[(1) - (4)]).val.s | (yyvsp[(4) - (4)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (4)]).val.v << (yyvsp[(4) - (4)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (4)]).val.d && (yyvsp[(4) - (4)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (4)]).val.k | (yyvsp[(4) - (4)]).val.k;
		;}
    break;

  case 139:
#line 1627 "parser.y"
    {
			strcat(symexp,"<<;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = (yyvsp[(1) - (3)]).val.v << (yyvsp[(3) - (3)]).val.v;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 140:
#line 1635 "parser.y"
    {
			strcat(symexp,"=;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (3)]).val.v == (yyvsp[(3) - (3)]).val.v)?1:0;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 141:
#line 1643 "parser.y"
    {
			strcat(symexp,"=;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (3)]).val.v == (yyvsp[(3) - (3)]).val.v)?1:0;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 142:
#line 1651 "parser.y"
    {
			strcat(symexp,"=;");
			(yyval).val.s = (yyvsp[(1) - (4)]).val.s | (yyvsp[(4) - (4)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (4)]).val.v == (yyvsp[(4) - (4)]).val.v)?1:0;
			(yyval).val.d = (yyvsp[(1) - (4)]).val.d && (yyvsp[(4) - (4)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (4)]).val.k | (yyvsp[(4) - (4)]).val.k;
		;}
    break;

  case 143:
#line 1659 "parser.y"
    {
			strcat(symexp,"!=;");
			(yyval).val.s = (yyvsp[(1) - (4)]).val.s | (yyvsp[(4) - (4)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (4)]).val.v == (yyvsp[(4) - (4)]).val.v)?0:1;
			(yyval).val.d = (yyvsp[(1) - (4)]).val.d && (yyvsp[(4) - (4)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (4)]).val.k | (yyvsp[(4) - (4)]).val.k;
		;}
    break;

  case 144:
#line 1667 "parser.y"
    {
			strcat(symexp,"!=;");
			(yyval).val.s = (yyvsp[(1) - (4)]).val.s | (yyvsp[(4) - (4)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (4)]).val.v == (yyvsp[(4) - (4)]).val.v)?0:1;
			(yyval).val.d = (yyvsp[(1) - (4)]).val.d && (yyvsp[(4) - (4)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (4)]).val.k | (yyvsp[(4) - (4)]).val.k;
		;}
    break;

  case 145:
#line 1675 "parser.y"
    {
			strcat(symexp,"!=;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (3)]).val.v == (yyvsp[(3) - (3)]).val.v)?0:1;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 146:
#line 1683 "parser.y"
    {
			strcat(symexp,"<;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (3)]).val.v < (yyvsp[(3) - (3)]).val.v)?1:0;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 147:
#line 1691 "parser.y"
    {
			strcat(symexp,"<;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (3)]).val.v < (yyvsp[(3) - (3)]).val.v)?1:0;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 148:
#line 1699 "parser.y"
    {
			strcat(symexp,"<=;");
			(yyval).val.s = (yyvsp[(1) - (4)]).val.s | (yyvsp[(4) - (4)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (4)]).val.v <= (yyvsp[(4) - (4)]).val.v)?1:0;
			(yyval).val.d = (yyvsp[(1) - (4)]).val.d && (yyvsp[(4) - (4)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (4)]).val.k | (yyvsp[(4) - (4)]).val.k;
		;}
    break;

  case 149:
#line 1707 "parser.y"
    {
			strcat(symexp,"<=;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (3)]).val.v <= (yyvsp[(3) - (3)]).val.v)?1:0;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 150:
#line 1715 "parser.y"
    {
			strcat(symexp,">;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (3)]).val.v > (yyvsp[(3) - (3)]).val.v)?1:0;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 151:
#line 1723 "parser.y"
    {
			strcat(symexp,">;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (3)]).val.v > (yyvsp[(3) - (3)]).val.v)?1:0;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 152:
#line 1731 "parser.y"
    {
			strcat(symexp,">=;");
			(yyval).val.s = (yyvsp[(1) - (4)]).val.s | (yyvsp[(4) - (4)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (4)]).val.v >= (yyvsp[(4) - (4)]).val.v)?1:0;
			(yyval).val.d = (yyvsp[(1) - (4)]).val.d && (yyvsp[(4) - (4)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (4)]).val.k | (yyvsp[(4) - (4)]).val.k;
		;}
    break;

  case 153:
#line 1739 "parser.y"
    {
			strcat(symexp,">=;");
			(yyval).val.s = (yyvsp[(1) - (3)]).val.s | (yyvsp[(3) - (3)]).val.s;
			(yyval).val.v = ((yyvsp[(1) - (3)]).val.v >= (yyvsp[(3) - (3)]).val.v)?1:0;
			(yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d;
			(yyval).val.k = (yyvsp[(1) - (3)]).val.k | (yyvsp[(3) - (3)]).val.k;
		;}
    break;

  case 154:
#line 1747 "parser.y"
    {
			(yyval).val.k = kmask[(yyvsp[(1) - (1)]).sym->type&0xf] | 0x01; // 0x01: means value comes from symbol.

			if( pass1 )
			{
				(yyval).val.v = (yyvsp[(1) - (1)]).sym->value;
				(yyval).val.d = ((yyvsp[(1) - (1)]).sym->type != UNDEF);
			}
			else
			{
				if( (yyvsp[(1) - (1)]).sym->type == UNDEF )
				{
					error("Undefined symbol %s", (yyvsp[(1) - (1)]).sym->name);
					(yyval).val.v = 0;
				}
				(yyval).val.d = 1;
			}
			
			if( (yyvsp[(1) - (1)]).sym->type != UNDEF )
			{
				if((yyvsp[(1) - (1)]).sym->segment!=NULL) // Does this properly takes care of $1.sym->segment==NULL?  See below.
				{
					if ((yyvsp[(1) - (1)]).sym->segment->flags&RELOCATABLE) 
					{
						strcat(symexp,(yyvsp[(1) - (1)]).sym->name);
						strcat(symexp,";");
						(yyval).val.v = (yyvsp[(1) - (1)]).val.v;
						if( (strlen(MapFile)>0) && pass2 )
						{
							(yyval).val.v = (yyvsp[(1) - (1)]).sym->value;
							(yyval).val.s = 0; // If loading symbols from mapfile, no symbolic expressions
						}
						else
						{
							(yyval).val.s = 1; // Relocatable symbolic expression
						}
					}
					else
					{
						sprintf(tmpexp,"0x%04lX;",(yyvsp[(1) - (1)]).sym->value);
						strcat(symexp,tmpexp);
						(yyval).val.v = (yyvsp[(1) - (1)]).sym->value;
						(yyval).val.s = 0;
					}
				}
				else // For symbols without a parent segment (EQUs, on the fly externs, etc.)
				{
					if ((yyvsp[(1) - (1)]).sym->flags&EXTERN_SYM)
					{
						strcat(symexp,(yyvsp[(1) - (1)]).sym->name);
						strcat(symexp,";");
						(yyval).val.v = 0;
						if( (strlen(MapFile)>0) && pass2 )
						{
							(yyval).val.v = (yyvsp[(1) - (1)]).sym->value;
							(yyval).val.s = 0; // If loading symbols from mapfile, no symbolic expressions
						}
						else
						{
							(yyval).val.s = 1; // Relocatable symbolic expression
						}
					}
					else
					{
						sprintf(tmpexp,"0x%04lX;",(yyvsp[(1) - (1)]).sym->value);
						strcat(symexp,tmpexp);
						(yyval).val.v = (yyvsp[(1) - (1)]).sym->value;
						(yyval).val.s = 0;
					}
				}
			}

		;}
    break;

  case 155:
#line 1821 "parser.y"
    {
			sprintf(tmpexp,"0x%04lX;",(yyvsp[(1) - (1)]).val.v);
			strcat(symexp,tmpexp);
			(yyval).val.k = 0;
			(yyval).val.s = 0;
			(yyval).val.v = (yyvsp[(1) - (1)]).val.v; (yyval).val.d=1;
		;}
    break;

  case 156:
#line 1835 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (1)]).op,NULL,0); ;}
    break;

  case 157:
#line 1837 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 158:
#line 1839 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 159:
#line 1841 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 160:
#line 1843 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 161:
#line 1845 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 162:
#line 1847 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 163:
#line 1849 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,4); ;}
    break;

  case 164:
#line 1851 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 165:
#line 1853 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,4); ;}
    break;

  case 166:
#line 1855 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,6); ;}
    break;

  case 167:
#line 1857 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 168:
#line 1859 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,4); ;}
    break;

  case 169:
#line 1861 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,6); ;}
    break;

  case 170:
#line 1863 "parser.y"
    { if( get_md((yyvsp[(2) - (2)]).mode) == 3 )
			error("Immediate mode is invalid");
		  (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 171:
#line 1867 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 172:
#line 1869 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,4); ;}
    break;

  case 173:
#line 1871 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 174:
#line 1873 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); ;}
    break;

  case 175:
#line 1875 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); ;}
    break;

  case 176:
#line 1877 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,0); ;}
    break;

  case 177:
#line 1879 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,0); ;}
    break;

  case 178:
#line 1881 "parser.y"
    {
		long offset;
		unsigned long address;
		static unsigned char ajmp[]= { 0x01 };
		static unsigned char ljmp[]= { 0x02 };
		static unsigned char sjmp[]= { 0x80 };
		static struct opcode opjmp[] = {
			{"ajmp",    AJMP,   ajmp  },
			{"ljmp",    LJMP,   ljmp  },
			{"sjmp",    SJMP,   sjmp  }
		};
		//if(ObjectFile) error("'JMP label' instruction is not allowed when compiling to an object file");
		if(ObjectFile==0)
		{
			if(pass1) warning("The 'jmp addr16' is deprecated.  Replaced with a 'ljmp addr16' instruction.");
			address=(yyvsp[(2) - (2)]).mode.byte2+((yyvsp[(2) - (2)]).mode.byte1*0x100);
			offset = address - (current_seg->value+2);
			//if(pass2) printf("address=%04XH, current_seg->value+2=%04XH, offset is %d\n", address, current_seg->value+2, offset);
			//if( (offset <= 127) && (offset >= -128) && ($2.mode.str1[0]==0) && (address<=current_seg->value))
			//{  // SJMP
			//	$2.mode.mode=0;
			//	$2.mode.orval=0;
			//	$2.mode.size=1;
			//	$2.mode.byte1=offset;
			//	$$.value = makeop(&opjmp[2],&$2.mode,0);
			//}
			//else if( ( (address&0xF800) == ((current_seg->value+2)&0xF800) ) && ($2.mode.str1[0]==0) && (address<=current_seg->value) ) // Same page?
			//{  // AJMP
			//	$2.mode.mode=0;
			//	$2.mode.orval= (unsigned char) ((address&0x0700)>>3) ;
			//	$2.mode.size=1;
			//	$2.mode.byte1=address&0x00FF;
			//	$$.value = makeop(&opjmp[0],&$2.mode,0);
			//}
			//else
			//{  // LJMP
				(yyval).value = makeop(&opjmp[1],&(yyvsp[(2) - (2)]).mode,0);
			//}
		}
		else // ObjectFile==1
		{  // LJMP
			(yyval).value = makeop(&opjmp[1],&(yyvsp[(2) - (2)]).mode,0);
		}
	;}
    break;

  case 179:
#line 1926 "parser.y"
    {
		long offset;
		unsigned long address;
		static unsigned char acall[]= { 0x11 };
		static unsigned char lcall[]= { 0x12 };
		static struct opcode opcall[] = {
			{"acall",    ACALL,   acall  },
			{"lcall",    LCALL,   lcall  }
		};
		//if(ObjectFile) error("'CALL label' instruction is not allowed when compiling to an object file");
		if(ObjectFile==0)
		{
			address=(yyvsp[(2) - (2)]).mode.byte2+((yyvsp[(2) - (2)]).mode.byte1*0x100);
			offset = address - (current_seg->value+2);
			//if(pass2) printf("address=%04XH, current_seg->value+2=%04XH, offset is %d\n", address, current_seg->value+2, offset);
			if( ( (address&0xF800) == ((current_seg->value+2)&0xF800) ) && ((yyvsp[(2) - (2)]).mode.str1[0]==0) && (address<=current_seg->value) ) // Same page?
			{  // ACALL
				(yyvsp[(2) - (2)]).mode.mode=0;
				(yyvsp[(2) - (2)]).mode.orval= (unsigned char) ((address&0x0700)>>3) ;
				(yyvsp[(2) - (2)]).mode.size=1;
				(yyvsp[(2) - (2)]).mode.byte1=address&0x00FF;
				(yyval).value = makeop(&opcall[0],&(yyvsp[(2) - (2)]).mode,0);
			}
			else
			{  // LCALL
				(yyval).value = makeop(&opcall[1],&(yyvsp[(2) - (2)]).mode,0);
			}
		}
		else // ObjectFile==1
		{  // LCALL
			(yyval).value = makeop(&opcall[1],&(yyvsp[(2) - (2)]).mode,0);
		}
	;}
    break;

  case 180:
#line 1960 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); ;}
    break;

  case 181:
#line 1962 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (1)]).op,NULL,0); ;}
    break;

  case 182:
#line 1964 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (1)]).op,NULL,0); ;}
    break;

  case 183:
#line 1966 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); ;}
    break;

  case 184:
#line 1968 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); ;}
    break;

  case 185:
#line 1970 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); ;}
    break;

  case 186:
#line 1972 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); ;}
    break;

  case 187:
#line 1974 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); ;}
    break;

  case 188:
#line 1976 "parser.y"
    {
			if( get_md((yyvsp[(2) - (2)]).mode) != 2 )
				error("Invalid addressing mode");
			(yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,-2);
		;}
    break;

  case 189:
#line 1982 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 190:
#line 1984 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 191:
#line 1986 "parser.y"
    {
			if( get_md((yyvsp[(2) - (2)]).mode) == 0 ) error("Invalid addressing mode");
			(yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,-1);
		;}
    break;

  case 192:
#line 1991 "parser.y"
    {
			struct mode tmp;
			set_md(tmp,0);
			set_ov(tmp,0);
			set_sz(tmp,1);
			set_b1(tmp,(yyvsp[(2) - (2)]).value);
			set_str1(&tmp, &(yyvsp[(2) - (2)]));
			(yyval).value = makeop((yyvsp[(1) - (2)]).op,&tmp,0);
		;}
    break;

  case 193:
#line 2001 "parser.y"
    {
		   struct mode tmp;
			set_md(tmp,0);
			set_ov(tmp,0);
			set_sz(tmp,1);
			set_b1(tmp,(yyvsp[(2) - (2)]).value);
			set_str1(&tmp, &(yyvsp[(2) - (2)]));
			(yyval).value = makeop((yyvsp[(1) - (2)]).op,&tmp,0);
		;}
    break;

  case 194:
#line 2011 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 195:
#line 2013 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 196:
#line 2015 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 197:
#line 2017 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 198:
#line 2019 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 199:
#line 2021 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 200:
#line 2023 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 201:
#line 2025 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 202:
#line 2027 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 203:
#line 2029 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 204:
#line 2031 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 205:
#line 2033 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 206:
#line 2035 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); ;}
    break;

  case 207:
#line 2037 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,4); ;}
    break;

  case 208:
#line 2039 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,6); ;}
    break;

  case 209:
#line 2041 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (7)]).op,NULL,0); ;}
    break;

  case 210:
#line 2043 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (7)]).op,NULL,0); ;}
    break;

  case 211:
#line 2045 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (7)]).op,NULL,1); ;}
    break;

  case 212:
#line 2047 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (7)]).op,NULL,1); ;}
    break;

  case 213:
#line 2049 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,(yyvsp[(5) - (5)]).value); ;}
    break;

  case 214:
#line 2051 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,2); ;}
    break;

  case 215:
#line 2053 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,(yyvsp[(3) - (5)]).value+3); ;}
    break;

  case 216:
#line 2055 "parser.y"
    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,5); ;}
    break;

  case 217:
#line 2063 "parser.y"
    {
			set_md((yyval).mode,0);
			set_ov((yyval).mode, (yyvsp[(3) - (3)]).value);
			set_sz((yyval).mode, 0);
		;}
    break;

  case 218:
#line 2069 "parser.y"
    {
			if(((yyvsp[(3) - (3)]).val.k==0) && pass1 && hash_warning_enable)
			{
				warning("maybe '#' is missing with constant expression.");
			}
			set_md((yyval).mode,1);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
			set_str1(&(yyval).mode, &(yyvsp[(3) - (3)]));
		;}
    break;

  case 219:
#line 2081 "parser.y"
    {
			set_md((yyval).mode,2);
			set_ov((yyval).mode,(yyvsp[(4) - (4)]).value);
			set_sz((yyval).mode,0);
		;}
    break;

  case 220:
#line 2087 "parser.y"
    {
			set_md((yyval).mode,3);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(4) - (4)]).value);
			set_str1(&(yyval).mode, &(yyvsp[(4) - (4)]));
		;}
    break;

  case 221:
#line 2098 "parser.y"
    {
			set_md((yyval).mode,0);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(1) - (3)]).value);
			set_str1(&(yyval).mode, &(yyvsp[(1) - (3)]));
		;}
    break;

  case 222:
#line 2106 "parser.y"
    {
			set_md((yyval).mode,1);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,2);
			set_b1((yyval).mode,(yyvsp[(1) - (4)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(1) - (4)]));
			set_b2((yyval).mode,(yyvsp[(4) - (4)]).value);
			set_str2(&(yyval).mode,&(yyvsp[(4) - (4)]));
		;}
    break;

  case 223:
#line 2119 "parser.y"
    {
			set_md((yyval).mode,0);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(3) - (3)]));
		;}
    break;

  case 224:
#line 2127 "parser.y"
    {
			set_md((yyval).mode,1);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(4) - (4)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(4) - (4)]));
		;}
    break;

  case 225:
#line 2135 "parser.y"
    {
			set_md((yyval).mode,1);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(4) - (4)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(4) - (4)]));
		;}
    break;

  case 226:
#line 2146 "parser.y"
    {
			set_md((yyval).mode,0);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,2);
			set_b1((yyval).mode,(yyvsp[(1) - (3)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(1) - (3)]));
			set_b2((yyval).mode,(yyvsp[(3) - (3)]).value);
			set_str2(&(yyval).mode,&(yyvsp[(3) - (3)]));
		;}
    break;

  case 227:
#line 2159 "parser.y"
    {
			set_md((yyval).mode,0);
			set_ov((yyval).mode,(yyvsp[(1) - (3)]).value);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(3) - (3)]));
		;}
    break;

  case 228:
#line 2167 "parser.y"
    {
			set_md((yyval).mode,1);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,2);
			set_b1((yyval).mode,(yyvsp[(1) - (3)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(1) - (3)]));
			set_b2((yyval).mode,(yyvsp[(3) - (3)]).value);
			set_str2(&(yyval).mode,&(yyvsp[(3) - (3)]));
		;}
    break;

  case 229:
#line 2180 "parser.y"
    {
			set_md((yyval).mode,0);
			set_ov((yyval).mode,(yyvsp[(1) - (3)]).value);
			set_sz((yyval).mode,0);
		;}
    break;

  case 230:
#line 2186 "parser.y"
    {
			if(((yyvsp[(3) - (3)]).val.k==0) && pass1 && hash_warning_enable)
			{
				warning("maybe '#' is missing with constant expression.");
			}
			set_md((yyval).mode,1);
			set_ov((yyval).mode,(yyvsp[(1) - (3)]).value);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(3) - (3)]));
		;}
    break;

  case 231:
#line 2198 "parser.y"
    {
			set_md((yyval).mode,2);
			set_ov((yyval).mode,(yyvsp[(1) - (4)]).value);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(4) - (4)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(4) - (4)]));
		;}
    break;

  case 232:
#line 2206 "parser.y"
    {
			set_md((yyval).mode,3);
			set_ov((yyval).mode,(yyvsp[(3) - (3)]).value);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(1) - (3)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(1) - (3)]));
		;}
    break;

  case 233:
#line 2214 "parser.y"
    {
			if(((yyvsp[(3) - (3)]).val.k==0) && pass1 && hash_warning_enable)
			{
				warning("maybe '#' is missing with constant expression.");
			}
			set_md((yyval).mode,4);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,2);
			set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(3) - (3)]));
			set_b2((yyval).mode,(yyvsp[(1) - (3)]).value);
			set_str2(&(yyval).mode,&(yyvsp[(1) - (3)]));
		;}
    break;

  case 234:
#line 2228 "parser.y"
    {
			set_md((yyval).mode,5);
			set_ov((yyval).mode,(yyvsp[(4) - (4)]).value);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(1) - (4)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(1) - (4)]));
		;}
    break;

  case 235:
#line 2236 "parser.y"
    {
			set_md((yyval).mode,6);
			set_ov((yyval).mode,(yyvsp[(2) - (4)]).value);
			set_sz((yyval).mode,0);
		;}
    break;

  case 236:
#line 2242 "parser.y"
    {
			if(((yyvsp[(4) - (4)]).val.k==0) && pass1 && hash_warning_enable)
			{
				warning("maybe '#' is missing with constant expression.");
			}
			set_md((yyval).mode,7);
			set_ov((yyval).mode,(yyvsp[(2) - (4)]).value);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(4) - (4)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(4) - (4)]));
		;}
    break;

  case 237:
#line 2254 "parser.y"
    {
			set_md((yyval).mode,8);
			set_ov((yyval).mode,(yyvsp[(2) - (5)]).value);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(5) - (5)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(5) - (5)]));
		;}
    break;

  case 238:
#line 2262 "parser.y"
    {
			set_md((yyval).mode,9);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,2);
			set_b1((yyval).mode, ((yyvsp[(4) - (4)]).value & 0xff00) >> 8 );
			set_str1(&(yyval).mode, &(yyvsp[(4) - (4)]));
			set_b2((yyval).mode, ((yyvsp[(4) - (4)]).value & 0x00ff) );
			// There is a problem with the data16 production below.  For now, fix it here...
			if((yyvsp[(4) - (4)]).val.s==1) // if 'data16' is a symbolic expression, the second string is blank.
			{
				(yyval).mode.str2[0]=' ';
				(yyval).mode.str2[1]=0;
			}
			else // if 'data16' is numeric, we need to print the lower 8-bits of the value
			{
				(yyval).mode.str2[0]=0;
			}
		;}
    break;

  case 239:
#line 2281 "parser.y"
    {
			set_md((yyval).mode,10);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(3) - (3)]));
		;}
    break;

  case 240:
#line 2304 "parser.y"
    {
			set_md((yyval).mode,11);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(1) - (3)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(1) - (3)]));
		;}
    break;

  case 241:
#line 2312 "parser.y"
    {
			if( pass2 )
			{
				if((yyvsp[(1) - (4)]).val.s==1)
				{
					sprintf((yyval).mode.str1, "bit(%s%04lX;.;)", (yyvsp[(1) - (4)]).val.rel, (yyvsp[(2) - (4)]).value);
					(yyval).mode.str2[0]=' ';
					(yyval).mode.str2[1]=0;	
				}
				else
				{
					if( !isbit8((yyvsp[(1) - (4)]).value) )
						if(ObjectFile==0) error("Bit address exceeds 8-bits");
					if( isbmram((yyvsp[(1) - (4)]).value) )
						set_b1((yyval).mode, ((yyvsp[(1) - (4)]).value-0x20)*8+ (yyvsp[(2) - (4)]).value );
					else if( isbmsfr((yyvsp[(1) - (4)]).value) )
						set_b1((yyval).mode, (yyvsp[(1) - (4)]).value + (yyvsp[(2) - (4)]).value );
					else
						if(ObjectFile==0) error("Invalid bit addressable RAM location");
				}
			}
			set_md((yyval).mode,11);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
		;}
    break;

  case 242:
#line 2341 "parser.y"
    {
			set_md((yyval).mode,0);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,0);
		;}
    break;

  case 243:
#line 2347 "parser.y"
    {
			set_md((yyval).mode,1);
			set_ov((yyval).mode,(yyvsp[(1) - (1)]).value);
			set_sz((yyval).mode,0);
		;}
    break;

  case 244:
#line 2353 "parser.y"
    {
			set_md((yyval).mode,2);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(1) - (1)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(1) - (1)]));
		;}
    break;

  case 245:
#line 2361 "parser.y"
    {
			set_md((yyval).mode,3);
			set_ov((yyval).mode,(yyvsp[(2) - (2)]).value);
			set_sz((yyval).mode,0);
		;}
    break;

  case 246:
#line 2370 "parser.y"
    {
			set_md((yyval).mode,0);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,0);
		;}
    break;

  case 247:
#line 2376 "parser.y"
    {
			set_md((yyval).mode,1);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,0);
		;}
    break;

  case 248:
#line 2382 "parser.y"
    {
			if((pass2)&&((yyvsp[(1) - (1)]).val.s==1))
			{
				sprintf((yyval).mode.str1, "%s", symexp);
				(yyval).mode.str2[0]=' ';
				(yyval).mode.str2[1]=0;
				(yyval).val.s=1;
			}
			set_md((yyval).mode,2);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
			set_b1((yyval).mode,(yyvsp[(1) - (1)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(1) - (1)]));
		;}
    break;

  case 249:
#line 2400 "parser.y"
    {
			if(((yyvsp[(3) - (5)]).val.k==0) && pass1 && hash_warning_enable)
			{
				warning("maybe '#' is missing with constant expression.");
			}
			set_md((yyval).mode,0);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,2);
			set_b1((yyval).mode,(yyvsp[(3) - (5)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(3) - (5)]));
			set_b2((yyval).mode,(yyvsp[(5) - (5)]).value);
			set_str2(&(yyval).mode,&(yyvsp[(5) - (5)]));
		;}
    break;

  case 250:
#line 2414 "parser.y"
    {
			set_md((yyval).mode,1);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,2);
			set_b1((yyval).mode,(yyvsp[(4) - (6)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(4) - (6)]));
			set_b2((yyval).mode,(yyvsp[(6) - (6)]).value);
			set_str2(&(yyval).mode,&(yyvsp[(6) - (6)]));
		;}
    break;

  case 251:
#line 2424 "parser.y"
    {
			set_md((yyval).mode,2);
			set_ov((yyval).mode,(yyvsp[(1) - (6)]).value);
			set_sz((yyval).mode,2);
			set_b1((yyval).mode,(yyvsp[(4) - (6)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(4) - (6)]));
			set_b2((yyval).mode,(yyvsp[(6) - (6)]).value);
			set_str2(&(yyval).mode,&(yyvsp[(6) - (6)]));
		;}
    break;

  case 252:
#line 2434 "parser.y"
    {
			set_md((yyval).mode,3);
			set_ov((yyval).mode,(yyvsp[(2) - (7)]).value);
			set_sz((yyval).mode,2);
			set_b1((yyval).mode,(yyvsp[(5) - (7)]).value);
			set_str1(&(yyval).mode,&(yyvsp[(5) - (7)]));
			set_b2((yyval).mode,(yyvsp[(7) - (7)]).value);
			set_str2(&(yyval).mode,&(yyvsp[(7) - (7)]));
		;}
    break;

  case 253:
#line 2447 "parser.y"
    {
			long offset;

			if((pass2)&&((yyvsp[(1) - (1)]).val.s==1))
			{
				sprintf((yyval).val.rel, "rel3(%s)", symexp);
				(yyval).val.s=1;
			}
			else if( pass2 )
			{
				offset = (yyvsp[(1) - (1)]).val.v - (current_seg->value+3);
				if( offset > 127 || offset < -128 )
				   error("Relative offset exceeds -128 / +127");
				(yyval).value = offset;
				(yyval).val.s=0;
			}
			symexp[0]=0;
		;}
    break;

  case 254:
#line 2470 "parser.y"
    {
			long offset;
			if((pass2)&&((yyvsp[(1) - (1)]).val.s==1))
			{
				sprintf((yyval).val.rel, "rel2(%s)", symexp);
				(yyval).val.s=1;
			}
			else if( pass2 )
			{
				offset = (yyvsp[(1) - (1)]).val.v - (current_seg->value+2); /* different! */
				if( offset > 127 || offset < -128 )
				   error("Relative offset exceeds -128 / +127");
				(yyval).value = offset;
				(yyval).val.s=0;
			}
			symexp[0]=0;
		;}
    break;

  case 255:
#line 2491 "parser.y"
    {
			static unsigned char sn[0x100]="";
			if( pass2 )
			{
				if((yyvsp[(1) - (2)]).val.s==1)
				{
					sprintf((yyval).val.rel, "bit(%s%04lX;.;)", symexp, (yyvsp[(2) - (2)]).value);
					(yyval).val.s=1;
				}
				else
				{
					if( !isbit8((yyvsp[(1) - (2)]).value) )
						if(ObjectFile==0) error("Bit address exceeds 8-bits");
					if( isbmram((yyvsp[(1) - (2)]).value) )
						(yyval).value = ((yyvsp[(1) - (2)]).value-0x20)*8+(yyvsp[(2) - (2)]).value;
					else if( isbmsfr((yyvsp[(1) - (2)]).value) )
						(yyval).value = (yyvsp[(1) - (2)]).value + (yyvsp[(2) - (2)]).value;
					else
						if(ObjectFile==0) error("Invalid bit addressable RAM location");
					(yyval).val.s=0;
				}
			}
			symexp[0]=0;
		;}
    break;

  case 256:
#line 2516 "parser.y"
    {
			//if((pass2)&&($1.val.s==1)&&isbmsfr($1.value))
			if((pass2)&&((yyvsp[(1) - (1)]).val.s==1))
			{
				sprintf((yyval).val.rel, "bit(%s)", symexp);
				(yyval).val.s=1;
			}
			else if( pass2 )
			{
				if( !isbit8((yyvsp[(1) - (1)]).value) && (ObjectFile==0) )	error("Bit address exceeds 8-bits");
				(yyval).value = (yyvsp[(1) - (1)]).value;
				(yyval).val.s=0;

				if(ObjectFile==0)
				{
					if ( (((yyvsp[(1) - (1)]).val.k&kmask[BSEG])==kmask[BSEG]) || ((yyvsp[(1) - (1)]).val.k==0) )
					{
						// The address of the bit is good
					}
					else
					{
						error("invalid bit address.");
					}
				}
			}
			symexp[0]=0;
		;}
    break;

  case 257:
#line 2558 "parser.y"
    { (yyval).value = 0; (yyval).val.k=1; ;}
    break;

  case 258:
#line 2559 "parser.y"
    { (yyval).value = 1; (yyval).val.k=1; ;}
    break;

  case 259:
#line 2560 "parser.y"
    { (yyval).value = 2; (yyval).val.k=1; ;}
    break;

  case 260:
#line 2561 "parser.y"
    { (yyval).value = 3; (yyval).val.k=1; ;}
    break;

  case 261:
#line 2562 "parser.y"
    { (yyval).value = 4; (yyval).val.k=1; ;}
    break;

  case 262:
#line 2563 "parser.y"
    { (yyval).value = 5; (yyval).val.k=1; ;}
    break;

  case 263:
#line 2564 "parser.y"
    { (yyval).value = 6; (yyval).val.k=1; ;}
    break;

  case 264:
#line 2565 "parser.y"
    { (yyval).value = 7; (yyval).val.k=1; ;}
    break;

  case 265:
#line 2569 "parser.y"
    { (yyval).value = 0; (yyval).val.k=1; ;}
    break;

  case 266:
#line 2570 "parser.y"
    { (yyval).value = 1; (yyval).val.k=1; ;}
    break;

  case 267:
#line 2571 "parser.y"
    { (yyval).value = 2; (yyval).val.k=1; ;}
    break;

  case 268:
#line 2572 "parser.y"
    { (yyval).value = 3; (yyval).val.k=1; ;}
    break;

  case 269:
#line 2573 "parser.y"
    { (yyval).value = 4; (yyval).val.k=1; ;}
    break;

  case 270:
#line 2574 "parser.y"
    { (yyval).value = 5; (yyval).val.k=1; ;}
    break;

  case 271:
#line 2575 "parser.y"
    { (yyval).value = 6; (yyval).val.k=1; ;}
    break;

  case 272:
#line 2576 "parser.y"
    { (yyval).value = 7; (yyval).val.k=1; ;}
    break;

  case 273:
#line 2581 "parser.y"
    {
			if((yyvsp[(1) - (1)]).val.v<2) (yyval).value = (yyvsp[(1) - (1)]).val.v;
			else
			{
				(yyval).value = 0;
				error("Invalid indirect register: @r%d", (yyvsp[(1) - (1)]).val.v);
			}
		;}
    break;

  case 274:
#line 2593 "parser.y"
    {
			if((pass2)&&((yyval).val.s==1))
			{
				sprintf((yyval).val.rel,"data8(%s)", symexp);
				(yyval).val.s=1;
			}
			else if( pass2 )
			{
				if((yyval).val.s==0)
				{
					if( !isbit8((yyvsp[(1) - (1)]).val.v) && (ObjectFile==0) ) error("Expression greater than 8-bits");
				}
				(yyval).value = (yyvsp[(1) - (1)]).val.v;// & 0xff; //Allow 16-bit data expression in object files.  They are truncated by the linker.
				(yyval).val.s=0;
			}
			symexp[0]=0;
		;}
    break;

  case 275:
#line 2612 "parser.y"
    { (yyval).value = (yyvsp[(1) - (1)]).val.v+(8*RegisterBank); ;}
    break;

  case 276:
#line 2617 "parser.y"
    {
			if((pass2)&&((yyval).val.s==1))
			{
				sprintf((yyval).val.rel,"data16(%s)", symexp);
				(yyval).val.s=1;
			}
			else
			{
				if( pass2 )
				{
					if( !isbit16((yyvsp[(1) - (1)]).val.v)  && (ObjectFile==0) ) error("Expression greater than 16-bits");
				}
				(yyval).value = (yyvsp[(1) - (1)]).val.v;
				(yyval).val.s=0;
			}
			symexp[0]=0;
		;}
    break;

  case 277:
#line 2635 "parser.y"
    {
			if(strlen((yyvsp[(1) - (1)]).str)!=2)
			{
				error("Invalid 16-bit string constant");
			}
			else
			{
				(yyval).value = ((yyvsp[(1) - (1)]).str[0]*0x100)+(yyvsp[(1) - (1)]).str[1];
			}
			free((yyvsp[(1) - (1)]).str);
		;}
    break;

  case 278:
#line 2650 "parser.y"
    {
			if((pass2)&&((yyvsp[(1) - (1)]).val.s==1))
			{
				sprintf((yyval).mode.str1, "addr11(%s)", symexp);
				(yyval).mode.str2[0]=' ';
				(yyval).mode.str2[1]=0;
			}
			else
			{
				if( pass2 )
				{
					if( !isbit16((yyvsp[(1) - (1)]).val.v)  )
						error("Address greater than 16-bits");
					if( ((unsigned long)((yyvsp[(1) - (1)]).val.v & size11)) != ((current_seg->value+2) & size11) )
						error("Address outside current 2K page");
				}
				set_b1((yyval).mode,(yyvsp[(1) - (1)]).val.v&0x00ff);
			}
			set_md((yyval).mode,0);
			set_ov((yyval).mode, ((yyvsp[(1) - (1)]).val.v&0x0700)>>3 );
			set_sz((yyval).mode,1);
			symexp[0]=0;
		;}
    break;

  case 279:
#line 2677 "parser.y"
    {
			if((pass2)&&((yyvsp[(1) - (1)]).val.s==1))
			{
				sprintf((yyval).mode.str1, "addr16(%s)", symexp);
				(yyval).mode.str2[0]=' ';
				(yyval).mode.str2[1]=0;
				(yyval).val.s=1;
			}
			else
			{
				if( pass2 )
				{
					if( !isbit16((yyvsp[(1) - (1)]).val.v)  ) error("Address greater than 16-bits");
				}
				set_b1((yyval).mode, (yyvsp[(1) - (1)]).val.v / 0x100 ); // Doesn't work on macOS / Linux
				set_b2((yyval).mode, ((yyvsp[(1) - (1)]).val.v & 0x00ff ) ); // Works
				(yyval).val.v=(yyvsp[(1) - (1)]).val.v;
				//printf("addr16=%04lx, b1=%02x, b2=%02x\n", $1.val.v, get_b1($$.mode), get_b2($$.mode));
			}
			set_md((yyval).mode,0);
			set_ov((yyval).mode, 0 );
			set_sz((yyval).mode,2);
			symexp[0]=0;
		;}
    break;

  case 280:
#line 2705 "parser.y"
    {
			long offset=0;
			if((pass2)&&((yyvsp[(1) - (1)]).val.s==1))
			{
				sprintf((yyval).mode.str1, "rel2(%s)", symexp);
			}
			else
			{
				if( pass2 )
				{
					offset = (yyvsp[(1) - (1)]).val.v - (current_seg->value+2);
					if( offset>127 || offset<-128 )
					   error("Relative offset exceeds -128 / +127");
				}
				set_b1((yyval).mode,offset);
			}
			set_md((yyval).mode,0);
			set_ov((yyval).mode,0);
			set_sz((yyval).mode,1);
			symexp[0]=0;
		;}
    break;


/* Line 1267 of yacc.c.  */
#line 5606 "parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 2728 "parser.y"


/* ---------------------------------------------------------------------- */

void yyerror(char *s)
{
	error((const char *)"%s near \"%s\"", s, get_last_token());
	//error((const char *)"%s", s);
}

void set_str1(struct mode *m, union ystack *y)
{
	if(y->val.s==1)
	{
		strcpy(m->str1, y->val.rel);
	}
	else
		m->str1[0]=0;
}

void set_str2(struct mode *m, union ystack *y)
{
	if(y->val.s==1)
	{
		strcpy(m->str2, y->val.rel);
	}
	else
		m->str2[0]=0;
}

/* ----------------------------------------------------------------------
 * makeop:
 *	This function makes an opcode based on the instruction symbol table
 *	entry, and an addressing mode structure.
 *	This function is called from both passes, but
 *	only generates code in pass 2.
 *
 *	Resultant opcode bytes are passed to genbyte().
 *
 *	Returns the number of bytes that the instruction
 *	occupies.
 *
 */

int makeop(struct opcode * op, struct mode *m, int add)
{
	register unsigned int newop;

	if( m == NULL )
	{
		if(pass2)
		{
			genbyte(op->bytes[0+add]);
			if(ObjectFile) fprintf(fobj, "%02X\n", op->bytes[0+add]);
		}
		return(1);
	}

	if( pass2 )
	{
		//printf("byte 0 = %02x\n", newop);
		newop = op->bytes[ get_md(*m)+add ] | get_ov(*m);
		genbyte(newop);
		if(ObjectFile) fprintf(fobj, "%02X", newop); 
		
		if( get_sz(*m) > 0 )
		{ 
			//printf("byte 1 = %02x\n", get_b1(*m) & 0xff);
			genbyte( get_b1(*m) & 0xff );
			if(ObjectFile)
			{
				if (m->str1[0]!=0)
				{
					fprintf(fobj, " %s", m->str1);
				}
				else fprintf(fobj, " %02X", get_b1(*m)&0xff);
			}
		}
		if( get_sz(*m) > 1 )
		{
			//printf("byte 2 = %02x\n", get_b2(*m) & 0xff);
			genbyte( get_b2(*m) & 0xff );
			if(ObjectFile)
			{
				if (m->str2[0]!=0)
				{
					fprintf(fobj, " %s", m->str2);
				}
				else fprintf(fobj, " %02X", get_b2(*m)&0xff);
			}
		}
	}

	if((ObjectFile)&&(pass2)) fprintf(fobj, "\n");

	return( get_sz(*m)+1 );
}

/* ----------------------------------------------------------------------
 * padline:
 *	This routine returns a new string, which is equivalent to
 *	'line' except that all tabs have been expanded to spaces, and
 *	the total length has been truncated to 0x200 chars.
 */

char *padline(char *line)
{
	static char newline[0x200];
	char *p1;
	int pos=0,nxtpos;

	for(p1=line; pos<sizeof(newline)-1 && *p1; p1++ )
	{
		if( *p1 == '\t' )
		{
			nxtpos = pos+8-pos%8;
			while(pos<sizeof(newline)-1 && pos <= nxtpos)
				newline[pos++] = ' ';
		}
		else if ( ( *p1 != '\n' ) && ( *p1 != '\r' ) )
		{
			newline[pos++]= *p1;
		}
	}
	newline[pos] = '\0';
	return(newline);
}


/* ----------------------------------------------------------------------
 * dumplist:
 *	Outputs the current location counter, bytebuf[] array, and
 *	the string 'txt' to the listing file.
 *	This routine is called for every source line encountered in the
 *	source file. (Only in pass 2, and if listing is turned on).
 *
 */

void dumplist(char *txt, int show)
{
	int i,j,lc;
	int numnl, mylineno, prevnl;

	for(j=0, numnl=0; txt[j]!=0; j++)
	{
		if(txt[j]=='\n') numnl++;
	}
	if(numnl>1)
	{
		mylineno=lineno-numnl+1;
		fprintf(listing, "              %5d   ", mylineno++);
		prevnl=0;
		for(j=0; txt[j]!=0; j++)
		{
			if(txt[j]!='\n')
			{
				if(prevnl)
				{
					fprintf(listing, "\n              %5d   ", mylineno++);
					prevnl=0;
				}
				if(txt[j]!='\r') fprintf(listing, "%c", txt[j]);
			}
			else
			{
				prevnl=1;
			}
		}
		fprintf(listing, "\n");
		return;
	}

	lc=current_seg->value;

	if(show)
	{
		fprintf(listing, "%04X ", lc);
	}
	else
	{
		fprintf(listing, "%04X ", lc);
		//fprintf(listing, "     ");
	}

	for(i=0; i<4; i++ ) {
		if(i<bytecount)
		    fprintf(listing,"%02X",bytebuf[i]);
		else
		    fprintf(listing,"  ");
	}
	fprintf(listing," %5d   %s", lineno, padline(txt));

	for(j=0; i<bytecount; i++, j++)
	{
		if((j%4)==0) fprintf(listing, "\n     ");
		if(i<bytecount) fprintf(listing, "%02X",bytebuf[i]);
	}
	fprintf(listing, "\n");
}

/* ----------------------------------------------------------------------
 * gen* routines:
 *	Place information into the bytebuf[] array, and also
 *	call emitbyte with the byte.
 *
 */

void genbyte(int b)
{
	//printf("%02x\n", b);
	if( bytecount < sizeof(bytebuf) )
		bytebuf[bytecount++] = b;
	if(ObjectFile==0) emitbyte(b);
}

void genstr(char *s)
{
	while( *s )
		genbyte(*s++);
}

void genword(unsigned long w)
{
	genbyte( (w & 0xff00) >> 8 );
	genbyte( (w & 0x00ff) );
}

void objbyte(int b)
{
	fprintf(fobj, "%02X\n", b);
}

void objstr(char *s)
{
	int j;

	for(j=0; s[j]!=0; j++)
	{
		fprintf(fobj, "%02X", s[j]);
		if((j>0)&&(j%16==0)) fprintf(fobj, "\n");
		else fprintf(fobj, " ");
	}
	fprintf(fobj, "\n");
}

void objword(unsigned long w)
{
	fprintf(fobj, "%02lX ",  (w & 0xff00) >> 8 );
	fprintf(fobj, "%02lX\n", (w & 0x00ff) );
}

void BadRegUse(char * x)
{
	 error("Invalid use of predefined register '%s'", x);
	 seek_eol();
}

void NoObjectFileError (char * x)
{
	error("Directive '%s' not allowed for absolute compilation.\n", x);
}

