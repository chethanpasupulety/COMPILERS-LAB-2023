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
#line 1 "ass6_21CS30011_21CS30036.y"


    #include <iostream>
    #include "ass6_21CS30011_21CS30036_translator.h"
    using namespace std;

    extern int yylex();                     // From lexer
    void yyerror(string s);                 // Function to report errors
    extern char* yytext;                    // From lexer, gives the text being currently scanned
    extern int yylineno;                    // Used for keeping track of the line number

    extern int nextInstr;                   // Used for keeping track of the next instruction
    extern quadArray quadList;              // List of all quads
    extern symbolTable symTabGlobal;            // Global symbol table
    extern symbolTable* symTab;                 // Pointer to the current symbol table
    extern vector<string> string_constants;     // List of all string constants

    int string_count = 0;                       // Counter for string constants

#line 91 "ass6_21CS30011_21CS30036.tab.c"

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

#include "ass6_21CS30011_21CS30036.tab.h"
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
  YYSYMBOL_CHAR_ = 6,                      /* CHAR_  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 9,                    /* DEFAULT  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_ENUM = 13,                      /* ENUM  */
  YYSYMBOL_EXTERN = 14,                    /* EXTERN  */
  YYSYMBOL_FLOAT_ = 15,                    /* FLOAT_  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_GOTO_ = 17,                     /* GOTO_  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_INLINE = 19,                    /* INLINE  */
  YYSYMBOL_INT_ = 20,                      /* INT_  */
  YYSYMBOL_LONG = 21,                      /* LONG  */
  YYSYMBOL_REGISTER = 22,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 23,                  /* RESTRICT  */
  YYSYMBOL_RETURN_ = 24,                   /* RETURN_  */
  YYSYMBOL_SHORT = 25,                     /* SHORT  */
  YYSYMBOL_SIGNED = 26,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 27,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 28,                    /* STATIC  */
  YYSYMBOL_STRUCT = 29,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 30,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 31,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 32,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 33,                  /* UNSIGNED  */
  YYSYMBOL_VOID_ = 34,                     /* VOID_  */
  YYSYMBOL_VOLATILE = 35,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_BOOL_ = 37,                     /* BOOL_  */
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
  YYSYMBOL_ADD_ = 52,                      /* ADD_  */
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
  YYSYMBOL_ASSIGN_ = 74,                   /* ASSIGN_  */
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
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_primary_expression = 93,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 94,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 95,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 96,          /* unary_expression  */
  YYSYMBOL_unary_operator = 97,            /* unary_operator  */
  YYSYMBOL_cast_expression = 98,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 99, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 100,      /* additive_expression  */
  YYSYMBOL_shift_expression = 101,         /* shift_expression  */
  YYSYMBOL_relational_expression = 102,    /* relational_expression  */
  YYSYMBOL_equality_expression = 103,      /* equality_expression  */
  YYSYMBOL_and_expression = 104,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 105,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 106,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 107,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 108,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 109,   /* conditional_expression  */
  YYSYMBOL_M = 110,                        /* M  */
  YYSYMBOL_N = 111,                        /* N  */
  YYSYMBOL_assignment_expression = 112,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 113,      /* assignment_operator  */
  YYSYMBOL_expression = 114,               /* expression  */
  YYSYMBOL_constant_expression = 115,      /* constant_expression  */
  YYSYMBOL_declaration = 116,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 117,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 118,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 119,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 120,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 121,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 122, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 123, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 124,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 125,          /* enumerator_list  */
  YYSYMBOL_enumerator = 126,               /* enumerator  */
  YYSYMBOL_type_qualifier = 127,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 128,       /* function_specifier  */
  YYSYMBOL_declarator = 129,               /* declarator  */
  YYSYMBOL_direct_declarator = 130,        /* direct_declarator  */
  YYSYMBOL_parameter_type_list_opt = 131,  /* parameter_type_list_opt  */
  YYSYMBOL_type_qualifier_list_opt = 132,  /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 133,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 134,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 135,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 136,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 137,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 138,          /* identifier_list  */
  YYSYMBOL_type_name = 139,                /* type_name  */
  YYSYMBOL_initializer = 140,              /* initializer  */
  YYSYMBOL_initializer_list = 141,         /* initializer_list  */
  YYSYMBOL_designation_opt = 142,          /* designation_opt  */
  YYSYMBOL_designation = 143,              /* designation  */
  YYSYMBOL_designator_list = 144,          /* designator_list  */
  YYSYMBOL_designator = 145,               /* designator  */
  YYSYMBOL_statement = 146,                /* statement  */
  YYSYMBOL_labeled_statement = 147,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 148,       /* compound_statement  */
  YYSYMBOL_block_item_list = 149,          /* block_item_list  */
  YYSYMBOL_block_item = 150,               /* block_item  */
  YYSYMBOL_expression_statement = 151,     /* expression_statement  */
  YYSYMBOL_selection_statement = 152,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 153,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 154,           /* jump_statement  */
  YYSYMBOL_translation_unit = 155,         /* translation_unit  */
  YYSYMBOL_external_declaration = 156,     /* external_declaration  */
  YYSYMBOL_function_definition = 157,      /* function_definition  */
  YYSYMBOL_function_prototype = 158,       /* function_prototype  */
  YYSYMBOL_declaration_list = 159          /* declaration_list  */
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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


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
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   124,   124,   131,   140,   149,   158,   164,   171,   173,
     190,   196,   217,   219,   221,   239,   258,   260,   265,   273,
     284,   286,   304,   321,   353,   355,   360,   364,   368,   372,
     376,   380,   387,   389,   394,   412,   436,   460,   487,   489,
     513,   540,   542,   544,   549,   551,   578,   605,   632,   662,
     667,   694,   724,   726,   731,   735,   740,   745,   750,   752,
     763,   765,   775,   779,   800,   808,   818,   820,   837,   839,
     841,   843,   845,   847,   849,   851,   853,   855,   857,   862,
     864,   869,   874,   927,   932,   934,   936,   938,   940,   942,
     944,   946,   951,   956,   964,   969,   977,   979,   981,   983,
     988,   992,   996,   998,  1002,  1004,  1008,  1010,  1012,  1014,
    1016,  1018,  1020,  1025,  1027,  1032,  1034,  1039,  1041,  1043,
    1045,  1050,  1052,  1057,  1059,  1064,  1066,  1068,  1073,  1078,
    1083,  1091,  1096,  1098,  1105,  1113,  1115,  1117,  1123,  1149,
    1154,  1156,  1163,  1165,  1170,  1172,  1176,  1178,  1185,  1187,
    1192,  1193,  1197,  1202,  1210,  1225,  1230,  1232,  1237,  1242,
    1246,  1248,  1253,  1255,  1260,  1262,  1267,  1272,  1274,  1279,
    1281,  1286,  1288,  1289,  1290,  1291,  1292,  1296,  1298,  1300,
    1305,  1307,  1314,  1319,  1329,  1333,  1337,  1339,  1346,  1357,
    1370,  1375,  1386,  1395,  1410,  1412,  1414,  1416,  1423,  1433,
    1435,  1440,  1442,  1447,  1449,  1457,  1479,  1481
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
  "CASE", "CHAR_", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE",
  "ENUM", "EXTERN", "FLOAT_", "FOR", "GOTO_", "IF", "INLINE", "INT_",
  "LONG", "REGISTER", "RESTRICT", "RETURN_", "SHORT", "SIGNED", "SIZEOF",
  "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID_",
  "VOLATILE", "WHILE", "BOOL_", "COMPLEX", "IMAGINARY",
  "SQUARE_BRACE_OPEN", "SQUARE_BRACE_CLOSE", "PARENTHESIS_OPEN",
  "PARENTHESIS_CLOSE", "CURLY_BRACE_OPEN", "CURLY_BRACE_CLOSE", "DOT",
  "ARROW", "INCREMENT", "DECREMENT", "BITWISE_AND", "MULTIPLY", "ADD_",
  "SUBTRACT", "BITWISE_NOR", "NOT", "DIVIDE", "MODULO", "LSHIFT", "RSHIFT",
  "LESS_THAN", "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL",
  "EQUAL", "NOT_EQUAL", "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND",
  "LOGICAL_OR", "QUESTION_MARK", "COLON", "SEMICOLON", "ELLIPSIS",
  "ASSIGN_", "MULTIPLY_ASSIGN", "DIVIDE_ASSIGN", "MODULO_ASSIGN",
  "ADD_ASSIGN", "SUBTRACT_ASSIGN", "LSHIFT_ASSIGN", "RSHIFT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "COMMA", "HASH", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHAR_CONSTANT",
  "STRING_LITERAL", "$accept", "primary_expression", "postfix_expression",
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
  "enum_specifier", "enumerator_list", "enumerator", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator",
  "parameter_type_list_opt", "type_qualifier_list_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "function_prototype", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-270)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-206)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1096,  -270,  -270,  -270,  -270,   -16,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,   -18,  1096,  1096,  -270,  1096,  1096,  1059,
    -270,  -270,    16,    11,    69,   -15,    35,  -270,  -270,   -24,
    -270,   660,    78,   -20,  -270,  -270,  -270,  -270,  -270,  -270,
     283,  -270,    47,    -1,  -270,    11,   105,  -270,  -270,    35,
    -270,   -15,   704,  -270,   -18,  1019,   182,   623,    78,    92,
     872,    94,   113,  -270,   146,   103,   150,   718,   916,   152,
    -270,   534,  -270,   930,   930,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,   133,  -270,  -270,  -270,  -270,  -270,   200,   265,
     872,  -270,    66,    27,    97,   176,    95,   157,   154,   155,
     158,    98,  -270,  -270,    21,  -270,  -270,  -270,  -270,   198,
    -270,  -270,  -270,  -270,  -270,   872,  -270,    11,    20,  -270,
    -270,  -270,  -270,   170,    36,  -270,  -270,  -270,  -270,  -270,
      39,   762,   188,  -270,   -15,   207,  -270,   166,  -270,    -2,
    -270,  -270,  -270,   181,  -270,   448,   448,   791,   183,   872,
    -270,    68,   534,  -270,   872,   212,     4,  1130,  -270,  1130,
     219,   534,  -270,  -270,   448,   872,   841,   178,   184,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,   872,  -270,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
    -270,  -270,   203,  -270,   872,  -270,   372,  -270,  -270,  -270,
       8,   872,   187,    23,   704,  -270,   -17,  -270,   179,  -270,
     236,   237,   872,  -270,  -270,   702,  -270,   194,   448,  -270,
    -270,  -270,  -270,   197,  -270,   241,     6,   872,  -270,  -270,
    -270,  -270,   858,   252,  -270,   -22,  -270,     9,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,    66,    66,    27,    27,    97,
      97,    97,    97,   176,   176,    95,   157,   154,   872,   872,
    -270,  -270,  -270,  -270,   271,  -270,  -270,   117,  -270,  -270,
    -270,   273,  -270,  -270,   274,  -270,  -270,  -270,  -270,   287,
     791,   281,   282,   448,   197,    36,  -270,   282,  -270,  -270,
     872,   155,   158,   872,  -270,  -270,   704,  -270,  -270,   288,
    -270,  -270,  -270,   286,    30,  -270,   197,  -270,   872,  -270,
     448,  -270,  -270,   173,   279,   197,   872,  -270,   448,  -270,
    -270,   308,   197,   340,  -270,   872,   284,   310,  -270,  -270,
    -270,  -270,   448,   448,  -270,  -270,  -270
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   101,   125,   106,     0,    96,   105,   128,   103,
     104,    99,   126,   102,   107,    97,   108,   100,   127,   109,
     110,   111,   202,     0,    85,    87,   112,    89,    91,     0,
     199,   201,     0,     0,   120,     0,   145,    83,   131,     0,
      92,    94,   130,     0,    84,    86,    88,    90,     1,   200,
       0,   204,   123,     0,   121,     0,     0,   148,   147,   144,
      82,     0,     0,   206,     0,     0,   143,   141,   129,     0,
       0,     0,     0,    64,     0,     0,     0,     0,     0,     0,
      64,     0,   180,     0,     0,    26,    27,    28,    29,    30,
      31,   187,     2,     3,     4,     5,     6,     8,    20,    32,
       0,    34,    38,    41,    44,    49,    52,    54,    56,    58,
      60,    62,    66,    79,     0,   184,   185,   171,   172,    64,
     182,   173,   174,   175,   176,     0,   117,     0,     0,   132,
     149,   146,    93,    94,   165,     2,   159,    95,   207,   203,
       0,     0,   142,   156,   155,     0,   140,   150,   152,     0,
     196,    32,    81,     0,   195,     0,     0,     0,     0,     0,
     197,     0,     0,    24,     0,     0,     0,   116,   158,   116,
       0,     0,    21,    22,     0,     0,     0,     0,     0,    14,
      15,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    64,     0,   186,     0,   181,     0,   124,   122,   118,
       0,     0,     0,     0,     0,   164,     0,   167,     0,   133,
      27,     0,     0,   154,   138,     0,   139,     0,     0,   179,
      64,    64,   194,    65,   198,     0,     0,     0,     7,   115,
     113,   114,     0,     0,   177,     0,    10,     0,    18,    12,
      13,    67,    35,    36,    37,    39,    40,    42,    43,    45,
      46,    47,    48,    50,    51,    53,    55,    57,     0,     0,
      64,    80,   183,   119,     0,   170,   160,   165,   162,   166,
     168,     0,   137,   134,     0,   151,   153,   157,   178,     0,
       0,     0,    25,     0,    65,   165,    33,     0,     9,    11,
       0,    59,    61,     0,   169,   161,     0,   135,   136,     0,
      65,    64,   190,     0,     0,    19,    65,   163,     0,    64,
       0,    64,    16,   165,     0,    65,     0,    65,     0,    17,
      64,     0,    65,   188,   191,     0,     0,     0,    64,    63,
     192,    64,     0,     0,    65,   193,   189
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,  -270,  -270,   -70,  -270,   -94,   -27,    25,    56,
     -26,   147,   149,   151,    80,    82,  -270,   -69,   -68,  -139,
     -31,  -270,   -72,  -110,   -25,    10,  -270,   298,  -270,   -55,
     -23,   193,  -270,   309,  -123,     7,  -270,    -3,   320,  -270,
    -270,    60,   -59,  -270,  -270,   130,  -270,  -112,  -207,    61,
    -269,  -270,  -270,   141,  -153,  -270,    13,  -270,   153,  -146,
    -270,  -270,  -270,  -270,   339,  -270,  -270,  -270
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    97,    98,   257,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   156,   212,
     113,   192,   114,   153,    22,    64,    39,    40,    24,    25,
     168,   250,    26,    53,    54,    27,    28,   133,    42,   145,
     141,    43,    59,   146,   147,   148,   149,   170,   137,   223,
     224,   225,   226,   227,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    29,    30,    31,    32,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     151,   152,   239,   240,   218,   161,   193,   142,   163,   166,
      23,   241,   165,   172,   173,   217,    63,   288,   316,   308,
      41,   254,    35,   221,    35,   115,   167,    35,    33,   222,
     151,   136,    56,    36,    44,    45,    36,    46,    47,    23,
     138,   236,     3,    57,   126,    51,     3,   248,    60,   303,
     245,   216,   309,   283,    37,   151,   152,   289,    12,   253,
      50,    61,    12,   214,   316,   219,   130,    38,   286,    38,
      18,    34,    38,    57,    18,   332,   221,   144,   139,   197,
     198,   228,   222,   237,   127,   298,    36,   243,   169,   214,
     166,   214,   246,   213,   310,    52,    58,   218,    52,   166,
     262,   263,   264,   255,   301,   220,   214,   167,   287,   327,
     231,   284,   167,    55,   167,   333,   167,   194,    66,   131,
      67,   125,   195,   196,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     244,   233,   278,   279,   249,   258,   249,    57,   129,   130,
     322,   151,   152,   214,   320,   199,   200,   221,   306,   205,
     206,   261,   315,   222,   150,   323,   154,   211,   -65,   169,
     265,   266,   299,   300,   169,   304,   169,   337,   169,   273,
     274,   329,   151,   281,   155,   344,     3,   334,   157,     3,
     158,   115,   159,   136,   164,     3,   341,   291,   343,   354,
     355,   294,    12,   347,   174,    12,    78,   207,   151,   151,
     140,    12,   313,   221,    18,   356,   232,    18,   339,   222,
     208,    81,   209,    18,   267,   268,   210,    83,    84,    85,
      86,    87,    88,    89,    90,   130,   201,   202,   203,   204,
     175,   326,   176,   215,    62,   144,   177,   178,   179,   180,
     234,   235,   238,   330,   247,   242,   335,   269,   270,   271,
     272,   336,   252,   338,   342,   259,   135,    93,    94,    95,
      96,   260,   345,   280,   285,   151,   349,   292,   293,   325,
     352,   297,   214,   353,   302,   136,     1,    69,    70,     2,
       3,    71,    72,    73,     4,   307,     5,     6,     7,    74,
      75,    76,     8,     9,    10,    11,    12,    77,    13,    14,
      78,    15,   314,    79,   317,   318,    16,    17,    18,    80,
      19,    20,    21,   319,   321,    81,   305,    50,    82,   331,
     328,    83,    84,    85,    86,    87,    88,    89,    90,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     340,   346,   348,   351,   275,    91,   350,   276,   311,   132,
     277,   312,   251,    68,   128,   296,   324,   290,    49,   282,
      92,    93,    94,    95,    96,     1,    69,    70,     2,     3,
      71,    72,    73,     4,     0,     5,     6,     7,    74,    75,
      76,     8,     9,    10,    11,    12,    77,    13,    14,    78,
      15,     0,    79,     0,     0,    16,    17,    18,    80,    19,
      20,    21,     0,     0,    81,     0,    50,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,    69,    70,     0,     0,    71,    72,    73,    92,
      93,    94,    95,    96,    74,    75,    76,     0,     0,     0,
       0,     0,    77,     0,     0,    78,     0,     0,    79,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
      81,     0,    50,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       2,     3,     0,     0,     0,     4,     0,     5,     0,     7,
       0,     0,     0,     0,     9,    10,     0,    12,     0,    13,
      14,    78,     0,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21,     0,     0,    81,     0,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,    93,    94,    95,    96,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,     0,     0,     0,     0,    16,    17,    18,     0,
      19,    20,    21,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21,
       0,     0,     0,     0,  -205,     1,     0,     0,     2,     3,
     143,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,    78,     0,     0,    62,    16,    17,    18,     0,    19,
      20,    21,     0,     0,     0,    78,    81,     0,   134,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      81,     0,     0,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
     160,   135,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,   229,    81,   135,    93,    94,    95,    96,
      83,    84,    85,   230,    87,    88,    89,    90,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,     0,     0,   135,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,    93,
      94,    95,    96,    81,   256,    78,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,     0,     0,    78,
      81,     0,   305,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,    81,     0,     0,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    90,   135,    93,
      94,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,   135,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,    78,   162,   135,
      93,    94,    95,    96,    83,    84,    85,    86,    87,    88,
      89,    90,   171,     0,     0,     0,     0,     0,    83,    84,
      85,    86,    87,    88,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,    93,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,    93,    94,
      95,    96,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,    48,
       0,     0,     1,    50,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     2,     3,     0,     0,
       0,     4,     0,     5,     0,     7,     0,     0,     0,     0,
       9,    10,     0,    12,     0,    13,    14,     0,     0,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
      70,    70,   155,   156,   127,    77,   100,    66,    78,    81,
       0,   157,    80,    83,    84,   125,    41,   224,   287,    41,
      23,   174,    42,    40,    42,    50,    81,    42,    44,    46,
     100,    62,    35,    51,    24,    25,    51,    27,    28,    29,
      65,    43,     7,    36,    45,    32,     7,    43,    72,    43,
     162,   119,    43,    45,    72,   125,   125,    74,    23,   171,
      44,    85,    23,    85,   333,    45,    59,    87,    45,    87,
      35,    87,    87,    66,    35,    45,    40,    67,    65,    52,
      53,   140,    46,    85,    85,   238,    51,   159,    81,    85,
     162,    85,   164,    72,    85,    87,    36,   220,    87,   171,
     194,   195,   196,   175,   243,    85,    85,   162,    85,   316,
     141,   221,   167,    44,   169,    85,   171,    51,    40,    59,
      42,    74,    56,    57,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
      72,   144,   210,   211,   167,   176,   169,   140,    43,   142,
     303,   221,   221,    85,   300,    58,    59,    40,   252,    64,
      65,   192,    45,    46,    72,   304,    72,    69,    70,   162,
     197,   198,   240,   241,   167,   247,   169,   330,   171,   205,
     206,   320,   252,   214,    71,   338,     7,   326,    42,     7,
      87,   216,    42,   224,    42,     7,   335,   228,   337,   352,
     353,   232,    23,   342,    71,    23,    27,    50,   278,   279,
      28,    23,   280,    40,    35,   354,    28,    35,    45,    46,
      66,    42,    67,    35,   199,   200,    68,    48,    49,    50,
      51,    52,    53,    54,    55,   228,    60,    61,    62,    63,
      40,   313,    42,    45,    74,   235,    46,    47,    48,    49,
      43,    85,    71,   321,    42,    72,   328,   201,   202,   203,
     204,   329,    43,   331,   336,    87,    87,    88,    89,    90,
      91,    87,   340,    70,    87,   345,   345,    41,    41,   310,
     348,    87,    85,   351,    43,   316,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    43,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    41,    30,    41,    41,    33,    34,    35,    36,
      37,    38,    39,    36,    43,    42,    44,    44,    45,    43,
      42,    48,    49,    50,    51,    52,    53,    54,    55,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      71,    43,    12,    43,   207,    72,    72,   208,   278,    61,
     209,   279,   169,    43,    55,   235,   305,   226,    29,   216,
      87,    88,    89,    90,    91,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    -1,    44,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,    -1,     8,     9,    10,    87,
      88,    89,    90,    91,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      37,    38,    39,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,    39,
      -1,    -1,    -1,    -1,    44,     3,    -1,    -1,     6,     7,
      87,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    27,    -1,    -1,    74,    33,    34,    35,    -1,    37,
      38,    39,    -1,    -1,    -1,    27,    42,    -1,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      72,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    87,    88,    89,    90,    91,
      48,    49,    50,    51,    52,    53,    54,    55,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    42,    43,    27,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    27,
      42,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    42,    87,
      88,    89,    90,    91,    48,    49,    50,    51,    52,    53,
      54,    55,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,     0,
      -1,    -1,     3,    44,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   116,   117,   120,   121,   124,   127,   128,   155,
     156,   157,   158,    44,    87,    42,    51,    72,    87,   118,
     119,   129,   130,   133,   117,   117,   117,   117,     0,   156,
      44,   148,    87,   125,   126,    44,   129,   127,   133,   134,
      72,    85,    74,   116,   117,   159,    40,    42,   130,     4,
       5,     8,     9,    10,    16,    17,    18,    24,    27,    30,
      36,    42,    45,    48,    49,    50,    51,    52,    53,    54,
      55,    72,    87,    88,    89,    90,    91,    93,    94,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   112,   114,   116,   146,   147,   148,   149,
     150,   151,   152,   153,   154,    74,    45,    85,   125,    43,
     127,   133,   119,   129,    44,    87,   112,   140,   116,   148,
      28,   132,   134,    87,   117,   131,   135,   136,   137,   138,
      72,    96,   109,   115,    72,    71,   110,    42,    87,    42,
      72,   114,    42,    96,    42,   110,   114,   121,   122,   127,
     139,    42,    96,    96,    71,    40,    42,    46,    47,    48,
      49,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,   113,    98,    51,    56,    57,    52,    53,    58,
      59,    60,    61,    62,    63,    64,    65,    50,    66,    67,
      68,    69,   111,    72,    85,    45,   110,   115,   126,    45,
      85,    40,    46,   141,   142,   143,   144,   145,   134,    41,
      51,   112,    28,   129,    43,    85,    43,    85,    71,   146,
     146,   151,    72,   114,    72,   139,   114,    42,    43,   122,
     123,   123,    43,   139,   146,   114,    43,    95,   112,    87,
      87,   112,    98,    98,    98,    99,    99,   100,   100,   101,
     101,   101,   101,   102,   102,   103,   104,   105,   110,   110,
      70,   112,   150,    45,   115,    87,    45,    85,   140,    74,
     145,   112,    41,    41,   112,    73,   137,    87,   146,   110,
     110,   111,    43,    43,   114,    44,    98,    43,    41,    43,
      85,   106,   107,   110,    41,    45,   142,    41,    41,    36,
     151,    43,   146,   111,   141,   112,   114,   140,    42,   111,
     110,    43,    45,    85,   111,   114,   110,   146,   110,    45,
      71,   111,   114,   111,   146,   110,    43,   111,    12,   109,
      72,    43,   110,   110,   146,   146,   111
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    98,    98,    99,    99,    99,    99,   100,   100,
     100,   101,   101,   101,   102,   102,   102,   102,   102,   103,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   115,   116,   116,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   122,   123,   123,   124,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   128,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     131,   131,   132,   132,   133,   133,   133,   133,   134,   134,
     135,   135,   136,   136,   137,   137,   138,   138,   139,   140,
     140,   140,   141,   141,   142,   142,   143,   144,   144,   145,
     145,   146,   146,   146,   146,   146,   146,   147,   147,   147,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     152,   153,   153,   153,   154,   154,   154,   154,   154,   155,
     155,   156,   156,   157,   157,   158,   159,   159
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     4,
       1,     4,     1,     9,     0,     0,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     2,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     0,     4,     5,     6,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     2,
       1,     1,     3,     4,     5,     6,     6,     5,     4,     4,
       1,     0,     1,     0,     2,     1,     3,     2,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     2,     4,     1,     0,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     1,     3,     1,     1,     2,     1,     8,    12,
       5,     8,    10,    12,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     2,     2,     1,     2
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
#line 125 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();  // Create new expression
            string s = *((yyvsp[0].str));
            symTab->lookup(s);          // Store entry in the symbol table
            (yyval.expr)->loc = s;            // Store pointer to string identifier name
        }
#line 1683 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 3: /* primary_expression: INTEGER_CONSTANT  */
#line 132 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();                  // Create new expression
            (yyval.expr)->loc = symTab->gentemp(INT);             // Generate a new temporary variable
            emit((yyval.expr)->loc, (yyvsp[0].intval), ASSIGN);
            symbolValue* val = new symbolValue();
            val->setInitVal((yyvsp[0].intval));                    // Set the initial value
            symTab->lookup((yyval.expr)->loc)->initVal = val;     // Store in symbol table
        }
#line 1696 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 4: /* primary_expression: FLOATING_CONSTANT  */
#line 141 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();                  // Create new expression
            (yyval.expr)->loc = symTab->gentemp(FLOAT);           // Generate a new temporary variable
            emit((yyval.expr)->loc, (yyvsp[0].floatval), ASSIGN);
            symbolValue* val = new symbolValue();
            val->setInitVal((yyvsp[0].floatval));                    // Set the initial value
            symTab->lookup((yyval.expr)->loc)->initVal = val;     // Store in symbol table
        }
#line 1709 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 5: /* primary_expression: CHAR_CONSTANT  */
#line 150 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();                  // Create new expression
            (yyval.expr)->loc = symTab->gentemp(CHAR);            // Generate a new temporary variable
            emit((yyval.expr)->loc, (yyvsp[0].charval), ASSIGN);
            symbolValue* val = new symbolValue();
            val->setInitVal((yyvsp[0].charval));                    // Set the initial value
            symTab->lookup((yyval.expr)->loc)->initVal = val;     // Store in symbol table
        }
#line 1722 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 6: /* primary_expression: STRING_LITERAL  */
#line 159 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();                  // Create new expression
            (yyval.expr)->loc = ".LC" + to_string(string_count++);
            string_constants.push_back(*((yyvsp[0].str)));          // Add to the list of string constants
        }
#line 1732 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 7: /* primary_expression: PARENTHESIS_OPEN expression PARENTHESIS_CLOSE  */
#line 165 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);                                // Simple assignment
        }
#line 1740 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 8: /* postfix_expression: primary_expression  */
#line 172 "ass6_21CS30011_21CS30036.y"
        {}
#line 1746 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression SQUARE_BRACE_OPEN expression SQUARE_BRACE_CLOSE  */
#line 174 "ass6_21CS30011_21CS30036.y"
        {
            symbolType to = symTab->lookup((yyvsp[-3].expr)->loc)->type;      // Get the type of the expression
            string f = "";
            if(!((yyvsp[-3].expr)->fold)) {
                f = symTab->gentemp(INT);                       // Generate a new temporary variable
                emit(f, 0, ASSIGN);
                (yyvsp[-3].expr)->folder = new string(f);
            }
            string temp = symTab->gentemp(INT);

            // Emit the necessary quads
            emit(temp, (yyvsp[-1].expr)->loc, "", ASSIGN);
            emit(temp, temp, "4", MULT);
            emit(f, temp, "", ASSIGN);
            (yyval.expr) = (yyvsp[-3].expr);
        }
#line 1767 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression PARENTHESIS_OPEN PARENTHESIS_CLOSE  */
#line 191 "ass6_21CS30011_21CS30036.y"
        {   
            // Corresponds to calling a function with the function name but without any arguments
            symbolTable* funcTable = symTabGlobal.lookup((yyvsp[-2].expr)->loc)->nestedTable;
            emit((yyvsp[-2].expr)->loc, "0", "", CALL);
        }
#line 1777 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression PARENTHESIS_OPEN argument_expression_list PARENTHESIS_CLOSE  */
#line 197 "ass6_21CS30011_21CS30036.y"
        {   
            // Corresponds to calling a function with the function name and the appropriate number of arguments
            symbolTable* funcTable = symTabGlobal.lookup((yyvsp[-3].expr)->loc)->nestedTable;
            vector<param*> params = *((yyvsp[-1].prmList));                          // Get the list of params
            vector<symbol*> paramsList = funcTable->symbols;

            for(int i = 0; i < (int)params.size(); i++) {
                emit(params[i]->name, "", "", PARAM);               // Emit the params
            }

            dataTypes retType = funcTable->lookup("RETVAL")->type.type;  // Add an entry in the symbol table for the return value
            if(retType == VOID)                                         // If the function returns void
                emit((yyvsp[-3].expr)->loc, (int)params.size(), CALL);
            else {                                                      // If the function returns a value
                string retVal = symTab->gentemp(retType);
                emit((yyvsp[-3].expr)->loc, to_string(params.size()), retVal, CALL);
                (yyval.expr) = new expression();
                (yyval.expr)->loc = retVal;
            }
        }
#line 1802 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 218 "ass6_21CS30011_21CS30036.y"
        {}
#line 1808 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 220 "ass6_21CS30011_21CS30036.y"
        {}
#line 1814 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression INCREMENT  */
#line 222 "ass6_21CS30011_21CS30036.y"
        {   
            (yyval.expr) = new expression();                                          // Create new expression
            symbolType t = symTab->lookup((yyvsp[-1].expr)->loc)->type;                       // Get the type of the expression and generate a temporary variable
            if(t.type == ARRAY) {
                (yyval.expr)->loc = symTab->gentemp(symTab->lookup((yyvsp[-1].expr)->loc)->type.nextType);
                emit((yyval.expr)->loc, (yyvsp[-1].expr)->loc, *((yyvsp[-1].expr)->folder), ARR_IND_BRAC);
                string temp = symTab->gentemp(t.nextType);
                emit(temp, (yyvsp[-1].expr)->loc, *((yyvsp[-1].expr)->folder), ARR_IND_BRAC);
                emit(temp, temp, "1", ADD);
                emit((yyvsp[-1].expr)->loc, temp, *((yyvsp[-1].expr)->folder), ARR_IND_ANS);
            }
            else {
                (yyval.expr)->loc = symTab->gentemp(symTab->lookup((yyvsp[-1].expr)->loc)->type.type);
                emit((yyval.expr)->loc, (yyvsp[-1].expr)->loc, "", ASSIGN);                         // Assign the old value 
                emit((yyvsp[-1].expr)->loc, (yyvsp[-1].expr)->loc, "1", ADD);                           // Increment the value
            }
        }
#line 1836 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression DECREMENT  */
#line 240 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();                                          // Create new expression
            (yyval.expr)->loc = symTab->gentemp(symTab->lookup((yyvsp[-1].expr)->loc)->type.type);          // Generate a new temporary variable
            symbolType t = symTab->lookup((yyvsp[-1].expr)->loc)->type;
            if(t.type == ARRAY) {
                (yyval.expr)->loc = symTab->gentemp(symTab->lookup((yyvsp[-1].expr)->loc)->type.nextType);
                string temp = symTab->gentemp(t.nextType);
                emit(temp, (yyvsp[-1].expr)->loc, *((yyvsp[-1].expr)->folder), ARR_IND_BRAC);
                emit((yyval.expr)->loc, temp, "", ASSIGN);
                emit(temp, temp, "1", SUB);
                emit((yyvsp[-1].expr)->loc, temp, *((yyvsp[-1].expr)->folder), ARR_IND_ANS);
            }
            else {
                (yyval.expr)->loc = symTab->gentemp(symTab->lookup((yyvsp[-1].expr)->loc)->type.type);
                emit((yyval.expr)->loc, (yyvsp[-1].expr)->loc, "", ASSIGN);                         // Assign the old value
                emit((yyvsp[-1].expr)->loc, (yyvsp[-1].expr)->loc, "1", SUB);                           // Decrement the value
            }
        }
#line 1859 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 16: /* postfix_expression: PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE  */
#line 259 "ass6_21CS30011_21CS30036.y"
        {}
#line 1865 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 17: /* postfix_expression: PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE  */
#line 261 "ass6_21CS30011_21CS30036.y"
        {}
#line 1871 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 18: /* argument_expression_list: assignment_expression  */
#line 266 "ass6_21CS30011_21CS30036.y"
        {
            param* first = new param();                 // Create a new parameter
            first->name = (yyvsp[0].expr)->loc;
            first->type = symTab->lookup((yyvsp[0].expr)->loc)->type;
            (yyval.prmList) = new vector<param*>;
            (yyval.prmList)->push_back(first);                       // Add the parameter to the list
        }
#line 1883 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 19: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 274 "ass6_21CS30011_21CS30036.y"
        {
            param* next = new param();                  // Create a new parameter
            next->name = (yyvsp[0].expr)->loc;
            next->type = symTab->lookup(next->name)->type;
            (yyval.prmList) = (yyvsp[-2].prmList);
            (yyval.prmList)->push_back(next);                        // Add the parameter to the list
        }
#line 1895 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 20: /* unary_expression: postfix_expression  */
#line 285 "ass6_21CS30011_21CS30036.y"
        {}
#line 1901 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 21: /* unary_expression: INCREMENT unary_expression  */
#line 287 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();
            symbolType type = symTab->lookup((yyvsp[0].expr)->loc)->type;
            if(type.type == ARRAY) {
                string t = symTab->gentemp(type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                emit(t, t, "1", ADD);
                emit((yyvsp[0].expr)->loc, t, *((yyvsp[0].expr)->folder), ARR_IND_ANS);
                (yyval.expr)->loc = symTab->gentemp(symTab->lookup((yyvsp[0].expr)->loc)->type.nextType);
            }
            else {
                emit((yyvsp[0].expr)->loc, (yyvsp[0].expr)->loc, "1", ADD);                       // Increment the value
                (yyval.expr)->loc = symTab->gentemp(symTab->lookup((yyvsp[0].expr)->loc)->type.type);
            }
            (yyval.expr)->loc = symTab->gentemp(symTab->lookup((yyvsp[0].expr)->loc)->type.type);
            emit((yyval.expr)->loc, (yyvsp[0].expr)->loc, "", ASSIGN);                         // Assign the value
        }
#line 1923 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 22: /* unary_expression: DECREMENT unary_expression  */
#line 305 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();
            symbolType type = symTab->lookup((yyvsp[0].expr)->loc)->type;
            if(type.type == ARRAY) {
                string t = symTab->gentemp(type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                emit(t, t, "1", SUB);
                emit((yyvsp[0].expr)->loc, t, *((yyvsp[0].expr)->folder), ARR_IND_ANS);
                (yyval.expr)->loc = symTab->gentemp(symTab->lookup((yyvsp[0].expr)->loc)->type.nextType);
            }
            else {
                emit((yyvsp[0].expr)->loc, (yyvsp[0].expr)->loc, "1", SUB);                       // Decrement the value
                (yyval.expr)->loc = symTab->gentemp(symTab->lookup((yyvsp[0].expr)->loc)->type.type);
            }
            emit((yyval.expr)->loc, (yyvsp[0].expr)->loc, "", ASSIGN);                         // Assign the value
        }
#line 1944 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 23: /* unary_expression: unary_operator cast_expression  */
#line 322 "ass6_21CS30011_21CS30036.y"
        {
            if((yyvsp[-1].charval) == '&'){
                (yyval.expr) = new expression();
                (yyval.expr)->loc = symTab->gentemp(POINTER);                 // Generate temporary of the same base type
                emit((yyval.expr)->loc, (yyvsp[0].expr)->loc, "", REFERENCE);          // Emit the quad
            }
            else if((yyvsp[-1].charval) == '*'){
                (yyval.expr) = new expression();
                (yyval.expr)->loc = symTab->gentemp(INT);                     // Generate temporary of the same base type
                (yyval.expr)->fold = 1;
                (yyval.expr)->folder = new string((yyvsp[0].expr)->loc);
                emit((yyval.expr)->loc, (yyvsp[0].expr)->loc, "", DEREFERENCE);        // Emit the quad
            }
            else if((yyvsp[-1].charval) == '-'){
                (yyval.expr) = new expression();
                (yyval.expr)->loc = symTab->gentemp();                        // Generate temporary of the same base type
                emit((yyval.expr)->loc, (yyvsp[0].expr)->loc, "", U_MINUS);            // Emit the quad
            }
            else if((yyvsp[-1].charval) == '!'){
                (yyval.expr) = new expression();
                (yyval.expr)->loc = symTab->gentemp(INT);                     // Generate temporary of the same base type
                int temp = nextInstr + 2;
                emit(to_string(temp), (yyvsp[0].expr)->loc, "0", GOTO_EQ);   // Emit the quads
                temp = nextInstr + 3;
                emit(to_string(temp), "", "", GOTO);
                emit((yyval.expr)->loc, "1", "", ASSIGN);
                temp = nextInstr + 2;
                emit(to_string(temp), "", "", GOTO);
                emit((yyval.expr)->loc, "0", "", ASSIGN);
            }
        }
#line 1980 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 24: /* unary_expression: SIZEOF unary_expression  */
#line 354 "ass6_21CS30011_21CS30036.y"
        {}
#line 1986 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE  */
#line 356 "ass6_21CS30011_21CS30036.y"
        {}
#line 1992 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 26: /* unary_operator: BITWISE_AND  */
#line 361 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.charval) = '&';
        }
#line 2000 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 27: /* unary_operator: MULTIPLY  */
#line 365 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.charval) = '*';
        }
#line 2008 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 28: /* unary_operator: ADD_  */
#line 369 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.charval) = '+';
        }
#line 2016 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 29: /* unary_operator: SUBTRACT  */
#line 373 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.charval) = '-';
        }
#line 2024 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 30: /* unary_operator: BITWISE_NOR  */
#line 377 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.charval) = '~';
        }
#line 2032 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 31: /* unary_operator: NOT  */
#line 381 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.charval) = '!';
        }
#line 2040 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 32: /* cast_expression: unary_expression  */
#line 388 "ass6_21CS30011_21CS30036.y"
        {}
#line 2046 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 33: /* cast_expression: PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE cast_expression  */
#line 390 "ass6_21CS30011_21CS30036.y"
        {}
#line 2052 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 34: /* multiplicative_expression: cast_expression  */
#line 395 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();                                  // Generate new expression
            symbolType tp = symTab->lookup((yyvsp[0].expr)->loc)->type;
            if(tp.type == ARRAY) {                                  // If the type is an array
                string t = symTab->gentemp(tp.nextType);                // Generate a temporary
                if((yyvsp[0].expr)->folder != NULL) {
                    emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);   // Emit the necessary quad
                    (yyvsp[0].expr)->loc = t;
                    (yyvsp[0].expr)->type = tp.nextType;
                    (yyval.expr) = (yyvsp[0].expr);
                }
                else
                    (yyval.expr) = (yyvsp[0].expr);        // Simple assignment
            }
            else
                (yyval.expr) = (yyvsp[0].expr);            // Simple assignment
        }
#line 2074 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression MULTIPLY cast_expression  */
#line 413 "ass6_21CS30011_21CS30036.y"
        {   
            // Indicates multiplication
            (yyval.expr) = new expression();
            symbol* one = symTab->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = symTab->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = symTab->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = symTab->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_BRAC);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }

            // Assign the result of the multiplication to the higher data type
            dataTypes final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expr)->loc = symTab->gentemp(final);                       // Store the final result in a temporary
            emit((yyval.expr)->loc, (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, MULT);
        }
#line 2102 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression DIVIDE cast_expression  */
#line 437 "ass6_21CS30011_21CS30036.y"
        {
            // Indicates division
            (yyval.expr) = new expression();
            symbol* one = symTab->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = symTab->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = symTab->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = symTab->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_BRAC);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }

            // Assign the result of the division to the higher data type
            dataTypes final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expr)->loc = symTab->gentemp(final);                       // Store the final result in a temporary
            emit((yyval.expr)->loc, (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, DIV);
        }
#line 2130 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 461 "ass6_21CS30011_21CS30036.y"
        {
            // Indicates modulo
            (yyval.expr) = new expression();
            symbol* one = symTab->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = symTab->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = symTab->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = symTab->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_BRAC);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }

            // Assign the result of the modulo to the higher data type
            dataTypes final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expr)->loc = symTab->gentemp(final);                       // Store the final result in a temporary
            emit((yyval.expr)->loc, (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, MOD);
        }
#line 2158 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 38: /* additive_expression: multiplicative_expression  */
#line 488 "ass6_21CS30011_21CS30036.y"
        {}
#line 2164 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 39: /* additive_expression: additive_expression ADD_ multiplicative_expression  */
#line 490 "ass6_21CS30011_21CS30036.y"
        {   
            // Indicates addition
            (yyval.expr) = new expression();
            symbol* one = symTab->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = symTab->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = symTab->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = symTab->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_BRAC);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }

            // Assign the result of the addition to the higher data type
            dataTypes final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expr)->loc = symTab->gentemp(final);                       // Store the final result in a temporary
            emit((yyval.expr)->loc, (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, ADD);
        }
#line 2192 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 40: /* additive_expression: additive_expression SUBTRACT multiplicative_expression  */
#line 514 "ass6_21CS30011_21CS30036.y"
        {
            // Indicates subtraction
            (yyval.expr) = new expression();
            symbol* one = symTab->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = symTab->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = symTab->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = symTab->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_BRAC);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }

            // Assign the result of the subtraction to the higher data type
            dataTypes final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expr)->loc = symTab->gentemp(final);                       // Store the final result in a temporary
            emit((yyval.expr)->loc, (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, SUB);
        }
#line 2220 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 41: /* shift_expression: additive_expression  */
#line 541 "ass6_21CS30011_21CS30036.y"
        {}
#line 2226 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 42: /* shift_expression: shift_expression LSHIFT additive_expression  */
#line 543 "ass6_21CS30011_21CS30036.y"
        {}
#line 2232 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 43: /* shift_expression: shift_expression RSHIFT additive_expression  */
#line 545 "ass6_21CS30011_21CS30036.y"
        {}
#line 2238 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 44: /* relational_expression: shift_expression  */
#line 550 "ass6_21CS30011_21CS30036.y"
        {}
#line 2244 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 45: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 552 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();
            symbol* one = symTab->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = symTab->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = symTab->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = symTab->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_BRAC);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = symTab->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextInstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_LT);                // Emit "if x < y goto XXXX"
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextInstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto XXXX"
        }
#line 2275 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 46: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 579 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();
            symbol* one = symTab->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = symTab->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = symTab->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = symTab->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_BRAC);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = symTab->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextInstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_GT);                // Emit "if x > y goto XXXX"
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextInstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto XXXX"
        }
#line 2306 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_THAN_EQUAL shift_expression  */
#line 606 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();
            symbol* one = symTab->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = symTab->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = symTab->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = symTab->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_BRAC);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = symTab->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextInstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_LTE);               // Emit "if x <= y goto XXXX"
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextInstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto XXXX"
        }
#line 2337 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_THAN_EQUAL shift_expression  */
#line 633 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();
            symbol* one = symTab->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = symTab->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = symTab->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = symTab->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_BRAC);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = symTab->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextInstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_GTE);               // Emit "if x >= y goto XXXX"
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextInstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto XXXX"
        }
#line 2368 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 49: /* equality_expression: relational_expression  */
#line 663 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();
            (yyval.expr) = (yyvsp[0].expr);                // Simple assignment
        }
#line 2377 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 50: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 668 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();
            symbol* one = symTab->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = symTab->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = symTab->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = symTab->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_BRAC);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = symTab->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextInstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_EQ);                // Emit "if x == y goto XXXX"
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextInstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto XXXX"
        }
#line 2408 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 51: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 695 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();
            symbol* one = symTab->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = symTab->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = symTab->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IND_BRAC);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = symTab->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_BRAC);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = symTab->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextInstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_NEQ);               // Emit "if x != y goto XXXX"
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextInstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto XXXX"
        }
#line 2439 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 52: /* and_expression: equality_expression  */
#line 725 "ass6_21CS30011_21CS30036.y"
        {}
#line 2445 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 53: /* and_expression: and_expression BITWISE_AND equality_expression  */
#line 727 "ass6_21CS30011_21CS30036.y"
        {}
#line 2451 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 54: /* exclusive_or_expression: and_expression  */
#line 732 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2459 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 55: /* exclusive_or_expression: exclusive_or_expression BITWISE_XOR and_expression  */
#line 736 "ass6_21CS30011_21CS30036.y"
        {}
#line 2465 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 56: /* inclusive_or_expression: exclusive_or_expression  */
#line 741 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();
            (yyval.expr) = (yyvsp[0].expr);                // Simple assignment
        }
#line 2474 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 57: /* inclusive_or_expression: inclusive_or_expression BITWISE_OR exclusive_or_expression  */
#line 746 "ass6_21CS30011_21CS30036.y"
        {}
#line 2480 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 58: /* logical_and_expression: inclusive_or_expression  */
#line 751 "ass6_21CS30011_21CS30036.y"
        {}
#line 2486 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 59: /* logical_and_expression: logical_and_expression LOGICAL_AND M inclusive_or_expression  */
#line 753 "ass6_21CS30011_21CS30036.y"
        {
            
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].expr)->instr);                     // Backpatching
            (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);    // Generate falselist by merging the falselists of $1 and $4
            (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                            // Generate truelist from truelist of $4
            (yyval.expr)->type = BOOL;                                        // Set the type of the expression to boolean
        }
#line 2498 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 60: /* logical_or_expression: logical_and_expression  */
#line 764 "ass6_21CS30011_21CS30036.y"
        {}
#line 2504 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 61: /* logical_or_expression: logical_or_expression LOGICAL_OR M logical_and_expression  */
#line 766 "ass6_21CS30011_21CS30036.y"
        {
            backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].expr)->instr);                    // Backpatching
            (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);       // Generate falselist by merging the falselists of $1 and $4
            (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;                          // Generate truelist from truelist of $4
            (yyval.expr)->type = BOOL;                                        // Set the type of the expression to boolean
        }
#line 2515 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 62: /* conditional_expression: logical_or_expression  */
#line 776 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2523 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 63: /* conditional_expression: logical_or_expression N QUESTION_MARK M expression N COLON M conditional_expression  */
#line 780 "ass6_21CS30011_21CS30036.y"
        {   
            
            symbol* one = symTab->lookup((yyvsp[-4].expr)->loc);
            (yyval.expr)->loc = symTab->gentemp(one->type.type);      // Create a temporary for the expression
            (yyval.expr)->type = one->type.type;
            emit((yyval.expr)->loc, (yyvsp[0].expr)->loc, "", ASSIGN);         // Assign the conditional expression
            list<int> temp = makelist(nextInstr);
            emit("", "", "", GOTO);                     // Prevent fall-through
            backpatch((yyvsp[-3].expr)->nextlist, nextInstr);         // Backpatch with nextInstr
            emit((yyval.expr)->loc, (yyvsp[-4].expr)->loc, "", ASSIGN);
            temp = merge(temp, makelist(nextInstr));
            emit("", "", "", GOTO);                     // Prevent fall-through
            backpatch((yyvsp[-7].expr)->nextlist, nextInstr);         // Backpatch with nextInstr
            convertIntToBool((yyvsp[-8].expr));                       // Convert the expression to boolean
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].expr)->instr);         // When $1 is true, control goes to $4 (expression)
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].expr)->instr);        // When $1 is false, control goes to $8 (conditional_expression)
            backpatch((yyvsp[-7].expr)->nextlist, nextInstr);         // Backpatch with nextInstr
        }
#line 2546 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 64: /* M: %empty  */
#line 801 "ass6_21CS30011_21CS30036.y"
        {   
            // Stores the next instruction value, and helps in backpatching
            (yyval.expr) = new expression();
            (yyval.expr)->instr = nextInstr;
        }
#line 2556 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 65: /* N: %empty  */
#line 809 "ass6_21CS30011_21CS30036.y"
        {
            // Helps in control flow
            (yyval.expr) = new expression();
            (yyval.expr)->nextlist = makelist(nextInstr);
            emit("", "", "", GOTO);
        }
#line 2567 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 66: /* assignment_expression: conditional_expression  */
#line 819 "ass6_21CS30011_21CS30036.y"
        {}
#line 2573 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 67: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 821 "ass6_21CS30011_21CS30036.y"
        {
            symbol* sym1 = symTab->lookup((yyvsp[-2].expr)->loc);         // Get the first operand from the symbol table
            symbol* sym2 = symTab->lookup((yyvsp[0].expr)->loc);         // Get the second operand from the symbol table
            if((yyvsp[-2].expr)->fold == 0) {
                if(sym1->type.type != ARRAY)
                    emit((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, "", ASSIGN);
                else
                    emit((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IND_ANS);
            }
            else
                emit(*((yyvsp[-2].expr)->folder), (yyvsp[0].expr)->loc, "", L_DEREF);
            (yyval.expr) = (yyvsp[-2].expr);        // Assignment 
        }
#line 2591 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 68: /* assignment_operator: ASSIGN_  */
#line 838 "ass6_21CS30011_21CS30036.y"
        {}
#line 2597 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 69: /* assignment_operator: MULTIPLY_ASSIGN  */
#line 840 "ass6_21CS30011_21CS30036.y"
        {}
#line 2603 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 70: /* assignment_operator: DIVIDE_ASSIGN  */
#line 842 "ass6_21CS30011_21CS30036.y"
        {}
#line 2609 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 71: /* assignment_operator: MODULO_ASSIGN  */
#line 844 "ass6_21CS30011_21CS30036.y"
        {}
#line 2615 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 72: /* assignment_operator: ADD_ASSIGN  */
#line 846 "ass6_21CS30011_21CS30036.y"
        {}
#line 2621 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 73: /* assignment_operator: SUBTRACT_ASSIGN  */
#line 848 "ass6_21CS30011_21CS30036.y"
        {}
#line 2627 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 74: /* assignment_operator: LSHIFT_ASSIGN  */
#line 850 "ass6_21CS30011_21CS30036.y"
        {}
#line 2633 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 75: /* assignment_operator: RSHIFT_ASSIGN  */
#line 852 "ass6_21CS30011_21CS30036.y"
        {}
#line 2639 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 76: /* assignment_operator: AND_ASSIGN  */
#line 854 "ass6_21CS30011_21CS30036.y"
        {}
#line 2645 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 77: /* assignment_operator: XOR_ASSIGN  */
#line 856 "ass6_21CS30011_21CS30036.y"
        {}
#line 2651 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 78: /* assignment_operator: OR_ASSIGN  */
#line 858 "ass6_21CS30011_21CS30036.y"
        {}
#line 2657 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 79: /* expression: assignment_expression  */
#line 863 "ass6_21CS30011_21CS30036.y"
        {}
#line 2663 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 80: /* expression: expression COMMA assignment_expression  */
#line 865 "ass6_21CS30011_21CS30036.y"
        {}
#line 2669 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 81: /* constant_expression: conditional_expression  */
#line 870 "ass6_21CS30011_21CS30036.y"
        {}
#line 2675 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 82: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 875 "ass6_21CS30011_21CS30036.y"
        {
            dataTypes currType = (yyvsp[-2].types);
            int currSize = -1;
            // Assign correct size for the data type
            if(currType == INT) currSize = 4;
            else if(currType == CHAR) currSize = 1;
            else if(currType == FLOAT) currSize = 8;
            vector<declaration*> decs = *((yyvsp[-1].decList));
            for(vector<declaration*>::iterator it = decs.begin(); it != decs.end(); it++) {
                declaration* currDec = *it;
                if(currDec->type == FUNCTION) {
                    symTab = &symTabGlobal;
                    emit(currDec->name, "", "", FUNC_END);
                    symbol* one = symTab->lookup(currDec->name);        // Create an entry for the function
                    symbol* two = one->nestedTable->lookup("RETVAL", currType, currDec->pointers);
                    one->size = 0;
                    one->initVal = NULL;
                    continue;
                }

                symbol* three = symTab->lookup(currDec->name, currType);        // Create an entry for the variable in the symbol table
                three->nestedTable = NULL;
                if(currDec->li == vector<int>() && currDec->pointers == 0) {
                    three->type.type = currType;
                    three->size = currSize;
                    if(currDec->initVal != NULL) {
                        string rval = currDec->initVal->loc;
                        emit(three->name, rval, "", ASSIGN);
                        three->initVal = symTab->lookup(rval)->initVal;
                    }
                    else three->initVal = NULL;
                }
                else if(currDec->li != vector<int>()) {         // Handle array types
                    three->type.type = ARRAY;
                    three->type.nextType = currType;
                    three->type.dimension = currDec->li;
                    vector<int> temp = three->type.dimension;
                    int sz = currSize;
                    for(int i = 0; i < (int)temp.size(); i++) sz *= temp[i];
                    symTab->offset += sz;
                    three->size = sz;
                    symTab->offset -= 4;
                }
                else if(currDec->pointers != 0) {               // Handle pointer types
                    three->type.type = POINTER;
                    three->type.nextType = currType;
                    three->type.pointers = currDec->pointers;
                    symTab->offset += (8 - currSize);
                    three->size = 8;
                }
            }
        }
#line 2732 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 83: /* declaration: declaration_specifiers SEMICOLON  */
#line 928 "ass6_21CS30011_21CS30036.y"
        {}
#line 2738 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 84: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 933 "ass6_21CS30011_21CS30036.y"
        {}
#line 2744 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 85: /* declaration_specifiers: storage_class_specifier  */
#line 935 "ass6_21CS30011_21CS30036.y"
        {}
#line 2750 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 86: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 937 "ass6_21CS30011_21CS30036.y"
        {}
#line 2756 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 87: /* declaration_specifiers: type_specifier  */
#line 939 "ass6_21CS30011_21CS30036.y"
        {}
#line 2762 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 88: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 941 "ass6_21CS30011_21CS30036.y"
        {}
#line 2768 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 89: /* declaration_specifiers: type_qualifier  */
#line 943 "ass6_21CS30011_21CS30036.y"
        {}
#line 2774 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 90: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 945 "ass6_21CS30011_21CS30036.y"
        {}
#line 2780 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 91: /* declaration_specifiers: function_specifier  */
#line 947 "ass6_21CS30011_21CS30036.y"
        {}
#line 2786 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 92: /* init_declarator_list: init_declarator  */
#line 952 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.decList) = new vector<declaration*>;      // Create a vector of declarations and add $1 to it
            (yyval.decList)->push_back((yyvsp[0].dec));
        }
#line 2795 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 957 "ass6_21CS30011_21CS30036.y"
        {
            (yyvsp[-2].decList)->push_back((yyvsp[0].dec));                  // Add $3 to the vector of declarations
            (yyval.decList) = (yyvsp[-2].decList);
        }
#line 2804 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 94: /* init_declarator: declarator  */
#line 965 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.dec) = (yyvsp[0].dec);
            (yyval.dec)->initVal = NULL;         // Initialize the initVal to NULL as no initialization is done
        }
#line 2813 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 95: /* init_declarator: declarator ASSIGN_ initializer  */
#line 970 "ass6_21CS30011_21CS30036.y"
        {   
            (yyval.dec) = (yyvsp[-2].dec);
            (yyval.dec)->initVal = (yyvsp[0].expr);           // Initialize the initVal to the value provided
        }
#line 2822 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 96: /* storage_class_specifier: EXTERN  */
#line 978 "ass6_21CS30011_21CS30036.y"
        {}
#line 2828 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 97: /* storage_class_specifier: STATIC  */
#line 980 "ass6_21CS30011_21CS30036.y"
        {}
#line 2834 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 98: /* storage_class_specifier: AUTO  */
#line 982 "ass6_21CS30011_21CS30036.y"
        {}
#line 2840 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 99: /* storage_class_specifier: REGISTER  */
#line 984 "ass6_21CS30011_21CS30036.y"
        {}
#line 2846 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 100: /* type_specifier: VOID_  */
#line 989 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.types) = VOID;
        }
#line 2854 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 101: /* type_specifier: CHAR_  */
#line 993 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.types) = CHAR;
        }
#line 2862 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 102: /* type_specifier: SHORT  */
#line 997 "ass6_21CS30011_21CS30036.y"
        {}
#line 2868 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 103: /* type_specifier: INT_  */
#line 999 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.types) = INT; 
        }
#line 2876 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 104: /* type_specifier: LONG  */
#line 1003 "ass6_21CS30011_21CS30036.y"
        {}
#line 2882 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 105: /* type_specifier: FLOAT_  */
#line 1005 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.types) = FLOAT;
        }
#line 2890 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 106: /* type_specifier: DOUBLE  */
#line 1009 "ass6_21CS30011_21CS30036.y"
        {}
#line 2896 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 107: /* type_specifier: SIGNED  */
#line 1011 "ass6_21CS30011_21CS30036.y"
        {}
#line 2902 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 108: /* type_specifier: UNSIGNED  */
#line 1013 "ass6_21CS30011_21CS30036.y"
        {}
#line 2908 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 109: /* type_specifier: BOOL_  */
#line 1015 "ass6_21CS30011_21CS30036.y"
        {}
#line 2914 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 110: /* type_specifier: COMPLEX  */
#line 1017 "ass6_21CS30011_21CS30036.y"
        {}
#line 2920 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 111: /* type_specifier: IMAGINARY  */
#line 1019 "ass6_21CS30011_21CS30036.y"
        {}
#line 2926 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 112: /* type_specifier: enum_specifier  */
#line 1021 "ass6_21CS30011_21CS30036.y"
        {}
#line 2932 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 113: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 1026 "ass6_21CS30011_21CS30036.y"
        {}
#line 2938 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 1028 "ass6_21CS30011_21CS30036.y"
        {}
#line 2944 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 115: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 1033 "ass6_21CS30011_21CS30036.y"
        {}
#line 2950 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 116: /* specifier_qualifier_list_opt: %empty  */
#line 1035 "ass6_21CS30011_21CS30036.y"
        {}
#line 2956 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 117: /* enum_specifier: ENUM CURLY_BRACE_OPEN enumerator_list CURLY_BRACE_CLOSE  */
#line 1040 "ass6_21CS30011_21CS30036.y"
        {}
#line 2962 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 118: /* enum_specifier: ENUM IDENTIFIER CURLY_BRACE_OPEN enumerator_list CURLY_BRACE_CLOSE  */
#line 1042 "ass6_21CS30011_21CS30036.y"
        {}
#line 2968 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 119: /* enum_specifier: ENUM IDENTIFIER CURLY_BRACE_OPEN enumerator_list COMMA CURLY_BRACE_CLOSE  */
#line 1044 "ass6_21CS30011_21CS30036.y"
        {}
#line 2974 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 120: /* enum_specifier: ENUM IDENTIFIER  */
#line 1046 "ass6_21CS30011_21CS30036.y"
        {}
#line 2980 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 121: /* enumerator_list: enumerator  */
#line 1051 "ass6_21CS30011_21CS30036.y"
        {}
#line 2986 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 122: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 1053 "ass6_21CS30011_21CS30036.y"
        {}
#line 2992 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 123: /* enumerator: IDENTIFIER  */
#line 1058 "ass6_21CS30011_21CS30036.y"
        {}
#line 2998 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 124: /* enumerator: IDENTIFIER ASSIGN_ constant_expression  */
#line 1060 "ass6_21CS30011_21CS30036.y"
        {}
#line 3004 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 125: /* type_qualifier: CONST  */
#line 1065 "ass6_21CS30011_21CS30036.y"
        {}
#line 3010 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 126: /* type_qualifier: RESTRICT  */
#line 1067 "ass6_21CS30011_21CS30036.y"
        {}
#line 3016 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 127: /* type_qualifier: VOLATILE  */
#line 1069 "ass6_21CS30011_21CS30036.y"
        {}
#line 3022 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 128: /* function_specifier: INLINE  */
#line 1074 "ass6_21CS30011_21CS30036.y"
        {}
#line 3028 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 129: /* declarator: pointer direct_declarator  */
#line 1079 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.dec) = (yyvsp[0].dec);
            (yyval.dec)->pointers = (yyvsp[-1].intval);
        }
#line 3037 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 130: /* declarator: direct_declarator  */
#line 1084 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.dec) = (yyvsp[0].dec);
            (yyval.dec)->pointers = 0;
        }
#line 3046 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 131: /* direct_declarator: IDENTIFIER  */
#line 1092 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.dec) = new declaration();
            (yyval.dec)->name = *((yyvsp[0].str));
        }
#line 3055 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 132: /* direct_declarator: PARENTHESIS_OPEN declarator PARENTHESIS_CLOSE  */
#line 1097 "ass6_21CS30011_21CS30036.y"
        {}
#line 3061 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN type_qualifier_list_opt SQUARE_BRACE_CLOSE  */
#line 1099 "ass6_21CS30011_21CS30036.y"
        {
            (yyvsp[-3].dec)->type = ARRAY;       // Array type
            (yyvsp[-3].dec)->nextType = INT;     // Array of ints
            (yyval.dec) = (yyvsp[-3].dec);
            (yyval.dec)->li.push_back(0);
        }
#line 3072 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN type_qualifier_list_opt assignment_expression SQUARE_BRACE_CLOSE  */
#line 1106 "ass6_21CS30011_21CS30036.y"
        {
            (yyvsp[-4].dec)->type = ARRAY;       // Array type
            (yyvsp[-4].dec)->nextType = INT;     // Array of ints
            (yyval.dec) = (yyvsp[-4].dec);
            int index = symTab->lookup((yyvsp[-1].expr)->loc)->initVal->i;
            (yyval.dec)->li.push_back(index);
        }
#line 3084 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN STATIC type_qualifier_list assignment_expression SQUARE_BRACE_CLOSE  */
#line 1114 "ass6_21CS30011_21CS30036.y"
        {}
#line 3090 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACE_CLOSE  */
#line 1116 "ass6_21CS30011_21CS30036.y"
        {}
#line 3096 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN type_qualifier_list_opt MULTIPLY SQUARE_BRACE_CLOSE  */
#line 1118 "ass6_21CS30011_21CS30036.y"
        {
            (yyvsp[-4].dec)->type = POINTER;     // Pointer type
            (yyvsp[-4].dec)->nextType = INT;
            (yyval.dec) = (yyvsp[-4].dec);
        }
#line 3106 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator PARENTHESIS_OPEN parameter_type_list_opt PARENTHESIS_CLOSE  */
#line 1124 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.dec) = (yyvsp[-3].dec);
            (yyval.dec)->type = FUNCTION;    // Function type
            symbol* funcData = symTab->lookup((yyval.dec)->name, (yyval.dec)->type);
            symbolTable* funcTable = new symbolTable();
            funcData->nestedTable = funcTable;
            vector<param*> paramList = *((yyvsp[-1].prmList));   // Get the parameter list
            for(int i = 0; i < (int)paramList.size(); i++) {
                param* curParam = paramList[i];
                if(curParam->type.type == ARRAY) {          // If the parameter is an array
                    funcTable->lookup(curParam->name, curParam->type.type);
                    funcTable->lookup(curParam->name)->type.nextType = INT;
                    funcTable->lookup(curParam->name)->type.dimension.push_back(0);
                }
                else if(curParam->type.type == POINTER) {   // If the parameter is a pointer
                    funcTable->lookup(curParam->name, curParam->type.type);
                    funcTable->lookup(curParam->name)->type.nextType = INT;
                    funcTable->lookup(curParam->name)->type.dimension.push_back(0);
                }
                else                                        // If the parameter is a anything other than an array or a pointer
                    funcTable->lookup(curParam->name, curParam->type.type);
            }
            symTab = funcTable;         // Set the pointer to the symbol table to the function's symbol table
            emit((yyval.dec)->name, "", "", FUNC_BEGIN);
        }
#line 3136 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator PARENTHESIS_OPEN identifier_list PARENTHESIS_CLOSE  */
#line 1150 "ass6_21CS30011_21CS30036.y"
        {}
#line 3142 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 140: /* parameter_type_list_opt: parameter_type_list  */
#line 1155 "ass6_21CS30011_21CS30036.y"
        {}
#line 3148 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 141: /* parameter_type_list_opt: %empty  */
#line 1157 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.prmList) = new vector<param*>;
        }
#line 3156 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 142: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1164 "ass6_21CS30011_21CS30036.y"
        {}
#line 3162 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 143: /* type_qualifier_list_opt: %empty  */
#line 1166 "ass6_21CS30011_21CS30036.y"
        {}
#line 3168 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 144: /* pointer: MULTIPLY type_qualifier_list  */
#line 1171 "ass6_21CS30011_21CS30036.y"
        {}
#line 3174 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 145: /* pointer: MULTIPLY  */
#line 1173 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.intval) = 1;
        }
#line 3182 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 146: /* pointer: MULTIPLY type_qualifier_list pointer  */
#line 1177 "ass6_21CS30011_21CS30036.y"
        {}
#line 3188 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 147: /* pointer: MULTIPLY pointer  */
#line 1179 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.intval) = 1 + (yyvsp[0].intval);
        }
#line 3196 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 148: /* type_qualifier_list: type_qualifier  */
#line 1186 "ass6_21CS30011_21CS30036.y"
        {}
#line 3202 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 149: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1188 "ass6_21CS30011_21CS30036.y"
        {}
#line 3208 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 152: /* parameter_list: parameter_declaration  */
#line 1198 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.prmList) = new vector<param*>;         // Create a new vector of params
            (yyval.prmList)->push_back((yyvsp[0].prm));              // Add the parameter to the vector
        }
#line 3217 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 153: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1203 "ass6_21CS30011_21CS30036.y"
        {
            (yyvsp[-2].prmList)->push_back((yyvsp[0].prm));              // Add the parameter to the vector
            (yyval.prmList) = (yyvsp[-2].prmList);
        }
#line 3226 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 154: /* parameter_declaration: declaration_specifiers declarator  */
#line 1211 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.prm) = new param();
            (yyval.prm)->name = (yyvsp[0].dec)->name;
            if((yyvsp[0].dec)->type == ARRAY) {
                (yyval.prm)->type.type = ARRAY;
                (yyval.prm)->type.nextType = (yyvsp[-1].types);
            }
            else if((yyvsp[0].dec)->pc != 0) {
                (yyval.prm)->type.type = POINTER;
                (yyval.prm)->type.nextType = (yyvsp[-1].types);
            }
            else
                (yyval.prm)->type.type = (yyvsp[-1].types);
        }
#line 3245 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 155: /* parameter_declaration: declaration_specifiers  */
#line 1226 "ass6_21CS30011_21CS30036.y"
        {}
#line 3251 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 156: /* identifier_list: IDENTIFIER  */
#line 1231 "ass6_21CS30011_21CS30036.y"
        {}
#line 3257 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 157: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1233 "ass6_21CS30011_21CS30036.y"
        {}
#line 3263 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 158: /* type_name: specifier_qualifier_list  */
#line 1238 "ass6_21CS30011_21CS30036.y"
        {}
#line 3269 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 159: /* initializer: assignment_expression  */
#line 1243 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);   // Simple assignment
        }
#line 3277 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 160: /* initializer: CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE  */
#line 1247 "ass6_21CS30011_21CS30036.y"
        {}
#line 3283 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 161: /* initializer: CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE  */
#line 1249 "ass6_21CS30011_21CS30036.y"
        {}
#line 3289 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 162: /* initializer_list: designation_opt initializer  */
#line 1254 "ass6_21CS30011_21CS30036.y"
        {}
#line 3295 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 163: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 1256 "ass6_21CS30011_21CS30036.y"
        {}
#line 3301 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 164: /* designation_opt: designation  */
#line 1261 "ass6_21CS30011_21CS30036.y"
        {}
#line 3307 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 165: /* designation_opt: %empty  */
#line 1263 "ass6_21CS30011_21CS30036.y"
        {}
#line 3313 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 166: /* designation: designator_list ASSIGN_  */
#line 1268 "ass6_21CS30011_21CS30036.y"
        {}
#line 3319 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 167: /* designator_list: designator  */
#line 1273 "ass6_21CS30011_21CS30036.y"
        {}
#line 3325 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 168: /* designator_list: designator_list designator  */
#line 1275 "ass6_21CS30011_21CS30036.y"
        {}
#line 3331 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 169: /* designator: SQUARE_BRACE_OPEN constant_expression SQUARE_BRACE_CLOSE  */
#line 1280 "ass6_21CS30011_21CS30036.y"
        {}
#line 3337 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 170: /* designator: DOT IDENTIFIER  */
#line 1282 "ass6_21CS30011_21CS30036.y"
        {}
#line 3343 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 171: /* statement: labeled_statement  */
#line 1287 "ass6_21CS30011_21CS30036.y"
        {}
#line 3349 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 177: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1297 "ass6_21CS30011_21CS30036.y"
        {}
#line 3355 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 178: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1299 "ass6_21CS30011_21CS30036.y"
        {}
#line 3361 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 179: /* labeled_statement: DEFAULT COLON statement  */
#line 1301 "ass6_21CS30011_21CS30036.y"
        {}
#line 3367 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 180: /* compound_statement: CURLY_BRACE_OPEN CURLY_BRACE_CLOSE  */
#line 1306 "ass6_21CS30011_21CS30036.y"
        {}
#line 3373 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 181: /* compound_statement: CURLY_BRACE_OPEN block_item_list CURLY_BRACE_CLOSE  */
#line 1308 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);
        }
#line 3381 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 182: /* block_item_list: block_item  */
#line 1315 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
            backpatch((yyvsp[0].expr)->nextlist, nextInstr);
        }
#line 3390 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 183: /* block_item_list: block_item_list M block_item  */
#line 1320 "ass6_21CS30011_21CS30036.y"
        {   
            
            (yyval.expr) = new expression();
            backpatch((yyvsp[-2].expr)->nextlist, (yyvsp[-1].expr)->instr);    // After $1, move to block_item via $2
            (yyval.expr)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 3401 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 184: /* block_item: declaration  */
#line 1330 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();   // Create new expression
        }
#line 3409 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 186: /* expression_statement: expression SEMICOLON  */
#line 1338 "ass6_21CS30011_21CS30036.y"
        {}
#line 3415 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 187: /* expression_statement: SEMICOLON  */
#line 1340 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();  // Create new expression
        }
#line 3423 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 188: /* selection_statement: IF PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE M statement N  */
#line 1347 "ass6_21CS30011_21CS30036.y"
        {
            
            backpatch((yyvsp[-4].expr)->nextlist, nextInstr);         // nextlist of N now has nextInstr
            convertIntToBool((yyvsp[-5].expr));                       // Convert expression to bool
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].expr)->instr);         // Backpatching - if expression is true, go to M
            (yyval.expr) = new expression();                      // Create new expression
            // Merge falselist of expression, nextlist of statement and nextlist of the last N
            (yyvsp[-1].expr)->nextlist = merge((yyvsp[0].expr)->nextlist, (yyvsp[-1].expr)->nextlist);
            (yyval.expr)->nextlist = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].expr)->nextlist);
        }
#line 3438 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 189: /* selection_statement: IF PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE M statement N ELSE M statement N  */
#line 1358 "ass6_21CS30011_21CS30036.y"
        {
            
            backpatch((yyvsp[-8].expr)->nextlist, nextInstr);         // nextlist of N now has nextInstr
            convertIntToBool((yyvsp[-9].expr));                       // Convert expression to bool
            backpatch((yyvsp[-9].expr)->truelist, (yyvsp[-6].expr)->instr);         // Backpatching - if expression is true, go to first M, else go to second M
            backpatch((yyvsp[-9].expr)->falselist, (yyvsp[-2].expr)->instr);
            (yyval.expr) = new expression();                      // Create new expression
            // Merge nextlist of statement, nextlist of N and nextlist of the last statement
            (yyval.expr)->nextlist = merge((yyvsp[-5].expr)->nextlist, (yyvsp[-4].expr)->nextlist);
            (yyval.expr)->nextlist = merge((yyval.expr)->nextlist, (yyvsp[-1].expr)->nextlist);
            (yyval.expr)->nextlist = merge((yyval.expr)->nextlist, (yyvsp[0].expr)->nextlist);
        }
#line 3455 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 190: /* selection_statement: SWITCH PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement  */
#line 1371 "ass6_21CS30011_21CS30036.y"
        {}
#line 3461 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 191: /* iteration_statement: WHILE M PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE M statement  */
#line 1376 "ass6_21CS30011_21CS30036.y"
        {   
            (yyval.expr) = new expression();                   // Create a new expression
            emit("", "", "", GOTO);
            backpatch(makelist(nextInstr - 1), (yyvsp[-6].expr)->instr);
            backpatch((yyvsp[-3].expr)->nextlist, nextInstr);
            convertIntToBool((yyvsp[-4].expr));                   // Convert expression to bool
            (yyval.expr)->nextlist = (yyvsp[-4].expr)->falselist;           // Exit loop if expression is false
            backpatch((yyvsp[-4].expr)->truelist, (yyvsp[-1].expr)->instr);     // Backpatching - if expression is true, go to M
            backpatch((yyvsp[0].expr)->nextlist, (yyvsp[-6].expr)->instr);     // Backpatching - go to the beginning of the loop
        }
#line 3476 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 192: /* iteration_statement: DO M statement M WHILE PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE SEMICOLON  */
#line 1387 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();                  // Create a new expression  
            backpatch((yyvsp[-2].expr)->nextlist, nextInstr);     // Backpatching 
            convertIntToBool((yyvsp[-3].expr));                   // Convert expression to bool
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-8].expr)->instr);     // Backpatching - if expression is true, go to M
            backpatch((yyvsp[-7].expr)->nextlist, (yyvsp[-6].expr)->instr);     // Backpatching - go to the beginning of the loop
            (yyval.expr)->nextlist = (yyvsp[-3].expr)->falselist;
        }
#line 3489 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 193: /* iteration_statement: FOR PARENTHESIS_OPEN expression_statement M expression_statement N M expression N PARENTHESIS_CLOSE M statement  */
#line 1396 "ass6_21CS30011_21CS30036.y"
        {
            (yyval.expr) = new expression();                   // Create a new expression
            emit("", "", "", GOTO);
            (yyvsp[0].expr)->nextlist = merge((yyvsp[0].expr)->nextlist, makelist(nextInstr - 1));
            backpatch((yyvsp[0].expr)->nextlist, (yyvsp[-5].expr)->instr);    // Backpatching - go to the beginning of the loop
            backpatch((yyvsp[-3].expr)->nextlist, (yyvsp[-8].expr)->instr);     
            backpatch((yyvsp[-6].expr)->nextlist, nextInstr);     
            convertIntToBool((yyvsp[-7].expr));                   // Convert expression to bool
            backpatch((yyvsp[-7].expr)->truelist, (yyvsp[-1].expr)->instr);    // Backpatching - if expression is true, go to M
            (yyval.expr)->nextlist = (yyvsp[-7].expr)->falselist;           // Exit loop if expression is false
        }
#line 3505 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 194: /* jump_statement: GOTO_ IDENTIFIER SEMICOLON  */
#line 1411 "ass6_21CS30011_21CS30036.y"
        {}
#line 3511 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 195: /* jump_statement: CONTINUE SEMICOLON  */
#line 1413 "ass6_21CS30011_21CS30036.y"
        {}
#line 3517 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 196: /* jump_statement: BREAK SEMICOLON  */
#line 1415 "ass6_21CS30011_21CS30036.y"
        {}
#line 3523 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 197: /* jump_statement: RETURN_ SEMICOLON  */
#line 1417 "ass6_21CS30011_21CS30036.y"
        {
            if(symTab->lookup("RETVAL")->type.type == VOID) {
                emit("", "", "", RETURN);           // Emit the quad when return type is void
            }
            (yyval.expr) = new expression();
        }
#line 3534 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 198: /* jump_statement: RETURN_ expression SEMICOLON  */
#line 1424 "ass6_21CS30011_21CS30036.y"
        {
            if(symTab->lookup("RETVAL")->type.type == symTab->lookup((yyvsp[-1].expr)->loc)->type.type) {
                emit((yyvsp[-1].expr)->loc, "", "", RETURN);      // Emit the quad when return type is not void
            }
            (yyval.expr) = new expression();
        }
#line 3545 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 199: /* translation_unit: external_declaration  */
#line 1434 "ass6_21CS30011_21CS30036.y"
        {}
#line 3551 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 200: /* translation_unit: translation_unit external_declaration  */
#line 1436 "ass6_21CS30011_21CS30036.y"
        {}
#line 3557 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 201: /* external_declaration: function_definition  */
#line 1441 "ass6_21CS30011_21CS30036.y"
        {}
#line 3563 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 202: /* external_declaration: declaration  */
#line 1443 "ass6_21CS30011_21CS30036.y"
        {}
#line 3569 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 203: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 1448 "ass6_21CS30011_21CS30036.y"
        {}
#line 3575 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 204: /* function_definition: function_prototype compound_statement  */
#line 1450 "ass6_21CS30011_21CS30036.y"
        {
            symTab = &symTabGlobal;                     // Reset the symbol table to global symbol table
            emit((yyvsp[-1].dec)->name, "", "", FUNC_END);
        }
#line 3584 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 205: /* function_prototype: declaration_specifiers declarator  */
#line 1458 "ass6_21CS30011_21CS30036.y"
        {
            dataTypes currType = (yyvsp[-1].types);
            int currSize = -1;
            if(currType == CHAR)
                currSize = 1;
            if(currType == INT)
                currSize = 4;
            if(currType == FLOAT)
                currSize = 8;
            declaration* currDec = (yyvsp[0].dec);
            symbol* sym = symTabGlobal.lookup(currDec->name);
            if(currDec->type == FUNCTION) {
                symbol* retval = sym->nestedTable->lookup("RETVAL", currType, currDec->pointers);   // Create entry for return value
                sym->size = 0;
                sym->initVal = NULL;
            }
            (yyval.dec) = (yyvsp[0].dec);
        }
#line 3607 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 206: /* declaration_list: declaration  */
#line 1480 "ass6_21CS30011_21CS30036.y"
        {}
#line 3613 "ass6_21CS30011_21CS30036.tab.c"
    break;

  case 207: /* declaration_list: declaration_list declaration  */
#line 1482 "ass6_21CS30011_21CS30036.y"
        {}
#line 3619 "ass6_21CS30011_21CS30036.tab.c"
    break;


#line 3623 "ass6_21CS30011_21CS30036.tab.c"

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

#line 1485 "ass6_21CS30011_21CS30036.y"


void yyerror(string s) {

    cout << "Error occurred: " << s << '\n';
    cout << "Unable to parse: " << yytext << '\n'; 
}
