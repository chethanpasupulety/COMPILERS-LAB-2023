/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ass5_21CS30011_21CS30036.y"

    #include <iostream>
    #include "ass5_21CS30011_21CS30036_translator.h"
    using namespace std;

    extern int yylex();  
    void yyerror(string s);    
    extern char* yytext;       
    extern string varType;      // storing type

#line 82 "ass5_21CS30011_21CS30036.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "ass5_21CS30011_21CS30036.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_BREAK = 4,                      /* BREAK  */
  YYSYMBOL_CASE = 5,                       /* CASE  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 9,                    /* DEFAULT  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_ENUM = 13,                      /* ENUM  */
  YYSYMBOL_EXTERN = 14,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 15,                     /* FLOAT  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_GOTO = 17,                      /* GOTO  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_INLINE = 19,                    /* INLINE  */
  YYSYMBOL_INT = 20,                       /* INT  */
  YYSYMBOL_LONG = 21,                      /* LONG  */
  YYSYMBOL_REGISTER = 22,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 23,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_SHORT = 25,                     /* SHORT  */
  YYSYMBOL_SIGNED = 26,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 27,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 28,                    /* STATIC  */
  YYSYMBOL_STRUCT = 29,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 30,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 31,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 32,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 33,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 34,                      /* VOID  */
  YYSYMBOL_VOLATILE = 35,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_BOOL = 37,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 38,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 39,                 /* IMAGINARY  */
  YYSYMBOL_SQUARE_BRACE_OPEN = 40,         /* SQUARE_BRACE_OPEN  */
  YYSYMBOL_SQUARE_BRACE_CLOSE = 41,        /* SQUARE_BRACE_CLOSE  */
  YYSYMBOL_PARENTHESIS_OPEN = 42,          /* PARENTHESIS_OPEN  */
  YYSYMBOL_PARENTHESIS_CLOSE = 43,         /* PARENTHESIS_CLOSE  */
  YYSYMBOL_CURLY_BRACE_OPEN = 44,          /* CURLY_BRACE_OPEN  */
  YYSYMBOL_CURLY_BRACE_CLOSE = 45,         /* CURLY_BRACE_CLOSE  */
  YYSYMBOL_DOT = 46,                       /* DOT  */
  YYSYMBOL_ARROW = 47,                     /* ARROW  */
  YYSYMBOL_INCREMENT = 48,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 49,                 /* DECREMENT  */
  YYSYMBOL_BITWISE_AND = 50,               /* BITWISE_AND  */
  YYSYMBOL_MULTIPLY = 51,                  /* MULTIPLY  */
  YYSYMBOL_ADD = 52,                       /* ADD  */
  YYSYMBOL_SUBTRACT = 53,                  /* SUBTRACT  */
  YYSYMBOL_BITWISE_NOR = 54,               /* BITWISE_NOR  */
  YYSYMBOL_NOT = 55,                       /* NOT  */
  YYSYMBOL_DIVIDE = 56,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 57,                    /* MODULO  */
  YYSYMBOL_LSHIFT = 58,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 59,                    /* RSHIFT  */
  YYSYMBOL_LESS_THAN = 60,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 61,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 62,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 63,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 64,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 65,                 /* NOT_EQUAL  */
  YYSYMBOL_BITWISE_XOR = 66,               /* BITWISE_XOR  */
  YYSYMBOL_BITWISE_OR = 67,                /* BITWISE_OR  */
  YYSYMBOL_LOGICAL_AND = 68,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 69,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION_MARK = 70,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 71,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 72,                 /* SEMICOLON  */
  YYSYMBOL_ELLIPSIS = 73,                  /* ELLIPSIS  */
  YYSYMBOL_ASSIGN = 74,                    /* ASSIGN  */
  YYSYMBOL_MULTIPLY_ASSIGN = 75,           /* MULTIPLY_ASSIGN  */
  YYSYMBOL_DIVIDE_ASSIGN = 76,             /* DIVIDE_ASSIGN  */
  YYSYMBOL_MODULO_ASSIGN = 77,             /* MODULO_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 78,                /* ADD_ASSIGN  */
  YYSYMBOL_SUBTRACT_ASSIGN = 79,           /* SUBTRACT_ASSIGN  */
  YYSYMBOL_LSHIFT_ASSIGN = 80,             /* LSHIFT_ASSIGN  */
  YYSYMBOL_RSHIFT_ASSIGN = 81,             /* RSHIFT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 82,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 83,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 84,                 /* OR_ASSIGN  */
  YYSYMBOL_COMMA = 85,                     /* COMMA  */
  YYSYMBOL_HASH = 86,                      /* HASH  */
  YYSYMBOL_IDENTIFIER = 87,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 88,          /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOATING_CONSTANT = 89,         /* FLOATING_CONSTANT  */
  YYSYMBOL_CHAR_CONSTANT = 90,             /* CHAR_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 91,            /* STRING_LITERAL  */
  YYSYMBOL_THEN = 92,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_primary_expression = 94,        /* primary_expression  */
  YYSYMBOL_constant = 95,                  /* constant  */
  YYSYMBOL_postfix_expression = 96,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 97, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 98,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 99,          /* unary_expression  */
  YYSYMBOL_unary_operator = 100,           /* unary_operator  */
  YYSYMBOL_cast_expression = 101,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 102, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 103,      /* additive_expression  */
  YYSYMBOL_shift_expression = 104,         /* shift_expression  */
  YYSYMBOL_relational_expression = 105,    /* relational_expression  */
  YYSYMBOL_equality_expression = 106,      /* equality_expression  */
  YYSYMBOL_and_expression = 107,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 108,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 109,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 110,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 111,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 112,   /* conditional_expression  */
  YYSYMBOL_M = 113,                        /* M  */
  YYSYMBOL_N = 114,                        /* N  */
  YYSYMBOL_assignment_expression = 115,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 116,      /* assignment_operator  */
  YYSYMBOL_expression = 117,               /* expression  */
  YYSYMBOL_constant_expression = 118,      /* constant_expression  */
  YYSYMBOL_declaration = 119,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 120,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 121,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 122,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 123,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 124,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 125, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 126, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 127,           /* enum_specifier  */
  YYSYMBOL_identifier_opt = 128,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 129,          /* enumerator_list  */
  YYSYMBOL_enumerator = 130,               /* enumerator  */
  YYSYMBOL_type_qualifier = 131,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 132,       /* function_specifier  */
  YYSYMBOL_declarator = 133,               /* declarator  */
  YYSYMBOL_direct_declarator = 134,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 135,  /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 136,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 137,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 138,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 139,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 140,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 141,          /* identifier_list  */
  YYSYMBOL_type_name = 142,                /* type_name  */
  YYSYMBOL_initializer = 143,              /* initializer  */
  YYSYMBOL_initializer_list = 144,         /* initializer_list  */
  YYSYMBOL_designation_opt = 145,          /* designation_opt  */
  YYSYMBOL_designation = 146,              /* designation  */
  YYSYMBOL_designator_list = 147,          /* designator_list  */
  YYSYMBOL_designator = 148,               /* designator  */
  YYSYMBOL_statement = 149,                /* statement  */
  YYSYMBOL_loop_statement = 150,           /* loop_statement  */
  YYSYMBOL_labeled_statement = 151,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 152,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 153,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 154,          /* block_item_list  */
  YYSYMBOL_block_item = 155,               /* block_item  */
  YYSYMBOL_expression_statement = 156,     /* expression_statement  */
  YYSYMBOL_selection_statement = 157,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 158,      /* iteration_statement  */
  YYSYMBOL_F = 159,                        /* F  */
  YYSYMBOL_W = 160,                        /* W  */
  YYSYMBOL_D = 161,                        /* D  */
  YYSYMBOL_X = 162,                        /* X  */
  YYSYMBOL_change_table = 163,             /* change_table  */
  YYSYMBOL_jump_statement = 164,           /* jump_statement  */
  YYSYMBOL_translation_unit = 165,         /* translation_unit  */
  YYSYMBOL_external_declaration = 166,     /* external_declaration  */
  YYSYMBOL_function_definition = 167,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 168,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 169          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1398

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  227
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  403

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   347


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    83,    83,    89,    94,   100,   107,   112,   117,   125,
     132,   151,   158,   160,   162,   169,   176,   178,   183,   187,
     194,   199,   207,   211,   216,   221,   254,   256,   261,   265,
     269,   273,   277,   281,   288,   292,   300,   314,   326,   338,
     353,   357,   369,   384,   388,   400,   415,   419,   433,   447,
     461,   478,   482,   498,   517,   521,   538,   542,   559,   563,
     580,   584,   600,   604,   617,   621,   644,   651,   661,   665,
     683,   685,   687,   689,   691,   693,   695,   697,   699,   701,
     703,   708,   712,   717,   722,   724,   729,   731,   733,   735,
     737,   739,   741,   743,   748,   750,   755,   759,   770,   772,
     774,   776,   781,   785,   789,   791,   795,   797,   801,   803,
     805,   807,   809,   811,   813,   818,   820,   825,   827,   832,
     834,   836,   841,   843,   848,   850,   855,   857,   862,   864,
     866,   871,   876,   886,   891,   896,   900,   902,   904,   924,
     942,   944,   946,   948,   950,   952,   964,   966,   981,   983,
     988,   992,   999,  1001,  1006,  1008,  1013,  1015,  1020,  1022,
    1027,  1029,  1034,  1039,  1043,  1045,  1050,  1052,  1057,  1059,
    1064,  1069,  1071,  1076,  1078,  1083,  1085,  1089,  1094,  1098,
    1102,  1110,  1112,  1117,  1121,  1125,  1132,  1134,  1136,  1141,
    1152,  1156,  1163,  1167,  1178,  1182,  1189,  1193,  1200,  1213,
    1227,  1232,  1247,  1262,  1274,  1286,  1302,  1318,  1334,  1352,
    1361,  1370,  1379,  1392,  1408,  1410,  1414,  1418,  1423,  1431,
    1433,  1438,  1440,  1445,  1454,  1456,  1461,  1463
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "BREAK",
  "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE",
  "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT", "LONG",
  "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE",
  "WHILE", "BOOL", "COMPLEX", "IMAGINARY", "SQUARE_BRACE_OPEN",
  "SQUARE_BRACE_CLOSE", "PARENTHESIS_OPEN", "PARENTHESIS_CLOSE",
  "CURLY_BRACE_OPEN", "CURLY_BRACE_CLOSE", "DOT", "ARROW", "INCREMENT",
  "DECREMENT", "BITWISE_AND", "MULTIPLY", "ADD", "SUBTRACT", "BITWISE_NOR",
  "NOT", "DIVIDE", "MODULO", "LSHIFT", "RSHIFT", "LESS_THAN",
  "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL",
  "NOT_EQUAL", "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND", "LOGICAL_OR",
  "QUESTION_MARK", "COLON", "SEMICOLON", "ELLIPSIS", "ASSIGN",
  "MULTIPLY_ASSIGN", "DIVIDE_ASSIGN", "MODULO_ASSIGN", "ADD_ASSIGN",
  "SUBTRACT_ASSIGN", "LSHIFT_ASSIGN", "RSHIFT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "COMMA", "HASH", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHAR_CONSTANT",
  "STRING_LITERAL", "THEN", "$accept", "primary_expression", "constant",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "M", "N", "assignment_expression",
  "assignment_operator", "expression", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "specifier_qualifier_list_opt",
  "enum_specifier", "identifier_opt", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "type_qualifier_list_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "loop_statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "F", "W", "D", "X", "change_table",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-296)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-226)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1325,  -296,  -296,  -296,  -296,   -73,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,    90,  1325,  1325,  -296,  1325,  1325,  1288,
    -296,  -296,   -27,    42,   -32,    18,  -296,  -296,   -33,  -296,
     968,   136,    -5,  -296,  -296,  -296,  -296,  -296,  -296,    56,
     112,  -296,    95,    18,  -296,   -32,  1012,  -296,    90,  -296,
    1325,   144,    83,   136,   108,    28,  -296,  -296,  -296,  -296,
    -296,   116,  1128,   778,    99,  1142,  1142,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
     217,   172,  1158,  -296,   150,   -10,   145,   233,   -15,   123,
     151,   135,   158,   160,  -296,  -296,  -296,   175,  -296,   879,
    -296,   197,   238,   829,  -296,   -28,  1247,  1158,  -296,   -12,
     778,  -296,  -296,    -9,  1359,  -296,  1359,   215,  1158,   187,
     102,  1012,  -296,    -2,  -296,   778,  -296,  -296,  1158,  1158,
     195,   196,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  1158,  -296,  -296,  1158,  1158,
    1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,
    1158,  1158,  1158,  1158,  -296,  -296,   216,   299,   244,   879,
    -296,  -296,  1158,  -296,   248,   249,  -296,   204,  -296,   -32,
     254,   214,  -296,  -296,  -296,  -296,  -296,   268,  -296,  1158,
    -296,  -296,  -296,  1026,   287,  -296,  -296,   222,  -296,  -296,
    -296,   288,   -17,   297,   245,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,   150,   150,   -10,   -10,   145,   145,   145,   145,
     233,   233,   -15,   123,   151,  1158,  1158,  -296,   270,  1158,
     272,   275,  -296,  -296,   273,   317,  1070,   319,  -296,  -296,
    -296,   291,    72,  -296,  -296,  -296,  -296,   318,   320,  -296,
    -296,  -296,  -296,  -296,  -296,   323,   325,  -296,  -296,  -296,
    -296,  -296,  1010,   324,  -296,    99,  -296,  -296,  -296,  1012,
     324,  -296,  -296,  1158,   135,   158,  1158,  -296,   296,  -296,
     464,   326,   330,   301,  1158,  -296,    78,  1158,   332,  -296,
     464,  -296,  -296,   299,  -296,  -296,  -296,  -296,   104,  -296,
    -296,   290,   464,  -296,  -296,   692,  -296,  -296,   290,  -296,
      -8,  -296,   299,  -296,  -296,  -296,   231,   305,  -296,   299,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,   334,   464,  -296,
     333,  -296,  -296,   335,   343,   388,  -296,  -296,  -296,  -296,
    1158,  -296,   339,  -296,  -296,   464,  1158,  -296,   346,  1158,
    1084,  1084,  -296,    21,   341,    68,  -296,  -296,   380,   349,
    1158,   340,  1158,  1158,  -296,  -296,   692,    69,  -296,   290,
     290,   464,   299,  -296,   347,   353,   354,  -296,   359,  -296,
    -296,  -296,  -296,   540,   616,   299,  -296,   299,  -296,   360,
     361,  -296,  -296
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,   103,   128,   108,   123,    98,   107,   131,   105,
     106,   101,   129,   104,   109,    99,   110,   102,   130,   111,
     112,   113,   222,     0,    87,    89,   114,    91,    93,     0,
     219,   221,   121,     0,     0,   149,    85,   134,     0,    94,
      96,   133,     0,    86,    88,    90,    92,     1,   220,     0,
       0,   152,   150,   148,    84,     0,     0,   226,     0,   213,
     224,     0,   213,   132,   126,     0,   124,   135,   151,   153,
      95,    96,     0,     0,   169,     0,     0,    28,    29,    30,
      31,    32,    33,     2,     6,     7,     8,     4,     9,     3,
      22,    34,     0,    36,    40,    43,    46,    51,    54,    56,
      58,    60,    62,    64,    68,   163,    97,     0,   227,     0,
     139,    29,     0,     0,   160,     0,     0,     0,   119,     0,
       0,    26,    81,     0,   118,   162,   118,     0,     0,     0,
       0,     0,   168,     0,   171,     0,    23,    24,     0,    19,
       0,     0,    14,    15,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,    34,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    66,     0,   191,     0,     0,
     144,   138,     0,   137,    29,     0,   146,     0,   147,   159,
       0,   154,   156,    83,   127,   120,   125,     0,     5,     0,
     117,   115,   116,     0,     0,   174,   164,   169,   166,   170,
     172,     0,     0,     0,    18,    20,    12,    13,    69,    37,
      38,    39,    41,    42,    44,    45,    47,    48,    49,    50,
      52,    53,    55,    57,    59,     0,     0,    66,     0,     0,
       0,     0,   211,   209,     0,     0,     0,     0,   210,   212,
     197,     2,     0,   194,   195,   175,   176,     0,    66,   192,
     177,   178,   179,   180,   141,     0,     0,   143,   136,   161,
     158,   145,     0,    27,    82,   169,    35,   173,   165,     0,
       0,    10,    11,     0,    61,    63,     0,   216,     0,   215,
       0,    66,     0,     0,     0,   218,     0,     0,     0,   213,
       0,   196,   223,     0,   140,   142,   155,   157,     0,   167,
      21,    67,     0,   188,    66,     0,   212,   214,    67,   217,
       0,   212,   191,   186,   193,    16,   169,     0,   187,   191,
      66,   181,   182,   183,   184,   185,   213,     0,     0,   213,
       0,    17,    66,     0,     0,     0,    66,   200,    66,   189,
       0,    66,     0,    66,    66,     0,     0,    65,     0,     0,
       0,     0,    67,     0,     0,     0,    66,    66,   198,    66,
       0,     0,     0,     0,    66,    66,     0,     0,   203,    67,
      67,     0,   191,   201,     0,     0,     0,   199,     0,   204,
      66,    66,   202,     0,     0,   191,   205,   191,   206,     0,
       0,   207,   208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -296,  -296,  -296,  -296,  -296,  -296,   -70,  -296,   -80,    81,
     106,   190,   103,   227,   252,   247,   193,   198,  -296,  -110,
    -130,  -295,     9,  -296,   -72,  -115,     0,     3,  -296,   374,
    -296,    85,    89,   306,  -296,  -296,  -296,   312,     1,  -296,
     -14,   391,  -296,   383,   -40,  -296,  -296,   173,  -296,    -4,
    -123,   169,  -196,  -296,  -296,   313,  -229,  -166,  -289,  -296,
    -214,  -296,   146,    24,  -259,  -256,  -296,  -296,  -296,  -270,
     -58,  -234,  -296,   418,  -296,  -296,  -296
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    88,    89,    90,   213,   214,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     235,   176,   122,   155,   252,   194,   253,    58,    38,    39,
      24,    25,   125,   201,    26,    33,    65,    66,    27,    28,
      71,    41,    52,    42,    53,   190,   191,   192,   115,   127,
     106,   130,   131,   132,   133,   134,   254,   330,   255,   256,
     257,   258,   259,   260,   261,   262,   292,   298,   291,   299,
     107,   263,    29,    30,    31,    59,    60
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   123,   121,    23,   116,   136,   137,   193,   208,    40,
      34,   279,   157,   204,    32,   186,   327,  -122,   193,    35,
      50,   113,   156,   337,   281,     3,   331,    43,    44,    22,
      45,    46,    23,   195,   198,   338,    51,    34,   128,    54,
      57,    12,   161,   162,   129,   236,   336,   156,   123,   169,
     170,   339,    55,    18,    69,    37,   333,   187,   156,   334,
     108,   313,    51,   123,   369,   105,   212,   368,   199,   179,
     112,   323,   209,   118,   126,    64,   199,   199,   219,   220,
     221,   335,    37,   328,   385,   386,    49,   331,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   331,   331,   199,   286,   340,   347,
      51,   371,   384,   119,    69,   343,   197,   333,   178,   189,
     334,   126,   185,   276,   288,   126,   362,   126,   303,   193,
     279,   211,    34,   156,   333,   333,   126,   334,   334,   128,
     105,    35,   335,    64,   301,   129,    35,   206,   215,   325,
     319,     3,   387,   199,   199,    67,   309,   199,   124,   335,
     335,   315,    36,   199,   218,   156,   156,    12,   388,   156,
     114,    72,   109,   171,   296,   270,    61,    37,    62,    18,
      69,   399,   117,   400,   329,   110,    73,   207,   265,   326,
      56,   266,    75,    76,    77,   111,    79,    80,    81,    82,
     344,   158,   173,   163,   164,   124,   159,   160,   274,   124,
     383,   124,   350,   200,   311,   200,   355,   172,   356,   177,
     124,   358,   318,   360,   361,   320,   174,   396,   398,   175,
     -67,    83,    84,    85,    86,    87,   372,   373,   180,   376,
     357,   322,   222,   223,   381,   382,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   138,   203,   139,
     393,   394,   128,   140,   141,   142,   143,   278,   129,   224,
     225,   128,   230,   231,   205,   189,   341,   129,   345,   181,
     156,   348,   216,   217,   363,   264,   237,   365,   105,   267,
     268,   269,   310,   165,   166,   167,   168,   271,   377,   272,
     379,   380,     1,   238,   239,     2,     3,   240,   241,   242,
       4,   273,     5,     6,     7,   243,   244,   245,     8,     9,
      10,    11,    12,   246,    13,    14,    72,    15,   277,   247,
     283,   280,    16,    17,    18,   248,    19,    20,    21,   332,
     282,    73,   287,   249,   289,   353,   290,    75,    76,    77,
      78,    79,    80,    81,    82,   226,   227,   228,   229,   294,
     293,   297,   300,   302,   304,  -190,   305,   312,   275,   354,
     314,   250,   316,   317,   321,   199,   342,   346,   349,   352,
     351,   359,   364,   370,   366,   367,   251,    84,    85,    86,
      87,     1,   374,   375,     2,     3,   390,   391,   232,     4,
     332,     5,     6,     7,   392,   401,   402,     8,     9,    10,
      11,    12,   378,    13,    14,    72,    15,   332,   332,   389,
     234,    16,    17,    18,   233,    19,    20,    21,   284,    70,
      73,   196,   202,    63,   285,    68,    75,    76,    77,    78,
      79,    80,    81,    82,   308,   307,   210,    48,     0,   324,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     250,     0,     0,     0,     0,     0,     0,     0,   238,   239,
       0,     0,   240,   241,   242,    83,    84,    85,    86,    87,
     243,   244,   245,     0,     0,     0,     0,     0,   246,     0,
       0,    72,     0,     0,   247,     0,     0,     0,     0,     0,
     248,     0,     0,     0,     0,     0,    73,     0,   249,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,     0,     0,     0,
       0,     0,     0,     0,   238,   239,     0,     0,   240,   241,
     242,   251,    84,    85,    86,    87,   243,   244,   245,     0,
       0,     0,     0,     0,   246,     0,     0,    72,     0,     0,
     247,     0,     0,     0,     0,     0,   248,     0,     0,     0,
       0,     0,    73,     0,   395,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,     0,     0,     0,     0,     0,     0,
     238,   239,     0,     0,   240,   241,   242,   251,    84,    85,
      86,    87,   243,   244,   245,     0,     0,     0,     0,     0,
     246,     0,     0,    72,     0,     0,   247,     0,     0,     0,
       0,     0,   248,     0,     0,     0,     0,     0,    73,     0,
     397,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   250,     0,
       0,     0,     0,     0,     0,     0,   238,   239,     0,     0,
     240,   241,   242,   251,    84,    85,    86,    87,   243,   244,
     245,     0,     0,     0,     0,     0,   246,     0,     0,    72,
       0,     0,   247,     0,     0,     0,     0,     0,   248,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   251,
      84,    85,    86,    87,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     7,     0,     0,     0,     0,     9,    10,
       0,    12,     0,    13,    14,    72,     0,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
      73,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,    72,   182,     0,     0,
       0,     0,     0,     0,    18,    83,    84,    85,    86,    87,
     183,    73,     0,     0,     0,     0,     0,    75,    76,    77,
     184,    79,    80,    81,    82,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,    18,     0,    83,    84,    85,    86,
      87,    73,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,    84,    85,    86,
      87,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       0,     0,  -225,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,    72,
       0,     0,    56,    16,    17,    18,     0,    19,    20,    21,
       0,     0,     0,    72,    73,     0,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    73,     0,
     275,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,   306,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,    83,
      84,    85,    86,    87,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    83,    84,    85,    86,    87,    75,    76,
      77,    78,    79,    80,    81,    82,    73,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
       0,     0,   295,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,   250,    83,    84,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,    72,
     120,    83,    84,    85,    86,    87,    75,    76,    77,    78,
      79,    80,    81,    82,   135,    72,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,     0,     0,
      73,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,     0,    83,    84,    85,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
      84,    85,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,    87,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     0,    47,     0,
     188,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,    12,     0,    13,    14,     0,     0,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    73,    72,     0,    62,    75,    76,   117,   131,    23,
      42,   207,    92,   128,    87,    43,   311,    44,   128,    51,
      34,    61,    92,   318,    41,     7,   315,    24,    25,    29,
      27,    28,    29,    45,    43,    43,    35,    42,    40,    72,
      40,    23,    52,    53,    46,   175,   316,   117,   120,    64,
      65,   321,    85,    35,    53,    87,   315,    85,   128,   315,
      60,   290,    61,   135,    43,    56,   138,   362,    85,   109,
      61,   300,    74,    45,    73,    87,    85,    85,   158,   159,
     160,   315,    87,   312,   379,   380,    44,   376,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   393,   394,    85,   237,   322,   338,
     109,    43,    43,    85,   113,   329,   120,   376,   109,   116,
     376,   120,   113,   203,   239,   124,   355,   126,   258,   239,
     326,   135,    42,   203,   393,   394,   135,   393,   394,    40,
     131,    51,   376,    87,    72,    46,    51,    45,   139,    45,
      72,     7,   381,    85,    85,    43,   279,    85,    73,   393,
     394,   291,    72,    85,   155,   235,   236,    23,   382,   239,
      87,    27,    28,    50,   246,   189,    40,    87,    42,    35,
     179,   395,    74,   397,   314,    41,    42,    85,   179,    85,
      74,   182,    48,    49,    50,    51,    52,    53,    54,    55,
     330,    51,    67,    58,    59,   120,    56,    57,   199,   124,
     376,   126,   342,   124,   286,   126,   346,    66,   348,    44,
     135,   351,   294,   353,   354,   297,    68,   393,   394,    69,
      70,    87,    88,    89,    90,    91,   366,   367,    41,   369,
     350,   299,   161,   162,   374,   375,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    40,    43,    42,
     390,   391,    40,    46,    47,    48,    49,    45,    46,   163,
     164,    40,   169,   170,    87,   272,    45,    46,   336,    41,
     350,   339,    87,    87,   356,    41,    70,   359,   279,    41,
      41,    87,   283,    60,    61,    62,    63,    43,   370,    85,
     372,   373,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    43,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    41,    30,
      85,    43,    33,    34,    35,    36,    37,    38,    39,   315,
      43,    42,    72,    44,    72,   345,    71,    48,    49,    50,
      51,    52,    53,    54,    55,   165,   166,   167,   168,    42,
      87,    42,    71,    45,    41,    45,    41,    71,    44,   345,
      44,    72,    42,    72,    42,    85,    71,    43,    45,    36,
      45,    42,    36,    42,   360,   361,    87,    88,    89,    90,
      91,     3,    12,    44,     6,     7,    43,    43,   171,    11,
     376,    13,    14,    15,    45,    45,    45,    19,    20,    21,
      22,    23,    72,    25,    26,    27,    28,   393,   394,    72,
     173,    33,    34,    35,   172,    37,    38,    39,   235,    55,
      42,   119,   126,    42,   236,    52,    48,    49,    50,    51,
      52,    53,    54,    55,   275,   272,   133,    29,    -1,   303,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
      -1,    -1,     8,     9,    10,    87,    88,    89,    90,    91,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,    -1,    -1,     8,     9,
      10,    87,    88,    89,    90,    91,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,    -1,    -1,     8,     9,    10,    87,    88,    89,
      90,    91,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,
       8,     9,    10,    87,    88,    89,    90,    91,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    87,    88,    89,    90,    91,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    87,    88,    89,    90,
      91,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    44,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    27,
      -1,    -1,    74,    33,    34,    35,    -1,    37,    38,    39,
      -1,    -1,    -1,    27,    42,    -1,    44,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    42,    87,    88,    89,    90,    91,    48,    49,
      50,    51,    52,    53,    54,    55,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    72,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      42,    87,    88,    89,    90,    91,    48,    49,    50,    51,
      52,    53,    54,    55,    42,    27,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    -1,     0,    -1,
      43,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   119,   120,   123,   124,   127,   131,   132,   165,
     166,   167,    87,   128,    42,    51,    72,    87,   121,   122,
     133,   134,   136,   120,   120,   120,   120,     0,   166,    44,
     133,   131,   135,   137,    72,    85,    74,   119,   120,   168,
     169,    40,    42,   134,    87,   129,   130,    43,   136,   131,
     122,   133,    27,    42,    44,    48,    49,    50,    51,    52,
      53,    54,    55,    87,    88,    89,    90,    91,    94,    95,
      96,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   115,   143,   163,   119,    28,
      41,    51,   115,   137,    87,   141,   163,    74,    45,    85,
      42,    99,   115,   117,   124,   125,   131,   142,    40,    46,
     144,   145,   146,   147,   148,    42,    99,    99,    40,    42,
      46,    47,    48,    49,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,   116,    99,   101,    51,    56,
      57,    52,    53,    58,    59,    60,    61,    62,    63,    64,
      65,    50,    66,    67,    68,    69,   114,    44,   115,   137,
      41,    41,    28,    41,    51,   115,    43,    85,    43,   120,
     138,   139,   140,   112,   118,    45,   130,   142,    43,    85,
     125,   126,   126,    43,   118,    87,    45,    85,   143,    74,
     148,   142,   117,    97,    98,   115,    87,    87,   115,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   107,   108,   113,   113,    70,     4,     5,
       8,     9,    10,    16,    17,    18,    24,    30,    36,    44,
      72,    87,   117,   119,   149,   151,   152,   153,   154,   155,
     156,   157,   158,   164,    41,   115,   115,    41,    41,    87,
     133,    43,    85,    43,   115,    44,   101,    41,    45,   145,
      43,    41,    43,    85,   109,   110,   113,    72,   118,    72,
      71,   161,   159,    87,    42,    72,   117,    42,   160,   162,
      71,    72,    45,   113,    41,    41,    73,   140,   144,   143,
     115,   117,    71,   149,    44,   113,    42,    72,   117,    72,
     117,    42,   163,   149,   155,    45,    85,   114,   149,   113,
     150,   151,   156,   157,   158,   164,   162,   114,    43,   162,
     153,    45,    71,   153,   113,   163,    43,   149,   163,    45,
     113,    45,    36,   119,   156,   113,   113,   112,   113,    42,
     113,   113,   149,   117,    36,   117,   156,   156,   114,    43,
      42,    43,   113,   113,    12,    44,   113,   117,    72,   117,
     117,   113,   113,   150,    43,   114,   114,   149,   153,    72,
      43,    43,    45,   113,   113,    44,   150,    44,   150,   153,
     153,    45,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   105,   105,   105,   105,
     105,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   119,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   132,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   143,   143,   143,   144,   144,   145,   145,
     146,   147,   147,   148,   148,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   150,   150,   151,   151,   151,   152,
     153,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     157,   158,   158,   158,   158,   158,   158,   158,   158,   159,
     160,   161,   162,   163,   164,   164,   164,   164,   164,   165,
     165,   166,   166,   167,   168,   168,   169,   169
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     0,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     4,     1,     4,     1,     9,     0,     0,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     0,     5,
       6,     2,     1,     0,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     3,
       6,     5,     6,     5,     4,     5,     4,     4,     1,     0,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     1,
       1,     3,     1,     1,     3,     4,     2,     4,     1,     0,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     5,
       1,     0,     1,     3,     1,     1,     2,     1,     8,    11,
       5,    10,    12,    10,    12,    14,    14,    16,    16,     0,
       0,     0,     0,     0,     3,     2,     2,     3,     2,     1,
       2,     1,     1,     7,     1,     0,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: IDENTIFIER  */
#line 84 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();  
            (yyval.expr)->loc = (yyvsp[0].symp);           // storing pointer to entry in the symbol table
            (yyval.expr)->type = "non_bool";
        }
#line 1754 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 3: /* primary_expression: constant  */
#line 90 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();  
            (yyval.expr)->loc = (yyvsp[0].symp);           // storing pointer as entry in the symbol table
        }
#line 1763 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 95 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();  
            (yyval.expr)->loc = symbolTable::gentemp(new symbolType("ptr"), (yyvsp[0].charval));  // creating a new temporary, and storing the value in that temporary
            (yyval.expr)->loc->type->arrType = new symbolType("char");
        }
#line 1773 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 5: /* primary_expression: PARENTHESIS_OPEN expression PARENTHESIS_CLOSE  */
#line 101 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);   
        }
#line 1781 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 6: /* constant: INTEGER_CONSTANT  */
#line 108 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.symp) = symbolTable::gentemp(new symbolType("int"), to_string((yyvsp[0].intval)));   // creating a new temporary, and storing the value in that temporary
            emit("=", (yyval.symp)->name, (yyvsp[0].intval));
        }
#line 1790 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 7: /* constant: FLOATING_CONSTANT  */
#line 113 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.symp) = symbolTable::gentemp(new symbolType("float"), string((yyvsp[0].charval)));     // creating a new temporary, and storing the value in that temporary
            emit("=", (yyval.symp)->name, string((yyvsp[0].charval)));
        }
#line 1799 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 8: /* constant: CHAR_CONSTANT  */
#line 118 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.symp) = symbolTable::gentemp(new symbolType("float"), string((yyvsp[0].charval)));     // creating a new temporary, and storing the value in that temporary
            emit("=", (yyval.symp)->name, string((yyvsp[0].charval)));
        }
#line 1808 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 126 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.arr) = new Array();           // creating a new Array
            (yyval.arr)->Array = (yyvsp[0].expr)->loc;        // storing the location of the primary expression
            (yyval.arr)->type = (yyvsp[0].expr)->loc->type;   // Update the type
            (yyval.arr)->loc = (yyval.arr)->Array;
        }
#line 1819 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression SQUARE_BRACE_OPEN expression SQUARE_BRACE_CLOSE  */
#line 133 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.arr) = new Array();               // creating a new Array
            (yyval.arr)->type = (yyvsp[-3].arr)->type->arrType;   // Set the type equal to the element type
            (yyval.arr)->Array = (yyvsp[-3].arr)->Array;          // Copy the base
            (yyval.arr)->loc = symbolTable::gentemp(new symbolType("int"));  // storing address of new temporary
            (yyval.arr)->atype = "arr";              // Set atype to "arr"

            if((yyvsp[-3].arr)->atype == "arr") {        // If we have an "arr" type then, multiply the size of the sub-type of Array with the expression value and add
                symbol* sym = symbolTable::gentemp(new symbolType("int"));
                int sz = typeSz((yyval.arr)->type);
                emit("*", sym->name, (yyvsp[-1].expr)->loc->name, to_string(sz));
                emit("+", (yyval.arr)->loc->name, (yyvsp[-3].arr)->loc->name, sym->name);
            }
            else {                          // Compute the size
                int sz = typeSz((yyval.arr)->type);
                emit("*", (yyval.arr)->loc->name, (yyvsp[-1].expr)->loc->name, to_string(sz));
            }
        }
#line 1842 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression PARENTHESIS_OPEN argument_expression_list_opt PARENTHESIS_CLOSE  */
#line 152 "ass5_21CS30011_21CS30036.y"
        {   
            // Corresponds to calling a function with the function name and the appropriate number of params
            (yyval.arr) = new Array();
            (yyval.arr)->Array = symbolTable::gentemp((yyvsp[-3].arr)->type);
            emit("call", (yyval.arr)->Array->name, (yyvsp[-3].arr)->Array->name, to_string((yyvsp[-1].numParams)));
        }
#line 1853 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 159 "ass5_21CS30011_21CS30036.y"
        {  }
#line 1859 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 161 "ass5_21CS30011_21CS30036.y"
        {  }
#line 1865 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression INCREMENT  */
#line 163 "ass5_21CS30011_21CS30036.y"
        {   
            (yyval.arr) = new Array();
            (yyval.arr)->Array = symbolTable::gentemp((yyvsp[-1].arr)->Array->type);    
            emit("=", (yyval.arr)->Array->name, (yyvsp[-1].arr)->Array->name);       
            emit("+", (yyvsp[-1].arr)->Array->name, (yyvsp[-1].arr)->Array->name, "1");
        }
#line 1876 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression DECREMENT  */
#line 170 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.arr) = new Array();
            (yyval.arr)->Array = symbolTable::gentemp((yyvsp[-1].arr)->Array->type);    
            emit("=", (yyval.arr)->Array->name, (yyvsp[-1].arr)->Array->name);          
            emit("-", (yyvsp[-1].arr)->Array->name, (yyvsp[-1].arr)->Array->name, "1");  
        }
#line 1887 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 16: /* postfix_expression: PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE  */
#line 177 "ass5_21CS30011_21CS30036.y"
        {  }
#line 1893 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 17: /* postfix_expression: PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE  */
#line 179 "ass5_21CS30011_21CS30036.y"
        {  }
#line 1899 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 18: /* argument_expression_list_opt: argument_expression_list  */
#line 184 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.numParams) = (yyvsp[0].numParams); 
        }
#line 1907 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 19: /* argument_expression_list_opt: %empty  */
#line 188 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.numParams) = 0;  
        }
#line 1915 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 20: /* argument_expression_list: assignment_expression  */
#line 195 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.numParams) = 1;                         // consider one argument
            emit("param", (yyvsp[0].expr)->loc->name);   // emit parameter
        }
#line 1924 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 21: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 200 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.numParams) = (yyvsp[-2].numParams) + 1;                    // consider one more argument, so add 1
            emit("param", (yyvsp[0].expr)->loc->name);   // emit parameter
        }
#line 1933 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 208 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.arr) = (yyvsp[0].arr);    // Assign $1 to $$
        }
#line 1941 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 23: /* unary_expression: INCREMENT unary_expression  */
#line 212 "ass5_21CS30011_21CS30036.y"
        {
            emit("+", (yyvsp[0].arr)->Array->name, (yyvsp[0].arr)->Array->name, "1");   // Add 1
            (yyval.arr) = (yyvsp[0].arr);    // Assign
        }
#line 1950 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 24: /* unary_expression: DECREMENT unary_expression  */
#line 217 "ass5_21CS30011_21CS30036.y"
        {
            emit("-", (yyvsp[0].arr)->Array->name, (yyvsp[0].arr)->Array->name, "1");   // Subtract 1
            (yyval.arr) = (yyvsp[0].arr);    // Assign
        }
#line 1959 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 25: /* unary_expression: unary_operator cast_expression  */
#line 222 "ass5_21CS30011_21CS30036.y"
        {
            // Case of unary operator
            (yyval.arr) = new Array();
            switch((yyvsp[-1].unaryOp)) {
                case '&':   // Address
                    (yyval.arr)->Array = symbolTable::gentemp(new symbolType("ptr"));    // Generate a pointer temporary
                    (yyval.arr)->Array->type->arrType = (yyvsp[0].arr)->Array->type;                 // Assign corresponding type
                    emit("= &", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);              // Emit the quad
                    break;
                case '*':   // De-referencing
                    (yyval.arr)->atype = "ptr";
                    (yyval.arr)->loc = symbolTable::gentemp((yyvsp[0].arr)->Array->type->arrType);   // Generate a temporary of the appropriate type
                    (yyval.arr)->Array = (yyvsp[0].arr)->Array;                                      // Assign
                    emit("= *", (yyval.arr)->loc->name, (yyvsp[0].arr)->Array->name);                // Emit the quad
                    break;
                case '+':   // Unary plus
                    (yyval.arr) = (yyvsp[0].arr);    // Simple assignment
                    break;
                case '-':   // Unary minus
                    (yyval.arr)->Array = symbolTable::gentemp(new symbolType((yyvsp[0].arr)->Array->type->type));    // Generate temporary of the same base type
                    emit("= -", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);                              // Emit the quad
                    break;
                case '~':   // Bitwise not
                    (yyval.arr)->Array = symbolTable::gentemp(new symbolType((yyvsp[0].arr)->Array->type->type));    // Generate temporary of the same base type
                    emit("= ~", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);                              // Emit the quad
                    break;
                case '!':   // Logical not 
                    (yyval.arr)->Array = symbolTable::gentemp(new symbolType((yyvsp[0].arr)->Array->type->type));    // Generate temporary of the same base type
                    emit("= !", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);                              // Emit the quad
                    break;
            }
        }
#line 1996 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF unary_expression  */
#line 255 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2002 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE  */
#line 257 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2008 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 28: /* unary_operator: BITWISE_AND  */
#line 262 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.unaryOp) = '&';
        }
#line 2016 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 29: /* unary_operator: MULTIPLY  */
#line 266 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.unaryOp) = '*';
        }
#line 2024 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 30: /* unary_operator: ADD  */
#line 270 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.unaryOp) = '+';
        }
#line 2032 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 31: /* unary_operator: SUBTRACT  */
#line 274 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.unaryOp) = '-';
        }
#line 2040 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 32: /* unary_operator: BITWISE_NOR  */
#line 278 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.unaryOp) = '~';
        }
#line 2048 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 33: /* unary_operator: NOT  */
#line 282 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.unaryOp) = '!';
        }
#line 2056 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 34: /* cast_expression: unary_expression  */
#line 289 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.arr) = (yyvsp[0].arr);    // Simple assignment
        }
#line 2064 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 35: /* cast_expression: PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE cast_expression  */
#line 293 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.arr) = new Array();
            (yyval.arr)->Array = convertType((yyvsp[0].arr)->Array, varType);    // Generate a new symbol of the appropriate type
        }
#line 2073 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 36: /* multiplicative_expression: cast_expression  */
#line 301 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();          // Generate new expression
            if((yyvsp[0].arr)->atype == "arr") {        // atype "arr"
                (yyval.expr)->loc = symbolTable::gentemp((yyvsp[0].arr)->loc->type);  // Generate new temporary
                emit("=[]", (yyval.expr)->loc->name, (yyvsp[0].arr)->Array->name, (yyvsp[0].arr)->loc->name);     // Emit the quad
            }
            else if((yyvsp[0].arr)->atype == "ptr") {   // atype "ptr"
                (yyval.expr)->loc = (yyvsp[0].arr)->loc;          // Assign the symbol table entry
            }
            else {
                (yyval.expr)->loc = (yyvsp[0].arr)->Array;
            }
        }
#line 2091 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression MULTIPLY cast_expression  */
#line 315 "ass5_21CS30011_21CS30036.y"
        {   
            // Indicates multiplication
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].arr)->Array)) {     // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("*", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].arr)->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2107 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression DIVIDE cast_expression  */
#line 327 "ass5_21CS30011_21CS30036.y"
        {
            // Indicates division
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].arr)->Array)) {     // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("/", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].arr)->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2123 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 339 "ass5_21CS30011_21CS30036.y"
        {
            // Indicates modulo
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].arr)->Array)) {     // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("%", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].arr)->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2139 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 354 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2147 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 41: /* additive_expression: additive_expression ADD multiplicative_expression  */
#line 358 "ass5_21CS30011_21CS30036.y"
        {   
            // Indicates addition
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {       // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("+", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);                 // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2163 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 42: /* additive_expression: additive_expression SUBTRACT multiplicative_expression  */
#line 370 "ass5_21CS30011_21CS30036.y"
        {
            // Indicates subtraction
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {       // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("-", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);                 // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2179 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 43: /* shift_expression: additive_expression  */
#line 385 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2187 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 44: /* shift_expression: shift_expression LSHIFT additive_expression  */
#line 389 "ass5_21CS30011_21CS30036.y"
        {
            // Indicates left shift
            if((yyvsp[0].expr)->loc->type->type == "int") {      // Check for type compatibility (int)
                (yyval.expr) = new expression();                                      // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType("int"));      // Generate new temporary
                emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);    // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2203 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 45: /* shift_expression: shift_expression RSHIFT additive_expression  */
#line 401 "ass5_21CS30011_21CS30036.y"
        {
            // Indicates right shift
            if((yyvsp[0].expr)->loc->type->type == "int") {      // Check for type compatibility (int)
                (yyval.expr) = new expression();                                      // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType("int"));      // Generate new temporary
                emit(">>", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);    // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2219 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 46: /* relational_expression: shift_expression  */
#line 416 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2227 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 420 "ass5_21CS30011_21CS30036.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextInstr());           // creating truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextInstr() + 1);      // creating falselist for boolean expression
                emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);    // Emit "if x < y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2245 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 434 "ass5_21CS30011_21CS30036.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextInstr());           // creating truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextInstr() + 1);      // creating falselist for boolean expression
                emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);    // Emit "if x > y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2263 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 49: /* relational_expression: relational_expression LESS_THAN_EQUAL shift_expression  */
#line 448 "ass5_21CS30011_21CS30036.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextInstr());           // creating truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextInstr() + 1);      // creating falselist for boolean expression
                emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x <= y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2281 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 50: /* relational_expression: relational_expression GREATER_THAN_EQUAL shift_expression  */
#line 462 "ass5_21CS30011_21CS30036.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextInstr());           // creating truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextInstr() + 1);      // creating falselist for boolean expression
                emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x >= y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2299 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 51: /* equality_expression: relational_expression  */
#line 479 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2307 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 52: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 483 "ass5_21CS30011_21CS30036.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                           // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextInstr());           // creating truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextInstr() + 1);      // creating falselist for boolean expression
                emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x == y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2327 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 53: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 499 "ass5_21CS30011_21CS30036.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                           // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextInstr());           // creating truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextInstr() + 1);      // creating falselist for boolean expression
                emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x != y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2347 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 54: /* and_expression: equality_expression  */
#line 518 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2355 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 55: /* and_expression: and_expression BITWISE_AND equality_expression  */
#line 522 "ass5_21CS30011_21CS30036.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                               // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                                       // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();
                (yyval.expr)->type = "not_bool";                                      // The new result is not bool
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType("int"));      // creating a new temporary
                emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2373 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 56: /* exclusive_or_expression: and_expression  */
#line 539 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2381 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 57: /* exclusive_or_expression: exclusive_or_expression BITWISE_XOR and_expression  */
#line 543 "ass5_21CS30011_21CS30036.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                               // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                                       // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();
                (yyval.expr)->type = "not_bool";                                      // The new result is not bool
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType("int"));      // creating a new temporary
                emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2399 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 58: /* inclusive_or_expression: exclusive_or_expression  */
#line 560 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2407 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 59: /* inclusive_or_expression: inclusive_or_expression BITWISE_OR exclusive_or_expression  */
#line 564 "ass5_21CS30011_21CS30036.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                               // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                                       // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();
                (yyval.expr)->type = "not_bool";                                      // The new result is not bool
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType("int"));      // creating a new temporary
                emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2425 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 60: /* logical_and_expression: inclusive_or_expression  */
#line 581 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2433 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 61: /* logical_and_expression: logical_and_expression LOGICAL_AND M inclusive_or_expression  */
#line 585 "ass5_21CS30011_21CS30036.y"
        {
            /*
                Here, we have augmented the grammar with the non-terminal M to facilitate backpatching
            */
            convertIntToBool((yyvsp[-3].expr));                                   // Convert the expressions from int to bool
            convertIntToBool((yyvsp[0].expr));
            (yyval.expr) = new expression();                                  // creating a new bool expression for the result
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr));                            // Backpatching
            (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                            // Generate truelist from truelist of $4
            (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);    // Generate falselist by merging the falselists of $1 and $4
        }
#line 2450 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 62: /* logical_or_expression: logical_and_expression  */
#line 601 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2458 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 63: /* logical_or_expression: logical_or_expression LOGICAL_OR M logical_and_expression  */
#line 605 "ass5_21CS30011_21CS30036.y"
        {
            convertIntToBool((yyvsp[-3].expr));                                   // Convert the expressions from int to bool
            convertIntToBool((yyvsp[0].expr));
            (yyval.expr) = new expression();                                  // creating a new bool expression for the result
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr));                           // Backpatching
            (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;                          // Generate falselist from falselist of $4
            (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);       // Generate truelist by merging the truelists of $1 and $4
        }
#line 2472 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 64: /* conditional_expression: logical_or_expression  */
#line 618 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2480 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 65: /* conditional_expression: logical_or_expression N QUESTION_MARK M expression N COLON M conditional_expression  */
#line 622 "ass5_21CS30011_21CS30036.y"
        {   
            /*
                Note the augmented grammar with the non-terminals M and N
            */
            (yyval.expr)->loc = symbolTable::gentemp((yyvsp[-4].expr)->loc->type);      // Generate temporary for the expression
            (yyval.expr)->loc->update((yyvsp[-4].expr)->loc->type);
            emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);            // Assign the conditional expression
            list<int> l1 = makelist(nextInstr());
            emit("goto", "");                                   // Prevent fall-through
            backpatch((yyvsp[-3].stmt)->nextlist, nextInstr());               // Make list with next instruction
            emit("=", (yyval.expr)->loc->name, (yyvsp[-4].expr)->loc->name);
            list<int> l2 = makelist(nextInstr());               // Make list with next instruction
            l1 = merge(l1, l2);                                 // Merge the two lists
            emit("goto", "");                                   // Prevent fall-through
            backpatch((yyvsp[-7].stmt)->nextlist, nextInstr());               // Backpatching
            convertIntToBool((yyvsp[-8].expr));                               // Convert expression to bool
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));                        // When $1 is true, control goes to $4 (expression)
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));                       // When $1 is false, control goes to $8 (conditional_expression)
            backpatch(l1, nextInstr());
        }
#line 2505 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 66: /* M: %empty  */
#line 645 "ass5_21CS30011_21CS30036.y"
        {   
            // storings the next instruction value, and helps in backpatching
            (yyval.instr) = nextInstr();
        }
#line 2514 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 67: /* N: %empty  */
#line 652 "ass5_21CS30011_21CS30036.y"
        {
            // Helps in control flow
            (yyval.stmt) = new statement();
            (yyval.stmt)->nextlist = makelist(nextInstr());
            emit("goto", "");
        }
#line 2525 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 68: /* assignment_expression: conditional_expression  */
#line 662 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2533 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 69: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 666 "ass5_21CS30011_21CS30036.y"
        {
            if((yyvsp[-2].arr)->atype == "arr") {        // If atype is "arr", convert and emit
                (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].arr)->type->type);
                emit("[]=", (yyvsp[-2].arr)->Array->name, (yyvsp[-2].arr)->loc->name, (yyvsp[0].expr)->loc->name);
            }
            else if((yyvsp[-2].arr)->atype == "ptr") {   // If atype is "ptr", emit 
                emit("*=", (yyvsp[-2].arr)->Array->name, (yyvsp[0].expr)->loc->name);
            }
            else {
                (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].arr)->Array->type->type);
                emit("=", (yyvsp[-2].arr)->Array->name, (yyvsp[0].expr)->loc->name);
            }
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2552 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 70: /* assignment_operator: ASSIGN  */
#line 684 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2558 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 71: /* assignment_operator: MULTIPLY_ASSIGN  */
#line 686 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2564 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 72: /* assignment_operator: DIVIDE_ASSIGN  */
#line 688 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2570 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 73: /* assignment_operator: MODULO_ASSIGN  */
#line 690 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2576 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 74: /* assignment_operator: ADD_ASSIGN  */
#line 692 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2582 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 75: /* assignment_operator: SUBTRACT_ASSIGN  */
#line 694 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2588 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 76: /* assignment_operator: LSHIFT_ASSIGN  */
#line 696 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2594 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 77: /* assignment_operator: RSHIFT_ASSIGN  */
#line 698 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2600 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 78: /* assignment_operator: AND_ASSIGN  */
#line 700 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2606 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 79: /* assignment_operator: XOR_ASSIGN  */
#line 702 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2612 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 80: /* assignment_operator: OR_ASSIGN  */
#line 704 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2618 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 81: /* expression: assignment_expression  */
#line 709 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2626 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 82: /* expression: expression COMMA assignment_expression  */
#line 713 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2632 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 83: /* constant_expression: conditional_expression  */
#line 718 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2638 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 84: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 723 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2644 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 85: /* declaration: declaration_specifiers SEMICOLON  */
#line 725 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2650 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 86: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 730 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2656 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 87: /* declaration_specifiers: storage_class_specifier  */
#line 732 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2662 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 88: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 734 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2668 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 89: /* declaration_specifiers: type_specifier  */
#line 736 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2674 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 90: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 738 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2680 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 91: /* declaration_specifiers: type_qualifier  */
#line 740 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2686 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 92: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 742 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2692 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 93: /* declaration_specifiers: function_specifier  */
#line 744 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2698 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator  */
#line 749 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2704 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 95: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 751 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2710 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 96: /* init_declarator: declarator  */
#line 756 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.symp) = (yyvsp[0].symp);
        }
#line 2718 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 97: /* init_declarator: declarator ASSIGN initializer  */
#line 760 "ass5_21CS30011_21CS30036.y"
        {   
            // Find out the initial value and emit it
            if((yyvsp[0].symp)->value != "") {
                (yyvsp[-2].symp)->value = (yyvsp[0].symp)->value;
            }
            emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
        }
#line 2730 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 98: /* storage_class_specifier: EXTERN  */
#line 771 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2736 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 99: /* storage_class_specifier: STATIC  */
#line 773 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2742 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 100: /* storage_class_specifier: AUTO  */
#line 775 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2748 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 101: /* storage_class_specifier: REGISTER  */
#line 777 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2754 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 102: /* type_specifier: VOID  */
#line 782 "ass5_21CS30011_21CS30036.y"
        {
            varType = "void";   // storing the latest encountered type in varType
        }
#line 2762 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 103: /* type_specifier: CHAR  */
#line 786 "ass5_21CS30011_21CS30036.y"
        {
            varType = "char";   // storing the latest encountered type in varType
        }
#line 2770 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 104: /* type_specifier: SHORT  */
#line 790 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2776 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 105: /* type_specifier: INT  */
#line 792 "ass5_21CS30011_21CS30036.y"
        {
            varType = "int";    // storing the latest encountered type in varType
        }
#line 2784 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 106: /* type_specifier: LONG  */
#line 796 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2790 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 107: /* type_specifier: FLOAT  */
#line 798 "ass5_21CS30011_21CS30036.y"
        {
            varType = "float";  // storing the latest encountered type in varType
        }
#line 2798 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 108: /* type_specifier: DOUBLE  */
#line 802 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2804 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 109: /* type_specifier: SIGNED  */
#line 804 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2810 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 110: /* type_specifier: UNSIGNED  */
#line 806 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2816 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 111: /* type_specifier: BOOL  */
#line 808 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2822 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 112: /* type_specifier: COMPLEX  */
#line 810 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2828 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 113: /* type_specifier: IMAGINARY  */
#line 812 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2834 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 114: /* type_specifier: enum_specifier  */
#line 814 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2840 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 819 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2846 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 116: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 821 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2852 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 117: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 826 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2858 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 118: /* specifier_qualifier_list_opt: %empty  */
#line 828 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2864 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 119: /* enum_specifier: ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list CURLY_BRACE_CLOSE  */
#line 833 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2870 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 120: /* enum_specifier: ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list COMMA CURLY_BRACE_CLOSE  */
#line 835 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2876 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 121: /* enum_specifier: ENUM IDENTIFIER  */
#line 837 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2882 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 122: /* identifier_opt: IDENTIFIER  */
#line 842 "ass5_21CS30011_21CS30036.y"
        {}
#line 2888 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 123: /* identifier_opt: %empty  */
#line 844 "ass5_21CS30011_21CS30036.y"
        {}
#line 2894 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 124: /* enumerator_list: enumerator  */
#line 849 "ass5_21CS30011_21CS30036.y"
        {}
#line 2900 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 125: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 851 "ass5_21CS30011_21CS30036.y"
        {}
#line 2906 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 126: /* enumerator: IDENTIFIER  */
#line 856 "ass5_21CS30011_21CS30036.y"
        {}
#line 2912 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 127: /* enumerator: IDENTIFIER ASSIGN constant_expression  */
#line 858 "ass5_21CS30011_21CS30036.y"
        {}
#line 2918 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 128: /* type_qualifier: CONST  */
#line 863 "ass5_21CS30011_21CS30036.y"
        {}
#line 2924 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 129: /* type_qualifier: RESTRICT  */
#line 865 "ass5_21CS30011_21CS30036.y"
        {}
#line 2930 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 130: /* type_qualifier: VOLATILE  */
#line 867 "ass5_21CS30011_21CS30036.y"
        {}
#line 2936 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 131: /* function_specifier: INLINE  */
#line 872 "ass5_21CS30011_21CS30036.y"
        {}
#line 2942 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 132: /* declarator: pointer direct_declarator  */
#line 877 "ass5_21CS30011_21CS30036.y"
        {
            symbolType* t = (yyvsp[-1].symType);
            // In case of multi-dimesnional arrays, keep on going down in a hierarchial fashion to get the base type
            while(t->arrType != NULL) {
                t = t->arrType;
            }
            t->arrType = (yyvsp[0].symp)->type;  // storing the base type
            (yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].symType));    // Update
        }
#line 2956 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 133: /* declarator: direct_declarator  */
#line 887 "ass5_21CS30011_21CS30036.y"
        {}
#line 2962 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 134: /* direct_declarator: IDENTIFIER  */
#line 892 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.symp) = (yyvsp[0].symp)->update(new symbolType(varType));   // For an identifier, update the type to varType
            currSymb = (yyval.symp);                         // Update pointer to current symbol
        }
#line 2971 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 135: /* direct_declarator: PARENTHESIS_OPEN declarator PARENTHESIS_CLOSE  */
#line 897 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.symp) = (yyvsp[-1].symp);    // Simple assignment
        }
#line 2979 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN type_qualifier_list assignment_expression SQUARE_BRACE_CLOSE  */
#line 901 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2985 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN type_qualifier_list SQUARE_BRACE_CLOSE  */
#line 903 "ass5_21CS30011_21CS30036.y"
        {  }
#line 2991 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN assignment_expression SQUARE_BRACE_CLOSE  */
#line 905 "ass5_21CS30011_21CS30036.y"
        {
            symbolType* t = (yyvsp[-3].symp)->type;
            symbolType* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrType;
            }
            if(prev == NULL) {
                int temp = atoi((yyvsp[-1].expr)->loc->value.c_str());                // Get initial value
                symbolType* tp = new symbolType("arr", (yyvsp[-3].symp)->type, temp); // creating that type
                (yyval.symp) = (yyvsp[-3].symp)->update(tp);                                    // Update the symbol table for that symbol
            }
            else {
                int temp = atoi((yyvsp[-1].expr)->loc->value.c_str());                // Get initial value
                prev->arrType = new symbolType("arr", t, temp);         // creating that type
                (yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);                              // Update the symbol table for that symbol
            }
        }
#line 3015 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN SQUARE_BRACE_CLOSE  */
#line 925 "ass5_21CS30011_21CS30036.y"
        {
            symbolType* t = (yyvsp[-2].symp)->type;
            symbolType* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrType;
            }
            if(prev == NULL) {
                symbolType* tp = new symbolType("arr", (yyvsp[-2].symp)->type, 0);
                (yyval.symp) = (yyvsp[-2].symp)->update(tp);
            }
            else {
                prev->arrType = new symbolType("arr", t, 0);
                (yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);
            }
        }
#line 3037 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 140: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN STATIC type_qualifier_list assignment_expression SQUARE_BRACE_CLOSE  */
#line 943 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3043 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 141: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN STATIC assignment_expression SQUARE_BRACE_CLOSE  */
#line 945 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3049 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 142: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACE_CLOSE  */
#line 947 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3055 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 143: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN type_qualifier_list MULTIPLY SQUARE_BRACE_CLOSE  */
#line 949 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3061 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 144: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN MULTIPLY SQUARE_BRACE_CLOSE  */
#line 951 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3067 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 145: /* direct_declarator: direct_declarator PARENTHESIS_OPEN change_table parameter_type_list PARENTHESIS_CLOSE  */
#line 953 "ass5_21CS30011_21CS30036.y"
        {
            currSymTab->name = (yyvsp[-4].symp)->name;
            if((yyvsp[-4].symp)->type->type != "void") {
                symbol* s = currSymTab->lookup("return");    // Lookup for return value
                s->update((yyvsp[-4].symp)->type);
            }
            (yyvsp[-4].symp)->nestedTable = currSymTab;
            currSymTab->parent = globalSymTab;   // Update parent symbol table
            switchTable(globalSymTab);          // Switch current table to point to the global symbol table
            currSymb = (yyval.symp);             // Update current symbol
        }
#line 3083 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 146: /* direct_declarator: direct_declarator PARENTHESIS_OPEN identifier_list PARENTHESIS_CLOSE  */
#line 965 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3089 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 147: /* direct_declarator: direct_declarator PARENTHESIS_OPEN change_table PARENTHESIS_CLOSE  */
#line 967 "ass5_21CS30011_21CS30036.y"
        {
            currSymTab->name = (yyvsp[-3].symp)->name;
            if((yyvsp[-3].symp)->type->type != "void") {
                symbol* s = currSymTab->lookup("return");    // Lookup for return value
                s->update((yyvsp[-3].symp)->type);
            }
            (yyvsp[-3].symp)->nestedTable = currSymTab;
            currSymTab->parent = globalSymTab;   // Update parent symbol table
            switchTable(globalSymTab);          // Switch current table to point to the global symbol table
            currSymb = (yyval.symp);             // Update current symbol
        }
#line 3105 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 148: /* type_qualifier_list_opt: type_qualifier_list  */
#line 982 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3111 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 149: /* type_qualifier_list_opt: %empty  */
#line 984 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3117 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 150: /* pointer: MULTIPLY type_qualifier_list_opt  */
#line 989 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.symType) = new symbolType("ptr");     //  creating new type "ptr"
        }
#line 3125 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 151: /* pointer: MULTIPLY type_qualifier_list_opt pointer  */
#line 993 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.symType) = new symbolType("ptr", (yyvsp[0].symType)); //  creating new type "ptr"
        }
#line 3133 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 152: /* type_qualifier_list: type_qualifier  */
#line 1000 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3139 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 153: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1002 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3145 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 154: /* parameter_type_list: parameter_list  */
#line 1007 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3151 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 155: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 1009 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3157 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 156: /* parameter_list: parameter_declaration  */
#line 1014 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3163 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 157: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1016 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3169 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 158: /* parameter_declaration: declaration_specifiers declarator  */
#line 1021 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3175 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 159: /* parameter_declaration: declaration_specifiers  */
#line 1023 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3181 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 160: /* identifier_list: IDENTIFIER  */
#line 1028 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3187 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 161: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1030 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3193 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 162: /* type_name: specifier_qualifier_list  */
#line 1035 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3199 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 163: /* initializer: assignment_expression  */
#line 1040 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.symp) = (yyvsp[0].expr)->loc;   // Simple assignment
        }
#line 3207 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 164: /* initializer: CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE  */
#line 1044 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3213 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 165: /* initializer: CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE  */
#line 1046 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3219 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 166: /* initializer_list: designation_opt initializer  */
#line 1051 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3225 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 167: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 1053 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3231 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 168: /* designation_opt: designation  */
#line 1058 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3237 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 169: /* designation_opt: %empty  */
#line 1060 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3243 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 170: /* designation: designator_list ASSIGN  */
#line 1065 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3249 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 171: /* designator_list: designator  */
#line 1070 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3255 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 172: /* designator_list: designator_list designator  */
#line 1072 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3261 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 173: /* designator: SQUARE_BRACE_OPEN constant_expression SQUARE_BRACE_CLOSE  */
#line 1077 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3267 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 174: /* designator: DOT IDENTIFIER  */
#line 1079 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3273 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 175: /* statement: labeled_statement  */
#line 1084 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3279 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 176: /* statement: compound_statement  */
#line 1086 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3287 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 177: /* statement: expression_statement  */
#line 1090 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = new statement();           // creating new statement
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;    // Assign same nextlist
        }
#line 3296 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 178: /* statement: selection_statement  */
#line 1095 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3304 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 179: /* statement: iteration_statement  */
#line 1099 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3312 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 180: /* statement: jump_statement  */
#line 1103 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3320 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 181: /* loop_statement: labeled_statement  */
#line 1111 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3326 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 182: /* loop_statement: expression_statement  */
#line 1113 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = new statement();           // creating new statement
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;    // Assign same nextlist
        }
#line 3335 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 183: /* loop_statement: selection_statement  */
#line 1118 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3343 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 184: /* loop_statement: iteration_statement  */
#line 1122 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3351 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 185: /* loop_statement: jump_statement  */
#line 1126 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3359 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 186: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1133 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3365 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 187: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1135 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3371 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 188: /* labeled_statement: DEFAULT COLON statement  */
#line 1137 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3377 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 189: /* compound_statement: CURLY_BRACE_OPEN X change_table block_item_list_opt CURLY_BRACE_CLOSE  */
#line 1142 "ass5_21CS30011_21CS30036.y"
        {
            /*
                Here, the grammar has been augmented with non-terminals like X and change_table to allow creation of nested symbol tables
            */
            (yyval.stmt) = (yyvsp[-1].stmt);
            switchTable(currSymTab->parent);     // Update current symbol table
        }
#line 3389 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 190: /* block_item_list_opt: block_item_list  */
#line 1153 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3397 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 191: /* block_item_list_opt: %empty  */
#line 1157 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = new statement();   // creating new statement
        }
#line 3405 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 192: /* block_item_list: block_item  */
#line 1164 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3413 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 193: /* block_item_list: block_item_list M block_item  */
#line 1168 "ass5_21CS30011_21CS30036.y"
        {   
            /*
                This production rule has been augmented with the non-terminal M
            */
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt)->nextlist, (yyvsp[-1].instr));    // After $1, move to block_item via $2
        }
#line 3425 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 194: /* block_item: declaration  */
#line 1179 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = new statement();   // creating new statement
        }
#line 3433 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 195: /* block_item: statement  */
#line 1183 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3441 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 196: /* expression_statement: expression SEMICOLON  */
#line 1190 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);    // Simple assignment
        }
#line 3449 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 197: /* expression_statement: SEMICOLON  */
#line 1194 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();  
        }
#line 3457 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 198: /* selection_statement: IF PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE M statement N  */
#line 1201 "ass5_21CS30011_21CS30036.y"
        {
            /*
                This production rule has been augmented for control flow
            */
            backpatch((yyvsp[-4].stmt)->nextlist, nextInstr());                   // nextlist of N now has nextInstr
            convertIntToBool((yyvsp[-5].expr));                                   // Convert expression to bool
            (yyval.stmt) = new statement();                                   // creating new statement
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr));                            // Backpatching - if expression is true, go to M
            // Merge falselist of expression, nextlist of statement and nextlist of the last N
            list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 3474 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 199: /* selection_statement: IF PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE M statement N ELSE M statement  */
#line 1214 "ass5_21CS30011_21CS30036.y"
        {
            /*
                This production rule has been augmented for control flow
            */
            backpatch((yyvsp[-7].stmt)->nextlist, nextInstr());                   // nextlist of N now has nextInstr
            convertIntToBool((yyvsp[-8].expr));                                   // Convert expression to bool
            (yyval.stmt) = new statement();                                   // creating new statement
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));                            // Backpatching - if expression is true, go to first M, else go to second M
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));
            // Merge nextlist of statement, nextlist of N and nextlist of the last statement
            list<int> temp = merge((yyvsp[-4].stmt)->nextlist, (yyvsp[-3].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 3492 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 200: /* selection_statement: SWITCH PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement  */
#line 1228 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3498 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 201: /* iteration_statement: WHILE W PARENTHESIS_OPEN X change_table M expression PARENTHESIS_CLOSE M loop_statement  */
#line 1233 "ass5_21CS30011_21CS30036.y"
        {   
            /*
                This production rule has been augmented with non-terminals like W, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, creating a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new statement();                   // creating a new statement
            convertIntToBool((yyvsp[-3].expr));                   // Convert expression to bool
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-4].instr));           // Go back to M1 and expression after one iteration of loop_statement
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr));            // Go to M2 and loop_statement if expression is true
            (yyval.stmt)->nextlist = (yyvsp[-3].expr)->falselist;           // Exit loop if expression is false
            emit("goto", to_string((yyvsp[-4].instr)));   // Emit to prevent fall-through
            blockName = "";
            switchTable(currSymTab->parent);
        }
#line 3517 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 202: /* iteration_statement: WHILE W PARENTHESIS_OPEN X change_table M expression PARENTHESIS_CLOSE CURLY_BRACE_OPEN M block_item_list_opt CURLY_BRACE_CLOSE  */
#line 1248 "ass5_21CS30011_21CS30036.y"
        {
            /*
                This production rule has been augmented with non-terminals like W, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, creating a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new statement();                   // creating a new statement
            convertIntToBool((yyvsp[-5].expr));                   // Convert expression to bool
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-6].instr));           // Go back to M1 and expression after one iteration
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr));           // Go to M2 and block_item_list_opt if expression is true
            (yyval.stmt)->nextlist = (yyvsp[-5].expr)->falselist;           // Exit loop if expression is false
            emit("goto", to_string((yyvsp[-6].instr)));   // Emit to prevent fall-through
            blockName = "";
            switchTable(currSymTab->parent);
        }
#line 3536 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 203: /* iteration_statement: DO D M loop_statement M WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE SEMICOLON  */
#line 1263 "ass5_21CS30011_21CS30036.y"
        {
            /*
                This production rule has been augmented with non-terminals like D and M to handle the control flow, backpatching and detect the kind of loop
            */
            (yyval.stmt) = new statement();                   // creating a new statement     
            convertIntToBool((yyvsp[-2].expr));                   // Convert expression to bool
            backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr));            // Go back to M1 and loop_statement if expression is true
            backpatch((yyvsp[-6].stmt)->nextlist, (yyvsp[-5].instr));            // Go to M2 to check expression after statement is complete
            (yyval.stmt)->nextlist = (yyvsp[-2].expr)->falselist;           // Exit loop if expression is false  
            blockName = "";
        }
#line 3552 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 204: /* iteration_statement: DO D CURLY_BRACE_OPEN M block_item_list_opt CURLY_BRACE_CLOSE M WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE SEMICOLON  */
#line 1275 "ass5_21CS30011_21CS30036.y"
        {
            /*
                This production rule has been augmented with non-terminals like D and M to handle the control flow, backpatching and detect the kind of loop
            */
            (yyval.stmt) = new statement();                   // creating a new statement  
            convertIntToBool((yyvsp[-2].expr));                  // Convert expression to bool
            backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-8].instr));           // Go back to M1 and block_item_list_opt if expression is true
            backpatch((yyvsp[-7].stmt)->nextlist, (yyvsp[-5].instr));            // Go to M2 to check expression after block_item_list_opt is complete
            (yyval.stmt)->nextlist = (yyvsp[-2].expr)->falselist;          // Exit loop if expression is false  
            blockName = "";
        }
#line 3568 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 205: /* iteration_statement: FOR F PARENTHESIS_OPEN X change_table declaration M expression_statement M expression N PARENTHESIS_CLOSE M loop_statement  */
#line 1287 "ass5_21CS30011_21CS30036.y"
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, creating a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new statement();                   // creating a new statement
            convertIntToBool((yyvsp[-6].expr));                   // Convert expression to bool
            backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].instr));           // Go back to M1 after N
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));           // Go back to expression after loop_statement
            emit("goto", to_string((yyvsp[-5].instr)));   // Emit to prevent fall-through
            (yyval.stmt)->nextlist = (yyvsp[-6].expr)->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSymTab->parent);
        }
#line 3588 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 206: /* iteration_statement: FOR F PARENTHESIS_OPEN X change_table expression_statement M expression_statement M expression N PARENTHESIS_CLOSE M loop_statement  */
#line 1303 "ass5_21CS30011_21CS30036.y"
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, creating a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new statement();                   // creating a new statement
            convertIntToBool((yyvsp[-6].expr));                   // Convert expression to bool
            backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].instr));           // Go back to M1 after N
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));           // Go back to expression after loop_statement
            emit("goto", to_string((yyvsp[-5].instr)));   // Emit to prevent fall-through
            (yyval.stmt)->nextlist = (yyvsp[-6].expr)->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSymTab->parent);
        }
#line 3608 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 207: /* iteration_statement: FOR F PARENTHESIS_OPEN X change_table declaration M expression_statement M expression N PARENTHESIS_CLOSE M CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE  */
#line 1319 "ass5_21CS30011_21CS30036.y"
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, creating a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new statement();                   // creating a new statement
            convertIntToBool((yyvsp[-8].expr));                   // Convert expression to bool
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].instr));           // Go back to M1 after N
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].instr));           // Go back to expression after loop_statement
            emit("goto", to_string((yyvsp[-7].instr)));   // Emit to prevent fall-through
            (yyval.stmt)->nextlist = (yyvsp[-8].expr)->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSymTab->parent);
        }
#line 3628 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 208: /* iteration_statement: FOR F PARENTHESIS_OPEN X change_table expression_statement M expression_statement M expression N PARENTHESIS_CLOSE M CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE  */
#line 1335 "ass5_21CS30011_21CS30036.y"
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, creating a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new statement();                   // creating a new statement
            convertIntToBool((yyvsp[-8].expr));                   // Convert expression to bool
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].instr));           // Go back to M1 after N
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].instr));           // Go back to expression after loop_statement
            emit("goto", to_string((yyvsp[-7].instr)));   // Emit to prevent fall-through
            (yyval.stmt)->nextlist = (yyvsp[-8].expr)->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSymTab->parent);
        }
#line 3648 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 209: /* F: %empty  */
#line 1353 "ass5_21CS30011_21CS30036.y"
        {   
            /*
            This non-terminal indicates the start of a for loop
            */
            blockName = "FOR";
        }
#line 3659 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 210: /* W: %empty  */
#line 1362 "ass5_21CS30011_21CS30036.y"
        {
            /*
            This non-terminal indicates the start of a while loop
            */
            blockName = "WHILE";
        }
#line 3670 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 211: /* D: %empty  */
#line 1371 "ass5_21CS30011_21CS30036.y"
        {
            /*
            This non-terminal indicates the start of a do-while loop
            */
            blockName = "DO_WHILE";
        }
#line 3681 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 212: /* X: %empty  */
#line 1380 "ass5_21CS30011_21CS30036.y"
        {   
            // Used for creating new nested symbol tables for nested blocks
            string newST = currSymTab->name + "." + blockName + "$" + to_string(SymTabCount++);  // Generate name for new symbol table
            symbol* sym = currSymTab->lookup(newST);
            sym->nestedTable = new symbolTable(newST);  // creating new symbol table
            sym->name = newST;
            sym->nestedTable->parent = currSymTab;
            sym->type = new symbolType("block");    // The type will be "block"
            currSymb = sym;    // Change the current symbol pointer
        }
#line 3696 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 213: /* change_table: %empty  */
#line 1393 "ass5_21CS30011_21CS30036.y"
        {   
            // Used for changing the symbol table on encountering functions
            if(currSymb->nestedTable != NULL) {
                // If the symbol table already exists, switch to that table
                switchTable(currSymb->nestedTable);
                emit("label", currSymTab->name);
            }
            else {
                // If the symbol table does not exist already, creating it and switch to it
                switchTable(new symbolTable(""));
            }
        }
#line 3713 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 214: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1409 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3719 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 215: /* jump_statement: CONTINUE SEMICOLON  */
#line 1411 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = new statement();
        }
#line 3727 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 216: /* jump_statement: BREAK SEMICOLON  */
#line 1415 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = new statement();
        }
#line 3735 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 217: /* jump_statement: RETURN expression SEMICOLON  */
#line 1419 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = new statement();
            emit("return", (yyvsp[-1].expr)->loc->name);  // Emit return alongwith return value
        }
#line 3744 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 218: /* jump_statement: RETURN SEMICOLON  */
#line 1424 "ass5_21CS30011_21CS30036.y"
        {
            (yyval.stmt) = new statement();
            emit("return", "");             // Emit return without any return value
        }
#line 3753 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 219: /* translation_unit: external_declaration  */
#line 1432 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3759 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 220: /* translation_unit: translation_unit external_declaration  */
#line 1434 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3765 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 221: /* external_declaration: function_definition  */
#line 1439 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3771 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 222: /* external_declaration: declaration  */
#line 1441 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3777 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 223: /* function_definition: declaration_specifiers declarator declaration_list_opt change_table CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE  */
#line 1446 "ass5_21CS30011_21CS30036.y"
        {   
            currSymTab->parent = globalSymTab;
            SymTabCount = 0;
            switchTable(globalSymTab);          // After reaching end of a function, change current symbol table to the global symbol table
        }
#line 3787 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 224: /* declaration_list_opt: declaration_list  */
#line 1455 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3793 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 225: /* declaration_list_opt: %empty  */
#line 1457 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3799 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 226: /* declaration_list: declaration  */
#line 1462 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3805 "ass5_21CS30011_21CS30036.tab.c"
    break;

  case 227: /* declaration_list: declaration_list declaration  */
#line 1464 "ass5_21CS30011_21CS30036.y"
        {  }
#line 3811 "ass5_21CS30011_21CS30036.tab.c"
    break;


#line 3815 "ass5_21CS30011_21CS30036.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1467 "ass5_21CS30011_21CS30036.y"


void yyerror(string s) {
    cout << "Error occurred: " << s << '\n';
    cout << "Unable to parse: " << yytext << '\n'; 
}
