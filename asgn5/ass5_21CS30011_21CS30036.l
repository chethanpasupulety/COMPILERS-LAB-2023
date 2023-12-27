%{  
    #include <stdio.h>
    #include "ass5_21CS30011_21CS30036_translator.h"
    #include "ass5_21CS30011_21CS30036.tab.h"
%}

%option yylineno
%option noyywrap

%x SINGLELINE
%x MULTILINE

IDENTIFIER                      [_a-zA-Z][_a-zA-Z0-9]*
INTEGER_CONSTANT                [1-9][0-9]*|[0]
DIGIT_SEQUENCE                  [0-9]+
SIGN                            [+-]
EXPONENT_PART                   [eE]({SIGN}?){DIGIT_SEQUENCE}
FRACTIONAL_CONSTANT             ({DIGIT_SEQUENCE}?\.{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}\.)
FLOATING_CONSTANT               ({FRACTIONAL_CONSTANT}{EXPONENT_PART}?)|({DIGIT_SEQUENCE}{EXPONENT_PART})
ENUM_CONSTANT                   {IDENTIFIER}
ESCAPE_SEQUENCE                 \\['"?\\abfnrtv]
C_CHAR                          [^\'\\\n]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE                 {C_CHAR}+
CHAR_CONSTANT                   \'({C_CHAR_SEQUENCE})\'
CONSTANT                        {INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{ENUM_CONSTANT}|{CHAR_CONSTANT}
S_CHAR                          [^\"\\\n]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE                 {S_CHAR}+
STRING_LITERAL                  \"({S_CHAR_SEQUENCE}?)\"
WS                              [ \t\n]


%%

"auto"                          { return AUTO; }
"break"                         { return BREAK; }
"case"                          { return CASE; }
"char"                          { return CHAR; }
"const"                         { return CONST; }
"continue"                      { return CONTINUE; }
"default"                       { return DEFAULT; }
"do"                            { return DO; }
"double"                        { return DOUBLE; }
"else"                          { return ELSE; }
"enum"                          { return ENUM; }             
"extern"                        { return EXTERN; }
"float"                         { return FLOAT; }
"for"                           { return FOR; }
"goto"                          { return GOTO; }
"if"                            { return IF; }
"inline"                        { return INLINE; }
"int"                           { return INT; }
"long"                          { return LONG; }
"register"                      { return REGISTER; }
"restrict"                      { return RESTRICT; }
"return"                        { return RETURN; }
"short"                         { return SHORT; }
"signed"                        { return SIGNED; }
"sizeof"                        { return SIZEOF; }
"static"                        { return STATIC; }
"struct"                        { return STRUCT; }
"switch"                        { return SWITCH; }
"typedef"                       { return TYPEDEF; }
"union"                         { return UNION; }
"unsigned"                      { return UNSIGNED; }
"void"                          { return VOID; }
"volatile"                      { return VOLATILE; }
"while"                         { return WHILE; }
"_Bool"                         { return BOOL; }
"_Complex"                      { return COMPLEX; }
"_Imaginary"                    { return IMAGINARY; }
"["                             { return SQUARE_BRACE_OPEN; }
"]"                             { return SQUARE_BRACE_CLOSE; }
"("                             { return PARENTHESIS_OPEN; }
")"                             { return PARENTHESIS_CLOSE; }
"{"                             { return CURLY_BRACE_OPEN; }
"}"                             { return CURLY_BRACE_CLOSE; }
"."                             { return DOT; }
"->"                            { return ARROW; }
"++"                            { return INCREMENT; }
"--"                            { return DECREMENT; }
"&"                             { return BITWISE_AND; }
"*"                             { return MULTIPLY; }
"+"                             { return ADD; }
"-"                             { return SUBTRACT; }
"~"                             { return BITWISE_NOR; }
"!"                             { return NOT; }
"/"                             { return DIVIDE; }
"%"                             { return MODULO; }
"<<"                            { return LSHIFT; }
">>"                            { return RSHIFT; }
"<"                             { return LESS_THAN; }
">"                             { return GREATER_THAN; }
"<="                            { return LESS_THAN_EQUAL; }
">="                            { return GREATER_THAN_EQUAL; }
"=="                            { return EQUAL; }
"!="                            { return NOT_EQUAL; }
"^"                             { return BITWISE_XOR; }
"|"                             { return BITWISE_OR; }
"&&"                            { return LOGICAL_AND; }
"||"                            { return LOGICAL_OR; }
"?"                             { return QUESTION_MARK; }
":"                             { return COLON; }
";"                             { return SEMICOLON; }
"..."                           { return ELLIPSIS; }
"="                             { return ASSIGN; }
"*="                            { return MULTIPLY_ASSIGN; }
"/="                            { return DIVIDE_ASSIGN; }
"%="                            { return MODULO_ASSIGN; }
"+="                            { return ADD_ASSIGN; }
"-="                            { return SUBTRACT_ASSIGN; }
"<<="                           { return LSHIFT_ASSIGN; }
">>="                           { return RSHIFT_ASSIGN; }
"&="                            { return AND_ASSIGN; }
"^="                            { return XOR_ASSIGN; }
"|="                            { return OR_ASSIGN; }
","                             { return COMMA; }
"#"                             { return HASH; }
{IDENTIFIER}                    { yylval.symp = currSymTab->lookup(yytext); return IDENTIFIER; }
{INTEGER_CONSTANT}              { yylval.intval = atoi(yytext); return INTEGER_CONSTANT; }
{FLOATING_CONSTANT}             { yylval.charval = yytext; return FLOATING_CONSTANT; }
{CHAR_CONSTANT}                 { yylval.charval = yytext; return CHAR_CONSTANT; }
{STRING_LITERAL}                { yylval.charval = yytext; return STRING_LITERAL; }
{WS}                            { }

"//"                    {BEGIN(SINGLELINE); }
<SINGLELINE>.           {}
<SINGLELINE>\n          {BEGIN(INITIAL); }
<SINGLELINE><<EOF>>     {BEGIN(INITIAL); }

"/*"                    {BEGIN(MULTILINE);}
<MULTILINE>.            {}
<MULTILINE>\n           {}
<MULTILINE>"*/"         {BEGIN(INITIAL);}

%%