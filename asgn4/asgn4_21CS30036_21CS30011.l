%{
    #include <stdio.h>
    #include <math.h>
    #include <string.h>
    #include "y.tab.h"
%}

%x SINGLELINE
%x MULTILINE

IDENTIFIER              [_a-zA-Z][_a-zA-Z0-9]*
INTEGERCONST            [1-9][0-9]*|[0]
SIGN                    [+-]
DIGITSEQ                [0-9]+
EXPONENT                [eE]({SIGN}?){DIGITSEQ}
FRACTIONALCONST         ({DIGITSEQ}?\.{DIGITSEQ})|({DIGITSEQ}\.)
FLOATINGCONST           ({FRACTIONALCONST}({EXPONENT}?))|({DIGITSEQ}{EXPONENT})
ESCAPESEQ               "\\\'"|"\\\""|"\\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
CCHAR                   [^\n\'\\]|{ESCAPESEQ}
CCHARSEQ                {CCHAR}+
CHARCONST               \'{CCHARSEQ}\'
SCHAR                   [^\n\"\\]|{ESCAPESEQ}
SCHARSEQ                {SCHAR}+
STRINGLITERAL           \"({SCHARSEQ}?)\"
WS                      [ \t\n]

%%

"auto"                  { return AUTO; }
"break"                 { return BREAK; }
"case"                  { return CASE; }
"char"                  { return CHAR; }
"const"                 { return CONST; }
"continue"              { return CONTINUE; }
"default"               { return DEFAULT; }
"do"                    { return DO; }
"double"                { return DOUBLE; }
"else"                  { return ELSE; }
"enum"                  { return ENUM; }             
"extern"                { return EXTERN; }
"float"                 { return FLOAT; }
"for"                   { return FOR; }
"goto"                  { return GOTO; }
"if"                    { return IF; }
"inline"                { return INLINE; }
"int"                   { return INT; }
"long"                  { return LONG; }
"register"              { return REGISTER; }
"restrict"              { return RESTRICT; }
"return"                { return RETURN; }
"short"                 { return SHORT; }
"signed"                { return SIGNED; }
"sizeof"                { return SIZEOF; }
"static"                { return STATIC; }
"struct"                { return STRUCT; }
"switch"                { return SWITCH; }
"typedef"               { return TYPEDEF; }
"union"                 { return UNION; }
"unsigned"              { return UNSIGNED; }
"void"                  { return VOID; }
"volatile"              { return VOLATILE; }
"while"                 { return WHILE; }
"_Bool"                 { return BOOL; }
"_Complex"              { return COMPLEX; }
"_Imaginary"            { return IMAGINARY; }

"["                     { return SQUARE_BRACE_OPEN; }
"]"                     { return SQUARE_BRACE_CLOSE; }
"("                     { return PARENTHESIS_OPEN; }
")"                     { return PARENTHESIS_CLOSE; }
"{"                     { return CURLY_BRACE_OPEN; }
"}"                     { return CURLY_BRACE_CLOSE; }
"."                     { return DOT; }
"->"                    { return ARROW; }
"++"                    { return INCREMENT; }
"--"                    { return DECREMENT; }
"&"                     { return BITWISE_AND; }
"*"                     { return MULTIPLY; }
"+"                     { return ADD; }
"-"                     { return SUBTRACT; }
"~"                     { return BITWISE_NOR; }
"!"                     { return NOT; }
"/"                     { return DIVIDE; }
"%"                     { return MODULO; }
"<<"                    { return LSHIFT; }
">>"                    { return RSHIFT; }
"<"                     { return LESS_THAN; }
">"                     { return GREATER_THAN; }
"<="                    { return LESS_THAN_EQUAL; }
">="                    { return GREATER_THAN_EQUAL; }
"=="                    { return EQUAL; }
"!="                    { return NOT_EQUAL; }
"^"                     { return BITWISE_XOR; }
"|"                     { return BITWISE_OR; }
"&&"                    { return LOGICAL_AND; }
"||"                    { return LOGICAL_OR; }
"?"                     { return QUESTION_MARK; }
":"                     { return COLON; }
";"                     { return SEMICOLON; }
"..."                   { return ELLIPSIS; }
"="                     { return ASSIGN; }
"*="                    { return MULTIPLY_ASSIGN; }
"/="                    { return DIVIDE_ASSIGN; }
"%="                    { return MODULO_ASSIGN; }
"+="                    { return ADD_ASSIGN; }
"-="                    { return SUBTRACT_ASSIGN; }
"<<="                   { return LSHIFT_ASSIGN; }
">>="                   { return RSHIFT_ASSIGN; }
"&="                    { return AND_ASSIGN; }
"^="                    { return XOR_ASSIGN; }
"|="                    { return OR_ASSIGN; }
","                     { return COMMA; }
"#"                     { return HASH; }

{IDENTIFIER}            {yylval.strval = strdup(yytext); return IDENTIFIER;}
{INTEGERCONST}          {yylval.intval = atoi(yytext);  return INTEGERCONST;}
{FLOATINGCONST}         {yylval.floatval = atof(yytext); return FLOATINGCONST;}
{CHARCONST}             {yylval.charval = yytext[1]; return CHARCONST;}
{STRINGLITERAL}         {yylval.strval = strdup(yytext); return STRINGLITERAL;}
{WS}                    { }

"//"                    {BEGIN(SINGLELINE); }
<SINGLELINE>.           {}
<SINGLELINE>\n          {BEGIN(INITIAL); }
<SINGLELINE><<EOF>>     {BEGIN(INITIAL); }

"/*"                    {BEGIN(MULTILINE);}
<MULTILINE>.            {}
<MULTILINE>\n           {}
<MULTILINE>"*/"         {BEGIN(INITIAL);}

%%