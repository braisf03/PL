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
#line 1 "parser.y"

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colors.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;
void yyerror(const char* s);
extern int yylineno;
extern char* yytext;
int error_count = 0;

#line 87 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_SINGLE_COMMENT = 5,             /* SINGLE_COMMENT  */
  YYSYMBOL_MULTI_COMMENT = 6,              /* MULTI_COMMENT  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_PLUS = 13,                      /* PLUS  */
  YYSYMBOL_MINUS = 14,                     /* MINUS  */
  YYSYMBOL_TIMES = 15,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 16,                    /* DIVIDE  */
  YYSYMBOL_ASSIGN = 17,                    /* ASSIGN  */
  YYSYMBOL_EQ = 18,                        /* EQ  */
  YYSYMBOL_NEQ = 19,                       /* NEQ  */
  YYSYMBOL_LT = 20,                        /* LT  */
  YYSYMBOL_GT = 21,                        /* GT  */
  YYSYMBOL_LTE = 22,                       /* LTE  */
  YYSYMBOL_GTE = 23,                       /* GTE  */
  YYSYMBOL_INCREMENT = 24,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 25,                 /* DECREMENT  */
  YYSYMBOL_PLUS_ASSIGN = 26,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 27,              /* MINUS_ASSIGN  */
  YYSYMBOL_TIMES_ASSIGN = 28,              /* TIMES_ASSIGN  */
  YYSYMBOL_DIVIDE_ASSIGN = 29,             /* DIVIDE_ASSIGN  */
  YYSYMBOL_LPAREN = 30,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 31,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 32,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 33,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 34,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 35,                     /* COMMA  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_program = 37,                   /* program  */
  YYSYMBOL_functions = 38,                 /* functions  */
  YYSYMBOL_function = 39,                  /* function  */
  YYSYMBOL_parameters = 40,                /* parameters  */
  YYSYMBOL_parameter_list = 41,            /* parameter_list  */
  YYSYMBOL_statements = 42,                /* statements  */
  YYSYMBOL_statement = 43,                 /* statement  */
  YYSYMBOL_declaration = 44,               /* declaration  */
  YYSYMBOL_compound_assign = 45,           /* compound_assign  */
  YYSYMBOL_expression = 46,                /* expression  */
  YYSYMBOL_function_call = 47,             /* function_call  */
  YYSYMBOL_argument_list = 48,             /* argument_list  */
  YYSYMBOL_comment = 49                    /* comment  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   356

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  123

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    64,    68,    77,    84,    89,    97,   100,
     104,   109,   118,   122,   131,   135,   140,   152,   175,   180,
     185,   191,   210,   216,   223,   228,   235,   241,   246,   254,
     255,   256,   257,   261,   265,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   291,
     300,   304,   308,   313,   322,   327
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
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "IDENTIFIER",
  "SINGLE_COMMENT", "MULTI_COMMENT", "INT", "RETURN", "IF", "ELSE",
  "WHILE", "FOR", "PLUS", "MINUS", "TIMES", "DIVIDE", "ASSIGN", "EQ",
  "NEQ", "LT", "GT", "LTE", "GTE", "INCREMENT", "DECREMENT", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "TIMES_ASSIGN", "DIVIDE_ASSIGN", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "SEMICOLON", "COMMA", "$accept", "program",
  "functions", "function", "parameters", "parameter_list", "statements",
  "statement", "declaration", "compound_assign", "expression",
  "function_call", "argument_list", "comment", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,     5,    18,    -3,   -97,   -10,   -97,   -97,    41,    56,
      14,    32,   -97,   -97,    10,    61,   -97,   161,    65,   -97,
     315,   -97,   -97,    15,    -1,    40,    42,    45,    -1,    90,
     -97,   -97,   174,   -97,   -97,   -97,    -1,   -97,   -97,   -97,
     -97,   -97,   -97,    27,    -1,    39,    -9,    -2,   191,    -1,
      -1,    64,   293,   -97,   -97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   -97,   208,   -97,   -97,   -21,
     225,   -97,    -1,   -97,   -97,    43,   307,    74,   -97,    31,
      31,   -97,   -97,   333,   333,    37,    37,    37,    37,   -97,
     -97,    51,   -97,   242,   -97,    11,    47,    63,   -97,   -97,
     -97,   -97,   161,   161,    -1,   100,   110,   259,    72,   -97,
      -1,    52,   276,   161,    79,   141,    66,   -97,    54,    57,
     161,   151,   -97
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     8,     0,
       0,     9,    10,     7,     0,     0,     6,     0,     0,    33,
      34,    54,    55,     0,     0,     0,     0,     0,     0,     0,
      12,    14,     0,    48,    25,    11,     0,    46,    47,    29,
      30,    31,    32,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     5,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,    50,    51,     0,
       0,    28,     0,    27,    15,     0,     0,     0,    45,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    22,
      49,     0,    23,     0,    19,     0,     0,     0,    52,    53,
      26,    18,     0,     0,     0,     0,     0,     0,    16,    20,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,    21
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,   -97,    85,   -97,   -97,   -96,   -29,   -97,   -97,
     -23,   -97,   -97,   -97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    10,    11,    29,    30,    31,    44,
      32,    33,    69,    34
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      54,    48,    19,    47,     1,    52,   105,   106,    72,     5,
      90,    16,   101,    66,    91,    13,    45,   115,     6,    46,
       8,    70,    37,    38,   121,    73,    75,    76,    43,    28,
      67,    68,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    17,   102,    94,    14,    57,    58,     9,    93,
      55,    56,    57,    58,    98,    99,    55,    56,    57,    58,
      12,    59,    60,    61,    62,    63,    64,    15,    18,    35,
      49,    77,    50,    71,    95,    51,    54,    54,    97,   103,
     104,   107,   111,   116,   113,   119,    54,   112,     7,   120,
     118,     0,    54,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    19,    20,    21,    22,    23,    24,    25,
      28,    26,    27,    53,     0,     0,     0,     0,     0,     0,
      28,     0,     0,   108,     0,     0,     0,     0,     0,     0,
      28,     0,     0,   109,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    19,    20,    21,    22,    23,    24,
      25,    28,    26,    27,   117,     0,     0,     0,     0,     0,
       0,    28,     0,     0,   122,     0,     0,    55,    56,    57,
      58,    28,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    65,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    74,    59,    60,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    89,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    92,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,   100,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,   110,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
     114,    59,    60,    61,    62,    63,    64,     0,     0,     0,
      55,    56,    57,    58,    78,    59,    60,    61,    62,    63,
      64,     0,    36,     0,     0,     0,     0,     0,    96,    37,
      38,    39,    40,    41,    42,    43,    55,    56,    57,    58,
       0,     0,     0,    61,    62,    63,    64
};

static const yytype_int8 yycheck[] =
{
      29,    24,     3,     4,     7,    28,   102,   103,    17,     4,
      31,     1,     1,    36,    35,     1,     1,   113,     0,     4,
      30,    44,    24,    25,   120,    34,    49,    50,    30,    30,
       3,     4,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    32,    32,     1,    31,    15,    16,     7,    72,
      13,    14,    15,    16,     3,     4,    13,    14,    15,    16,
       4,    18,    19,    20,    21,    22,    23,    35,     7,     4,
      30,     7,    30,    34,    31,    30,   105,   106,     4,    32,
      17,   104,    10,     4,    32,    31,   115,   110,     3,    32,
      24,    -1,   121,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      30,    11,    12,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    33,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,     3,     4,     5,     6,     7,     8,
       9,    30,    11,    12,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    33,    -1,    -1,    13,    14,    15,
      16,    30,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    34,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    34,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    34,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    34,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    34,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    34,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      34,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      13,    14,    15,    16,    31,    18,    19,    20,    21,    22,
      23,    -1,    17,    -1,    -1,    -1,    -1,    -1,    31,    24,
      25,    26,    27,    28,    29,    30,    13,    14,    15,    16,
      -1,    -1,    -1,    20,    21,    22,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    37,    38,    39,     4,     0,    39,    30,     7,
      40,    41,     4,     1,    31,    35,     1,    32,     7,     3,
       4,     5,     6,     7,     8,     9,    11,    12,    30,    42,
      43,    44,    46,    47,    49,     4,    17,    24,    25,    26,
      27,    28,    29,    30,    45,     1,     4,     4,    46,    30,
      30,    30,    46,    33,    43,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    34,    46,     3,     4,    48,
      46,    34,    17,    34,    34,    46,    46,     7,    31,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    34,
      31,    35,    34,    46,     1,    31,    31,     4,     3,     4,
      34,     1,    32,    32,    17,    42,    42,    46,    33,    33,
      34,    10,    46,    32,    34,    42,     4,    33,    24,    31,
      32,    42,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    40,    40,
      41,    41,    42,    42,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    44,    44,    44,    45,
      45,    45,    45,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    47,
      48,    48,    48,    48,    49,    49
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     8,     6,     5,     0,     1,
       2,     4,     1,     2,     1,     3,     7,    11,     5,     4,
       7,    15,     4,     4,     2,     1,     5,     3,     3,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     4,
       1,     1,     3,     3,     1,     1
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
  case 2: /* program: functions  */
#line 56 "parser.y"
    {
        (yyval.sval) = (yyvsp[0].sval);
        printf("%s", (yyval.sval));
        free((yyval.sval));
    }
#line 1247 "parser.tab.c"
    break;

  case 3: /* functions: function  */
#line 65 "parser.y"
    {
        (yyval.sval) = (yyvsp[0].sval);
    }
#line 1255 "parser.tab.c"
    break;

  case 4: /* functions: functions function  */
#line 69 "parser.y"
    {
        asprintf(&(yyval.sval), "%s\n%s", (yyvsp[-1].sval), (yyvsp[0].sval));
        free((yyvsp[-1].sval));
        free((yyvsp[0].sval));
    }
#line 1265 "parser.tab.c"
    break;

  case 5: /* function: INT IDENTIFIER LPAREN parameters RPAREN LBRACE statements RBRACE  */
#line 78 "parser.y"
    {
        asprintf(&(yyval.sval), "let %s %s =\n%s;;\n", (yyvsp[-6].sval), (yyvsp[-4].sval), (yyvsp[-1].sval));
        free((yyvsp[-6].sval));
        free((yyvsp[-4].sval));
        free((yyvsp[-1].sval));
    }
#line 1276 "parser.tab.c"
    break;

  case 6: /* function: INT IDENTIFIER LPAREN parameters RPAREN error  */
#line 85 "parser.y"
    {
        yyerror(RED"Falta la llave de apertura '{' en la definición de la función");
        YYERROR;
    }
#line 1285 "parser.tab.c"
    break;

  case 7: /* function: INT IDENTIFIER LPAREN parameters error  */
#line 90 "parser.y"
    {
        yyerror(RED"Falta el paréntesis de cierre ')' en la definición de la función");
        YYERROR;
    }
#line 1294 "parser.tab.c"
    break;

  case 8: /* parameters: %empty  */
#line 97 "parser.y"
    {
        (yyval.sval) = strdup("()");
    }
#line 1302 "parser.tab.c"
    break;

  case 10: /* parameter_list: INT IDENTIFIER  */
#line 105 "parser.y"
    {
        asprintf(&(yyval.sval), "%s", (yyvsp[0].sval));
        free((yyvsp[0].sval));
    }
#line 1311 "parser.tab.c"
    break;

  case 11: /* parameter_list: parameter_list COMMA INT IDENTIFIER  */
#line 110 "parser.y"
    {
        asprintf(&(yyval.sval), "%s %s", (yyvsp[-3].sval), (yyvsp[0].sval));
        free((yyvsp[-3].sval));
        free((yyvsp[0].sval));
    }
#line 1321 "parser.tab.c"
    break;

  case 12: /* statements: statement  */
#line 119 "parser.y"
    {
        (yyval.sval) = (yyvsp[0].sval);
    }
#line 1329 "parser.tab.c"
    break;

  case 13: /* statements: statements statement  */
#line 123 "parser.y"
    {
        asprintf(&(yyval.sval), "%s%s", (yyvsp[-1].sval), (yyvsp[0].sval));
        free((yyvsp[-1].sval));
        free((yyvsp[0].sval));
    }
#line 1339 "parser.tab.c"
    break;

  case 14: /* statement: declaration  */
#line 132 "parser.y"
    {
        (yyval.sval) = (yyvsp[0].sval);
    }
#line 1347 "parser.tab.c"
    break;

  case 15: /* statement: RETURN expression SEMICOLON  */
#line 136 "parser.y"
    {
        asprintf(&(yyval.sval), "  %s\n", (yyvsp[-1].sval));
        free((yyvsp[-1].sval));
    }
#line 1356 "parser.tab.c"
    break;

  case 16: /* statement: IF LPAREN expression RPAREN LBRACE statements RBRACE  */
#line 141 "parser.y"
    {
        char* trimmed_statements = strdup((yyvsp[-1].sval));
        int len = strlen(trimmed_statements);
        if (len > 0 && trimmed_statements[len-1] == '\n') {
            trimmed_statements[len-1] = '\0';
        }
        asprintf(&(yyval.sval), "  if %s then\n%s\n  else ()\n", (yyvsp[-4].sval), trimmed_statements);
        free((yyvsp[-4].sval));
        free((yyvsp[-1].sval));
        free(trimmed_statements);
    }
#line 1372 "parser.tab.c"
    break;

  case 17: /* statement: IF LPAREN expression RPAREN LBRACE statements RBRACE ELSE LBRACE statements RBRACE  */
#line 153 "parser.y"
    {
        char* trimmed_if = strdup((yyvsp[-5].sval));
        char* trimmed_else = strdup((yyvsp[-1].sval));
        int len_if = strlen(trimmed_if);
        int len_else = strlen(trimmed_else);
        
        while (len_if > 0 && (trimmed_if[len_if-1] == '\n' || trimmed_if[len_if-1] == ';')) {
            trimmed_if[--len_if] = '\0';
        }
        
        if (len_else > 0 && trimmed_else[len_else-1] != ';') {
            trimmed_else = realloc(trimmed_else, len_else + 2);
            strcat(trimmed_else, ";");
        }
        
        asprintf(&(yyval.sval), "  if %s then\n%s\n  else\n%s\n", (yyvsp[-8].sval), trimmed_if, trimmed_else);
        free((yyvsp[-8].sval));
        free((yyvsp[-5].sval));
        free((yyvsp[-1].sval));
        free(trimmed_if);
        free(trimmed_else);
    }
#line 1399 "parser.tab.c"
    break;

  case 18: /* statement: IF LPAREN expression RPAREN error  */
#line 176 "parser.y"
    {
        yyerror(RED"Falta la llave de apertura '{' después de la condición del if");
        YYERROR;
    }
#line 1408 "parser.tab.c"
    break;

  case 19: /* statement: IF LPAREN expression error  */
#line 181 "parser.y"
    {
        yyerror(RED"Falta el paréntesis de cierre ')' en la condición del if");
        YYERROR;
    }
#line 1417 "parser.tab.c"
    break;

  case 20: /* statement: WHILE LPAREN expression RPAREN LBRACE statements RBRACE  */
#line 186 "parser.y"
    {
        asprintf(&(yyval.sval), "  while %s do\n%s  done;\n", (yyvsp[-4].sval), (yyvsp[-1].sval));
        free((yyvsp[-4].sval));
        free((yyvsp[-1].sval));
    }
#line 1427 "parser.tab.c"
    break;

  case 21: /* statement: FOR LPAREN INT IDENTIFIER ASSIGN expression SEMICOLON expression SEMICOLON IDENTIFIER INCREMENT RPAREN LBRACE statements RBRACE  */
#line 192 "parser.y"
    {
        char* start_value = (yyvsp[-9].sval);
        char* end_value = (yyvsp[-7].sval);
        char* limit = strchr(end_value, ' ');
        if (limit) {
            *limit = '\0';
            limit++;
            char* clean_limit = limit;
            while (*clean_limit && (*clean_limit == '<' || *clean_limit == '=' || *clean_limit == ' ')) {
                clean_limit++;
            }
            asprintf(&(yyval.sval), "  for %s = %s to %s do\n%s  done;\n", (yyvsp[-11].sval), start_value, clean_limit, (yyvsp[-1].sval));
        }
        free((yyvsp[-11].sval));
        free((yyvsp[-9].sval));
        free((yyvsp[-7].sval));
        free((yyvsp[-1].sval));
    }
#line 1450 "parser.tab.c"
    break;

  case 22: /* statement: IDENTIFIER ASSIGN expression SEMICOLON  */
#line 211 "parser.y"
    {
        asprintf(&(yyval.sval), "  %s := %s;\n", (yyvsp[-3].sval), (yyvsp[-1].sval));
        free((yyvsp[-3].sval));
        free((yyvsp[-1].sval));
    }
#line 1460 "parser.tab.c"
    break;

  case 23: /* statement: IDENTIFIER compound_assign expression SEMICOLON  */
#line 217 "parser.y"
    {
        asprintf(&(yyval.sval), "  %s := !%s %s %s;\n", (yyvsp[-3].sval), (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].sval));
        free((yyvsp[-3].sval));
        free((yyvsp[-2].sval));
        free((yyvsp[-1].sval));
    }
#line 1471 "parser.tab.c"
    break;

  case 24: /* statement: expression SEMICOLON  */
#line 224 "parser.y"
    {
        asprintf(&(yyval.sval), "  %s;\n", (yyvsp[-1].sval));
        free((yyvsp[-1].sval));
    }
#line 1480 "parser.tab.c"
    break;

  case 25: /* statement: comment  */
#line 229 "parser.y"
    {
        (yyval.sval) = (yyvsp[0].sval);
    }
#line 1488 "parser.tab.c"
    break;

  case 26: /* declaration: INT IDENTIFIER ASSIGN expression SEMICOLON  */
#line 236 "parser.y"
    {
        asprintf(&(yyval.sval), "  let %s = ref %s in\n", (yyvsp[-3].sval), (yyvsp[-1].sval));
        free((yyvsp[-3].sval));
        free((yyvsp[-1].sval));
    }
#line 1498 "parser.tab.c"
    break;

  case 27: /* declaration: INT IDENTIFIER SEMICOLON  */
#line 242 "parser.y"
    {
        asprintf(&(yyval.sval), "  let %s = ref 0 in\n", (yyvsp[-1].sval));
        free((yyvsp[-1].sval));
    }
#line 1507 "parser.tab.c"
    break;

  case 28: /* declaration: INT error SEMICOLON  */
#line 247 "parser.y"
    {
        yyerror(RED"Declaración de variable inválida");
        YYERROR;
    }
#line 1516 "parser.tab.c"
    break;

  case 29: /* compound_assign: PLUS_ASSIGN  */
#line 254 "parser.y"
                    { (yyval.sval) = strdup("+"); }
#line 1522 "parser.tab.c"
    break;

  case 30: /* compound_assign: MINUS_ASSIGN  */
#line 255 "parser.y"
                    { (yyval.sval) = strdup("-"); }
#line 1528 "parser.tab.c"
    break;

  case 31: /* compound_assign: TIMES_ASSIGN  */
#line 256 "parser.y"
                    { (yyval.sval) = strdup("*"); }
#line 1534 "parser.tab.c"
    break;

  case 32: /* compound_assign: DIVIDE_ASSIGN  */
#line 257 "parser.y"
                    { (yyval.sval) = strdup("/"); }
#line 1540 "parser.tab.c"
    break;

  case 33: /* expression: NUMBER  */
#line 262 "parser.y"
    {
        asprintf(&(yyval.sval), "%d", (yyvsp[0].ival));
    }
#line 1548 "parser.tab.c"
    break;

  case 34: /* expression: IDENTIFIER  */
#line 266 "parser.y"
    {
        if (strcmp((yyvsp[0].sval), "i") == 0) {
            (yyval.sval) = strdup((yyvsp[0].sval));
        } else {
            asprintf(&(yyval.sval), "!%s", (yyvsp[0].sval));
        }
        free((yyvsp[0].sval));
    }
#line 1561 "parser.tab.c"
    break;

  case 35: /* expression: expression PLUS expression  */
#line 274 "parser.y"
                                   { asprintf(&(yyval.sval), "%s + %s", (yyvsp[-2].sval), (yyvsp[0].sval)); free((yyvsp[-2].sval)); free((yyvsp[0].sval)); }
#line 1567 "parser.tab.c"
    break;

  case 36: /* expression: expression MINUS expression  */
#line 275 "parser.y"
                                   { asprintf(&(yyval.sval), "%s - %s", (yyvsp[-2].sval), (yyvsp[0].sval)); free((yyvsp[-2].sval)); free((yyvsp[0].sval)); }
#line 1573 "parser.tab.c"
    break;

  case 37: /* expression: expression TIMES expression  */
#line 276 "parser.y"
                                   { asprintf(&(yyval.sval), "%s * %s", (yyvsp[-2].sval), (yyvsp[0].sval)); free((yyvsp[-2].sval)); free((yyvsp[0].sval)); }
#line 1579 "parser.tab.c"
    break;

  case 38: /* expression: expression DIVIDE expression  */
#line 277 "parser.y"
                                   { asprintf(&(yyval.sval), "%s / %s", (yyvsp[-2].sval), (yyvsp[0].sval)); free((yyvsp[-2].sval)); free((yyvsp[0].sval)); }
#line 1585 "parser.tab.c"
    break;

  case 39: /* expression: expression EQ expression  */
#line 278 "parser.y"
                                   { asprintf(&(yyval.sval), "%s = %s", (yyvsp[-2].sval), (yyvsp[0].sval)); free((yyvsp[-2].sval)); free((yyvsp[0].sval)); }
#line 1591 "parser.tab.c"
    break;

  case 40: /* expression: expression NEQ expression  */
#line 279 "parser.y"
                                   { asprintf(&(yyval.sval), "%s <> %s", (yyvsp[-2].sval), (yyvsp[0].sval)); free((yyvsp[-2].sval)); free((yyvsp[0].sval)); }
#line 1597 "parser.tab.c"
    break;

  case 41: /* expression: expression LT expression  */
#line 280 "parser.y"
                                   { asprintf(&(yyval.sval), "%s < %s", (yyvsp[-2].sval), (yyvsp[0].sval)); free((yyvsp[-2].sval)); free((yyvsp[0].sval)); }
#line 1603 "parser.tab.c"
    break;

  case 42: /* expression: expression GT expression  */
#line 281 "parser.y"
                                   { asprintf(&(yyval.sval), "%s > %s", (yyvsp[-2].sval), (yyvsp[0].sval)); free((yyvsp[-2].sval)); free((yyvsp[0].sval)); }
#line 1609 "parser.tab.c"
    break;

  case 43: /* expression: expression LTE expression  */
#line 282 "parser.y"
                                   { asprintf(&(yyval.sval), "%s <= %s", (yyvsp[-2].sval), (yyvsp[0].sval)); free((yyvsp[-2].sval)); free((yyvsp[0].sval)); }
#line 1615 "parser.tab.c"
    break;

  case 44: /* expression: expression GTE expression  */
#line 283 "parser.y"
                                   { asprintf(&(yyval.sval), "%s >= %s", (yyvsp[-2].sval), (yyvsp[0].sval)); free((yyvsp[-2].sval)); free((yyvsp[0].sval)); }
#line 1621 "parser.tab.c"
    break;

  case 45: /* expression: LPAREN expression RPAREN  */
#line 284 "parser.y"
                                   { asprintf(&(yyval.sval), "(%s)", (yyvsp[-1].sval)); free((yyvsp[-1].sval)); }
#line 1627 "parser.tab.c"
    break;

  case 46: /* expression: IDENTIFIER INCREMENT  */
#line 285 "parser.y"
                                   { asprintf(&(yyval.sval), "(let temp = !%s in %s := temp + 1; temp)", (yyvsp[-1].sval), (yyvsp[-1].sval)); free((yyvsp[-1].sval)); }
#line 1633 "parser.tab.c"
    break;

  case 47: /* expression: IDENTIFIER DECREMENT  */
#line 286 "parser.y"
                                   { asprintf(&(yyval.sval), "(let temp = !%s in %s := temp - 1; temp)", (yyvsp[-1].sval), (yyvsp[-1].sval)); free((yyvsp[-1].sval)); }
#line 1639 "parser.tab.c"
    break;

  case 49: /* function_call: IDENTIFIER LPAREN argument_list RPAREN  */
#line 292 "parser.y"
    {
        asprintf(&(yyval.sval), "%s %s", (yyvsp[-3].sval), (yyvsp[-1].sval));
        free((yyvsp[-3].sval));
        free((yyvsp[-1].sval));
    }
#line 1649 "parser.tab.c"
    break;

  case 50: /* argument_list: NUMBER  */
#line 301 "parser.y"
    {
        asprintf(&(yyval.sval), "(ref %d)", (yyvsp[0].ival));
    }
#line 1657 "parser.tab.c"
    break;

  case 51: /* argument_list: IDENTIFIER  */
#line 305 "parser.y"
    {
        (yyval.sval) = strdup((yyvsp[0].sval));
    }
#line 1665 "parser.tab.c"
    break;

  case 52: /* argument_list: argument_list COMMA NUMBER  */
#line 309 "parser.y"
    {
        asprintf(&(yyval.sval), "%s (ref %d)", (yyvsp[-2].sval), (yyvsp[0].ival));
        free((yyvsp[-2].sval));
    }
#line 1674 "parser.tab.c"
    break;

  case 53: /* argument_list: argument_list COMMA IDENTIFIER  */
#line 314 "parser.y"
    {
        asprintf(&(yyval.sval), "%s %s", (yyvsp[-2].sval), (yyvsp[0].sval));
        free((yyvsp[-2].sval));
        free((yyvsp[0].sval));
    }
#line 1684 "parser.tab.c"
    break;

  case 54: /* comment: SINGLE_COMMENT  */
#line 323 "parser.y"
    {
        asprintf(&(yyval.sval), "  (* %s *)\n", (yyvsp[0].sval));
        free((yyvsp[0].sval));
    }
#line 1693 "parser.tab.c"
    break;

  case 55: /* comment: MULTI_COMMENT  */
#line 328 "parser.y"
    {
        asprintf(&(yyval.sval), "  (* %s *)\n", (yyvsp[0].sval));
        free((yyvsp[0].sval));
    }
#line 1702 "parser.tab.c"
    break;


#line 1706 "parser.tab.c"

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

#line 334 "parser.y"


void yyerror(const char* s) {
    error_count++;
    if(error_count < 3){
        fprintf(stderr, YELLOW"Error en línea %d: %s \n", yylineno, s);
        if (strcmp(s, "syntax error") == 0) {
            fprintf(stderr, CYAN"Token no esperado: %s\n", yytext);
        }
    }else{
        exit(1);
    }
    
    
}

