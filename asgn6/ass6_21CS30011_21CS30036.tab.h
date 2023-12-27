/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ASS6_21CS30011_21CS30036_TAB_H_INCLUDED
# define YY_YY_ASS6_21CS30011_21CS30036_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AUTO = 258,                    /* AUTO  */
    BREAK = 259,                   /* BREAK  */
    CASE = 260,                    /* CASE  */
    CHAR_ = 261,                   /* CHAR_  */
    CONST = 262,                   /* CONST  */
    CONTINUE = 263,                /* CONTINUE  */
    DEFAULT = 264,                 /* DEFAULT  */
    DO = 265,                      /* DO  */
    DOUBLE = 266,                  /* DOUBLE  */
    ELSE = 267,                    /* ELSE  */
    ENUM = 268,                    /* ENUM  */
    EXTERN = 269,                  /* EXTERN  */
    FLOAT_ = 270,                  /* FLOAT_  */
    FOR = 271,                     /* FOR  */
    GOTO_ = 272,                   /* GOTO_  */
    IF = 273,                      /* IF  */
    INLINE = 274,                  /* INLINE  */
    INT_ = 275,                    /* INT_  */
    LONG = 276,                    /* LONG  */
    REGISTER = 277,                /* REGISTER  */
    RESTRICT = 278,                /* RESTRICT  */
    RETURN_ = 279,                 /* RETURN_  */
    SHORT = 280,                   /* SHORT  */
    SIGNED = 281,                  /* SIGNED  */
    SIZEOF = 282,                  /* SIZEOF  */
    STATIC = 283,                  /* STATIC  */
    STRUCT = 284,                  /* STRUCT  */
    SWITCH = 285,                  /* SWITCH  */
    TYPEDEF = 286,                 /* TYPEDEF  */
    UNION = 287,                   /* UNION  */
    UNSIGNED = 288,                /* UNSIGNED  */
    VOID_ = 289,                   /* VOID_  */
    VOLATILE = 290,                /* VOLATILE  */
    WHILE = 291,                   /* WHILE  */
    BOOL_ = 292,                   /* BOOL_  */
    COMPLEX = 293,                 /* COMPLEX  */
    IMAGINARY = 294,               /* IMAGINARY  */
    SQUARE_BRACE_OPEN = 295,       /* SQUARE_BRACE_OPEN  */
    SQUARE_BRACE_CLOSE = 296,      /* SQUARE_BRACE_CLOSE  */
    PARENTHESIS_OPEN = 297,        /* PARENTHESIS_OPEN  */
    PARENTHESIS_CLOSE = 298,       /* PARENTHESIS_CLOSE  */
    CURLY_BRACE_OPEN = 299,        /* CURLY_BRACE_OPEN  */
    CURLY_BRACE_CLOSE = 300,       /* CURLY_BRACE_CLOSE  */
    DOT = 301,                     /* DOT  */
    ARROW = 302,                   /* ARROW  */
    INCREMENT = 303,               /* INCREMENT  */
    DECREMENT = 304,               /* DECREMENT  */
    BITWISE_AND = 305,             /* BITWISE_AND  */
    MULTIPLY = 306,                /* MULTIPLY  */
    ADD_ = 307,                    /* ADD_  */
    SUBTRACT = 308,                /* SUBTRACT  */
    BITWISE_NOR = 309,             /* BITWISE_NOR  */
    NOT = 310,                     /* NOT  */
    DIVIDE = 311,                  /* DIVIDE  */
    MODULO = 312,                  /* MODULO  */
    LSHIFT = 313,                  /* LSHIFT  */
    RSHIFT = 314,                  /* RSHIFT  */
    LESS_THAN = 315,               /* LESS_THAN  */
    GREATER_THAN = 316,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 317,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 318,      /* GREATER_THAN_EQUAL  */
    EQUAL = 319,                   /* EQUAL  */
    NOT_EQUAL = 320,               /* NOT_EQUAL  */
    BITWISE_XOR = 321,             /* BITWISE_XOR  */
    BITWISE_OR = 322,              /* BITWISE_OR  */
    LOGICAL_AND = 323,             /* LOGICAL_AND  */
    LOGICAL_OR = 324,              /* LOGICAL_OR  */
    QUESTION_MARK = 325,           /* QUESTION_MARK  */
    COLON = 326,                   /* COLON  */
    SEMICOLON = 327,               /* SEMICOLON  */
    ELLIPSIS = 328,                /* ELLIPSIS  */
    ASSIGN_ = 329,                 /* ASSIGN_  */
    MULTIPLY_ASSIGN = 330,         /* MULTIPLY_ASSIGN  */
    DIVIDE_ASSIGN = 331,           /* DIVIDE_ASSIGN  */
    MODULO_ASSIGN = 332,           /* MODULO_ASSIGN  */
    ADD_ASSIGN = 333,              /* ADD_ASSIGN  */
    SUBTRACT_ASSIGN = 334,         /* SUBTRACT_ASSIGN  */
    LSHIFT_ASSIGN = 335,           /* LSHIFT_ASSIGN  */
    RSHIFT_ASSIGN = 336,           /* RSHIFT_ASSIGN  */
    AND_ASSIGN = 337,              /* AND_ASSIGN  */
    XOR_ASSIGN = 338,              /* XOR_ASSIGN  */
    OR_ASSIGN = 339,               /* OR_ASSIGN  */
    COMMA = 340,                   /* COMMA  */
    HASH = 341,                    /* HASH  */
    IDENTIFIER = 342,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 343,        /* INTEGER_CONSTANT  */
    FLOATING_CONSTANT = 344,       /* FLOATING_CONSTANT  */
    CHAR_CONSTANT = 345,           /* CHAR_CONSTANT  */
    STRING_LITERAL = 346           /* STRING_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "ass6_21CS30011_21CS30036.y"

    int intval;                     // For an integer value
    char charval;                   // For a char value
    float floatval;                 // For a float value
    void* ptr;                      // For a pointer
    string* str;                    // For a string
    symbolType* symType;            // For the type of a symbol
    symbol* symp;                   // For a symbol
    dataTypes types;                 // For the type of an expression
    opcode opc;                     // For an opcode
    expression* expr;               // For an expression
    declaration* dec;               // For a declaration
    vector<declaration*> *decList;  // For a list of declarations
    param* prm;                     // For a parameter
    vector<param*> *prmList;        // For a list of params

#line 172 "ass6_21CS30011_21CS30036.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASS6_21CS30011_21CS30036_TAB_H_INCLUDED  */
