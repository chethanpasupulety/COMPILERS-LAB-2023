/*
Compilers labaratory 
Assignment number: 3
Name : Chethan Krishna Venkat, Bannuru Rohit Kumar Reddy
Roll No. 21CS30036, 21CS30011
*/


#include <stdio.h>
    #define KEYWORD 258
    #define IDENTIFIER 259
    #define PUNCTUATORS 260
    #define STRING_LITERAL 261
    #define INT_CONST 262
    #define FLOAT_CONST 263
    #define CHAR_CONSTANT 264
    #define MULTI_COMMENT 265
    #define SINGLE_COMMENT 266
    #define WS 267
    #define MULTI_COMMENT_START 268
    #define MULTI_COMMENT_END 269
    #define SINGLE_COMMENT_START 270
    #define SINGLE_COMMENT_END 271


    extern char* yytext;
    extern int yylex();

    
int main()
{
    int token;
    while(token = yylex())
    {
        switch(token) 
        {
            case KEYWORD: printf("<KEYWORD, %d, %s>\n", token, yytext); break;
            case IDENTIFIER: printf("<IDENTIFIER, %d, %s>\n", token, yytext); break;
            case PUNCTUATORS: printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
            case STRING_LITERAL: printf("<STRING_LITERAL, %d, %s>\n", token, yytext); break;
            case INT_CONST: printf("<INTEGER_CONST, %d, %s>\n", token, yytext); break;
            case FLOAT_CONST: printf("<FLOAT_CONST, %d, %s>\n", token, yytext); break;
            case CHAR_CONSTANT: printf("<CHARACTER_CONST, %d, %s>\n", token, yytext); break;
            case MULTI_COMMENT_START: printf("<MULTI_LINE_COMMENT_BEGINS, %d, %s>\n", token, yytext); break;
            case MULTI_COMMENT_END: printf("<MULTI_LINE_COMMENT_ENDS, %d, %s>\n", token, yytext); break;
            case MULTI_COMMENT: printf("%s", yytext); break;
            case SINGLE_COMMENT_START: printf("<SINGLE_LINE_COMMENT_BEGINS, %d, %s>\n", token, yytext); break;
            case SINGLE_COMMENT_END: printf("<SINGLE_LINE_COMMENT_ENDS, %d, %s>\n", token, yytext); break;
            case SINGLE_COMMENT: printf("%s", yytext); break;
            default: break;
        }
    }
    return 0;
}