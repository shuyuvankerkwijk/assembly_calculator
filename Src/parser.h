/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

