/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : pythonbrief.g
 *     -                            On : 2014-04-22 22:32:59
 *     -                 for the lexer : pythonbriefLexerLexer *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer pythonbriefLexer has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef ppythonbriefLexer, which is returned from a call to pythonbriefLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 * * The methods in ppythonbriefLexer are  as follows:
 *
 *  -  void      ppythonbriefLexer->T__98(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__99(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__100(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__101(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__102(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__103(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__104(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__105(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__106(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__107(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__108(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__109(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__110(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__111(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__112(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__113(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__114(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__115(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__116(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__117(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__118(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__119(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__120(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__121(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__122(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__123(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__124(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__125(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__126(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__127(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__128(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__129(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__130(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__131(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__132(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__133(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__134(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__135(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__136(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__137(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__138(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__139(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__140(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__141(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__142(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__143(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__144(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__145(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__146(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__147(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__148(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__149(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__150(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__151(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__152(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__153(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__154(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__155(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__156(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__157(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__158(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__159(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__160(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->T__161(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->STRINGLITERAL(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->STRINGPREFIX(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->SHORTSTRING(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->LONGSTRING(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->BYTESLITERAL(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->BYTESPREFIX(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->SHORTBYTES(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->LONGBYTES(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->TRIAPOS(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->TRIQUOTE(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->ESCAPESEQ(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->INTEGER(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->LONGINT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->DECIMALINTEGER(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->NONZERODIGIT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->DIGIT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->OCTINTEGER(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->HEXINTEGER(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->BININTEGER(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->OCTDIGIT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->NONZEROOCTDIGIT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->HEXDIGIT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->BINDIGIT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->FLOATNUMBER(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->POINTFLOAT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->EXPONENTFLOAT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->INTPART(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->FRACTION(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->EXPONENT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->IMAGNUMBER(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->NAME(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->ID_START(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->ID_CONTINUE(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->STAR(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->DOUBLESTAR(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->LPAREN(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->RPAREN(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->LBRACK(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->RBRACK(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->LCURLY(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->RCURLY(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->COMMA(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->COLON(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->DOT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->SEMI(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->ASSIGN(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->CONTINUED_LINE(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->NEWLINE(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->WS(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->LEADING_WS(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->COMMENT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->DEDENT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->INDENT(ppythonbriefLexer)
 *  -  void      ppythonbriefLexer->Tokens(ppythonbriefLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_pythonbriefLexer_H
#define _pythonbriefLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct pythonbriefLexer_Ctx_struct pythonbriefLexer, * ppythonbriefLexer;



    #define ANTLR3_INLINE_INPUT_ASCII


#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for pythonbriefLexer
 */
struct pythonbriefLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;


     void (*mT__98)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__99)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__100)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__101)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__102)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__103)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__104)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__105)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__106)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__107)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__108)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__109)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__110)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__111)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__112)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__113)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__114)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__115)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__116)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__117)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__118)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__119)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__120)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__121)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__122)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__123)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__124)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__125)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__126)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__127)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__128)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__129)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__130)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__131)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__132)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__133)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__134)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__135)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__136)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__137)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__138)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__139)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__140)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__141)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__142)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__143)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__144)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__145)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__146)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__147)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__148)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__149)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__150)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__151)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__152)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__153)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__154)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__155)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__156)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__157)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__158)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__159)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__160)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mT__161)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mSTRINGLITERAL)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mSTRINGPREFIX)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mSHORTSTRING)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mLONGSTRING)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mBYTESLITERAL)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mBYTESPREFIX)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mSHORTBYTES)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mLONGBYTES)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mTRIAPOS)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mTRIQUOTE)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mESCAPESEQ)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mINTEGER)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mLONGINT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mDECIMALINTEGER)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mNONZERODIGIT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mDIGIT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mOCTINTEGER)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mHEXINTEGER)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mBININTEGER)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mOCTDIGIT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mNONZEROOCTDIGIT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mHEXDIGIT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mBINDIGIT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mFLOATNUMBER)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mPOINTFLOAT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mEXPONENTFLOAT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mINTPART)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mFRACTION)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mEXPONENT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mIMAGNUMBER)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mNAME)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mID_START)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mID_CONTINUE)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mSTAR)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mDOUBLESTAR)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mLPAREN)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mRPAREN)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mLBRACK)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mRBRACK)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mLCURLY)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mRCURLY)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mCOMMA)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mCOLON)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mDOT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mSEMI)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mASSIGN)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mCONTINUED_LINE)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mNEWLINE)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mWS)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mLEADING_WS)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mCOMMENT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mDEDENT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mINDENT)	(struct pythonbriefLexer_Ctx_struct * ctx);
     void (*mTokens)	(struct pythonbriefLexer_Ctx_struct * ctx);    const char * (*getGrammarFileName)();
    void	    (*free)   (struct pythonbriefLexer_Ctx_struct * ctx);
        

        ANTLR3_INT32    implicitLineJoiningLevel;
        ANTLR3_INT32    startPos;

        pANTLR3_STACK   identStack;
        pANTLR3_VECTOR  tokens;
        void *          onEncoding;

        void (*origFree) ( struct pythonbriefLexer_Ctx_struct *  ctx );
        pANTLR3_COMMON_TOKEN (*origNextToken)( pANTLR3_TOKEN_SOURCE  toksource );

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API ppythonbriefLexer pythonbriefLexerNew         (pANTLR3_INPUT_STREAM instream);
ANTLR3_API ppythonbriefLexer pythonbriefLexerNewSSD      (pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the lexer will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define EXCEPT_STMT      37
#define EXPONENT      92
#define STAR      52
#define NONZERODIGIT      82
#define T__159      159
#define T__158      158
#define WHAT      23
#define TRIAPOS      73
#define NONZEROOCTDIGIT      87
#define T__160      160
#define LONGBYTES      77
#define EOF      -1
#define IMPORT_STMT      22
#define BREAK_STMT      11
#define T__161      161
#define LEADING_WS      97
#define DBL_STAR_ARG      34
#define RPAREN      50
#define OCTINTEGER      79
#define NAME_ARG      32
#define NAME      54
#define T__148      148
#define FINALLY_STMT      36
#define DICTIONARY      39
#define STRING_LITERAL      40
#define T__147      147
#define T__149      149
#define DOTTED_NAME      18
#define CONTINUE_STMT      12
#define BODY      8
#define T__154      154
#define COMMENT      48
#define T__155      155
#define SHORTBYTES      76
#define T__156      156
#define T__157      157
#define T__99      99
#define T__150      150
#define T__98      98
#define T__151      151
#define T__152      152
#define T__153      153
#define RBRACK      60
#define T__139      139
#define T__138      138
#define T__137      137
#define T__136      136
#define ARGUMENTS      46
#define ESCAPESEQ      72
#define LCURLY      61
#define FUNC_DEF      7
#define T__141      141
#define LIST      38
#define T__142      142
#define T__140      140
#define T__145      145
#define GLOBAL_STMT      21
#define T__146      146
#define T__143      143
#define T__144      144
#define T__126      126
#define SHORTSTRING      70
#define T__125      125
#define T__128      128
#define DECOR      17
#define T__127      127
#define WS      96
#define T__129      129
#define WHILE_STMT      28
#define INTPART      90
#define BINDIGIT      86
#define NOT_IN      41
#define BYTESLITERAL      68
#define FLOATNUMBER      65
#define LONGINT      64
#define PASS_STMT      10
#define T__130      130
#define T__131      131
#define T__132      132
#define T__133      133
#define T__134      134
#define T__135      135
#define EXPONENTFLOAT      89
#define CONTINUED_LINE      95
#define LBRACK      59
#define CLASS_INHERITANCE      45
#define DOUBLESTAR      53
#define ELSE_STMT      26
#define T__118      118
#define T__119      119
#define BYTESPREFIX      75
#define T__116      116
#define T__117      117
#define T__114      114
#define TRY_STMT      35
#define T__115      115
#define TEST_LIST      31
#define T__124      124
#define OCTDIGIT      84
#define T__123      123
#define BININTEGER      81
#define T__122      122
#define T__121      121
#define DEDENT      5
#define T__120      120
#define ELIF_STMT      27
#define DEL_STMT      9
#define PRINT_STMT      16
#define INDENT      4
#define WITH_STMT      30
#define LPAREN      49
#define POINTFLOAT      88
#define STRINGPREFIX      69
#define AS      24
#define IS_NOT      42
#define T__107      107
#define T__108      108
#define COMMA      51
#define T__109      109
#define T__103      103
#define IF_STMT      25
#define EXEC_STMT      20
#define T__104      104
#define T__105      105
#define T__106      106
#define T__111      111
#define T__110      110
#define T__113      113
#define T__112      112
#define DIGIT      83
#define DOT      58
#define IMAGNUMBER      66
#define RETURN_STMT      13
#define INTEGER      63
#define T__102      102
#define T__101      101
#define HEXINTEGER      80
#define T__100      100
#define STAR_ARG      33
#define SEMI      56
#define LONGSTRING      71
#define YIELD_STMT      15
#define COLON      55
#define TRIQUOTE      74
#define FOR_STMT      29
#define TRAILER_NAME      43
#define HEAD_NAME      44
#define ASSERT_STMT      19
#define NEWLINE      47
#define STRINGLITERAL      67
#define RCURLY      62
#define ASSIGN      57
#define ID_CONTINUE      94
#define DECIMALINTEGER      78
#define RAISE_STMT      14
#define FRACTION      91
#define ID_START      93
#define CLASS_DEF      6
#define HEXDIGIT      85
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for pythonbriefLexer
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
