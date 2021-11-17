/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "mini_l.y" /* yacc.c:339  */

#include <iostream>
#include <stack>
#include "includes.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <map>
#include <vector>
#include <sstream>

#define YYPARSE_PARAM scanner
#define YYLEX_PARAM   scanner
void yyerror(const char* s);
int yylex(void);

extern int currentLine;
extern int currentColumn;
extern char* yytext;

stack<char*> func_print_stack;
char list_of_function_names[100][100];
int  count_names = 0;

string newTemp();
string newLabel();
stringstream* temp_count;
stringstream* label_count;


#line 98 "mini_l.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "mini_l.tab.h".  */
#ifndef YY_YY_MINI_L_TAB_H_INCLUDED
# define YY_YY_MINI_L_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    IDENTIFIER = 259,
    FUNCTION = 260,
    BEGIN_PARAMS = 261,
    END_PARAMS = 262,
    BEGIN_LOCALS = 263,
    END_LOCALS = 264,
    BEGIN_BODY = 265,
    END_BODY = 266,
    INTEGER = 267,
    READ = 268,
    WRITE = 269,
    ARRAY = 270,
    OF = 271,
    IF = 272,
    THEN = 273,
    ENDIF = 274,
    ELSE = 275,
    WHILE = 276,
    DO = 277,
    BEGINLOOP = 278,
    ENDLOOP = 279,
    CONTINUE = 280,
    AND = 281,
    OR = 282,
    NOT = 283,
    TRUE = 284,
    FALSE = 285,
    RETURN = 286,
    SUB = 287,
    ADD = 288,
    MULT = 289,
    DIV = 290,
    MOD = 291,
    EQ = 292,
    LT = 293,
    GT = 294,
    LTE = 295,
    GTE = 296,
    NEQ = 297,
    SEMICOLON = 298,
    COLON = 299,
    L_PAREN = 300,
    R_PAREN = 301,
    ASSIGN = 302,
    COMMA = 303,
    L_SQUARE_BRACKET = 304,
    R_SQUARE_BRACKET = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "mini_l.y" /* yacc.c:355  */

	int num;
	char* aString;
	struct EXPRESSION{
		char* code;
		char* place;
		bool array;
	} expr;
	struct STATEMENT{
		char* code;
	} stmts;

#line 202 "mini_l.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 219 "mini_l.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   111,   111,   114,   119,   122,   127,   130,   134,   139,
     160,   163,   167,   170,   174,   177,   183,   187,   191,   194,
     197,   201,   204,   209,   213,   216,   221,   225,   228,   232,
     236,   239,   242,   246,   250,   254,   258,   261,   264,   267,
     270,   273,   276,   279,   283,   286,   290,   293,   298,   301,
     305,   308,   312,   315,   319,   322,   325,   328,   332,   335,
     338,   341,   344,   347,   351,   354,   357,   361,   364,   367,
     370,   375,   378,   381,   385,   388,   391,   395,   399,   402,
     406,   409
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "IDENTIFIER", "FUNCTION",
  "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY",
  "END_BODY", "INTEGER", "READ", "WRITE", "ARRAY", "OF", "IF", "THEN",
  "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE",
  "AND", "OR", "NOT", "TRUE", "FALSE", "RETURN", "SUB", "ADD", "MULT",
  "DIV", "MOD", "EQ", "LT", "GT", "LTE", "GTE", "NEQ", "SEMICOLON",
  "COLON", "L_PAREN", "R_PAREN", "ASSIGN", "COMMA", "L_SQUARE_BRACKET",
  "R_SQUARE_BRACKET", "$accept", "program", "declaration", "identifiers",
  "ident", "function", "parameters", "locals", "bstatements", "statement1",
  "statement2", "statement_loop2", "statement_loop2b", "statement3",
  "statement_loop3", "statement4", "statement_loop4", "statement5",
  "var_loop", "statement6", "statement7", "statement8", "statement",
  "bool_expr", "bool_expr_loop", "relation_and_expr", "relation_expr_loop",
  "relation_expr", "relation_exprS", "comp", "expression", "mult_expr",
  "term", "term1", "term2", "expression_loop", "var", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -86

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,     8,    24,    15,     2,   -86,   -86,    44,    21,   -86,
      43,    36,    41,    32,   -86,    14,    21,    60,    54,    78,
      46,   -86,   -86,   -86,    47,   -86,   159,    14,    90,    52,
      99,    99,    62,    62,    95,   -86,     7,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,    76,    73,   -86,    71,
       7,   -86,    75,   -86,   -86,   -23,    12,   -86,   -86,    10,
      62,   107,   101,   103,   -86,    -7,     5,    48,   -86,   -86,
     -86,   108,   159,     7,   -86,    56,     7,   117,    86,    99,
       7,   -86,   -86,    93,   154,   159,    62,    62,   -86,   -86,
     -86,   -86,   -86,   -86,     7,     7,     7,     7,     7,     7,
     159,   -86,    97,   100,   -86,   -86,   -86,   131,   -86,   -86,
     106,   102,   -86,   -86,   -86,   112,   -86,   124,   -86,   132,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   118,   113,   -86,
       7,   -86,    91,    62,    62,   128,   145,   -86,   -86,   -86,
     159,   -86,   -86,   -86,   -86,   -86,    62,   -86,   126,   -86,
     143,   -86,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     3,     0,     1,     2,     0,     0,     8,
       0,     0,     0,     7,     9,     0,     0,     0,     0,     0,
       0,    11,    10,     4,     0,     6,     0,     0,     0,    80,
       0,     0,     0,     0,     0,    34,     0,    13,    36,    37,
      38,    39,    40,    41,    42,    43,     0,     0,    12,     0,
       0,    29,    32,    33,    75,    80,     0,    55,    56,     0,
       0,     0,    44,    48,    53,     0,    66,    70,    72,    73,
      74,     0,     0,     0,    35,     0,     0,     0,     0,    31,
       0,    52,    71,     0,     0,     0,     0,     0,    58,    60,
      61,    62,    63,    59,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    15,    14,    16,     0,    81,    30,
      78,     0,    57,    76,    17,     0,    45,    46,    49,    50,
      54,    65,    64,    67,    68,    69,    23,     0,     0,     5,
       0,    77,     0,     0,     0,     0,     0,    27,    79,    20,
       0,    18,    47,    51,    25,    24,     0,    19,     0,    28,
       0,    22,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   164,    -8,   152,   -86,   -86,   155,   148,   104,   -86,
     -86,    45,    28,   -86,    50,   -86,    55,   -86,   -25,   -86,
     -86,   -86,   -64,   -31,    49,   -85,    53,   -78,   130,   -86,
     -33,     1,   -86,   129,   -86,    59,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    11,    12,    13,     3,    14,    21,    37,    38,
      39,   114,   147,    40,   126,    41,   101,    42,    51,    43,
      44,    45,    46,    61,   116,    62,   118,    63,    64,    94,
      65,    66,    67,    68,    69,   111,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,   117,    71,    74,    52,    52,    53,    20,   102,   119,
      54,    55,     4,    54,    29,    54,    55,    78,     9,    20,
       1,   115,    80,    19,     5,     9,    50,    84,    10,    83,
      88,    89,    90,    91,    92,    93,   127,    95,    96,    59,
     103,    57,    58,   106,    59,     7,    47,   110,   117,    47,
       8,    15,    73,    52,   109,    73,   119,    60,     9,    47,
      29,   120,   121,   122,   102,    54,    55,   104,   115,    30,
      31,   127,    23,    32,    47,    24,   148,    33,    34,    16,
      18,    35,    97,    98,    99,    17,   148,    36,    26,    27,
      56,    57,    58,    49,    59,    29,    28,   110,   123,   124,
     125,    50,    47,    29,    30,    31,    47,    60,    32,    47,
     139,   140,    33,    34,    47,   149,    35,    29,    72,    75,
      76,    77,    36,    79,    47,    85,    30,    31,    86,    87,
      32,   100,    29,   107,    33,    34,   108,   136,    35,   112,
     128,    30,    31,   129,    36,    32,   113,    29,   131,    33,
      34,   133,   144,    35,   130,   132,    30,    31,   134,    36,
      32,   135,   151,    29,    33,    34,   146,     6,    35,   150,
      25,    22,    30,    31,    36,    48,    32,   141,   152,   105,
      33,    34,   142,   137,    35,   145,    81,   143,    82,   138,
      36,    88,    89,    90,    91,    92,    93,     0,     0,     0,
     113
};

static const yytype_int16 yycheck[] =
{
      26,    86,    33,    36,    30,    31,    31,    15,    72,    87,
       3,     4,     4,     3,     4,     3,     4,    50,     4,    27,
       5,    85,    45,     9,     0,     4,    49,    60,     7,    60,
      37,    38,    39,    40,    41,    42,   100,    32,    33,    32,
      73,    29,    30,    76,    32,    43,    72,    80,   133,    75,
       6,     8,    45,    79,    79,    45,   134,    45,     4,    85,
       4,    94,    95,    96,   128,     3,     4,    11,   132,    13,
      14,   135,    12,    17,   100,    15,   140,    21,    22,    43,
      48,    25,    34,    35,    36,    44,   150,    31,    10,    43,
      28,    29,    30,     3,    32,     4,    49,   130,    97,    98,
      99,    49,   128,     4,    13,    14,   132,    45,    17,   135,
      19,    20,    21,    22,   140,   146,    25,     4,    23,    43,
      47,    50,    31,    48,   150,    18,    13,    14,    27,    26,
      17,    23,     4,    16,    21,    22,    50,    24,    25,    46,
      43,    13,    14,    12,    31,    17,    46,     4,    46,    21,
      22,    27,    24,    25,    48,    43,    13,    14,    26,    31,
      17,    43,    19,     4,    21,    22,    21,     3,    25,    43,
      18,    16,    13,    14,    31,    27,    17,   132,   150,    75,
      21,    22,   133,   128,    25,   135,    56,   134,    59,   130,
      31,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    52,    56,     4,     0,    52,    43,     6,     4,
       7,    53,    54,    55,    57,     8,    43,    44,    48,     9,
      53,    58,    57,    12,    15,    54,    10,    43,    49,     4,
      13,    14,    17,    21,    22,    25,    31,    59,    60,    61,
      64,    66,    68,    70,    71,    72,    73,    87,    58,     3,
      49,    69,    87,    69,     3,     4,    28,    29,    30,    32,
      45,    74,    76,    78,    79,    81,    82,    83,    84,    85,
      87,    74,    23,    45,    81,    43,    47,    50,    81,    48,
      45,    79,    84,    74,    81,    18,    27,    26,    37,    38,
      39,    40,    41,    42,    80,    32,    33,    34,    35,    36,
      23,    67,    73,    81,    11,    59,    81,    16,    50,    69,
      81,    86,    46,    46,    62,    73,    75,    76,    77,    78,
      81,    81,    81,    82,    82,    82,    65,    73,    43,    12,
      48,    46,    43,    27,    26,    43,    24,    67,    86,    19,
      20,    62,    75,    77,    24,    65,    21,    63,    73,    74,
      43,    19,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    54,    54,    55,    56,
      57,    57,    58,    58,    59,    59,    60,    61,    62,    62,
      62,    63,    63,    64,    65,    65,    66,    67,    67,    68,
      69,    69,    69,    70,    71,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    79,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    82,    82,    82,
      82,    83,    83,    83,    84,    84,    84,    85,    86,    86,
      87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     3,     8,     3,     1,     1,     5,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     4,
       3,     3,     3,     4,     3,     3,     3,     3,     5,     2,
       3,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     2,     1,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     1,     1,     1,     1,     3,     4,     1,     3,
       1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 111 "mini_l.y" /* yacc.c:1646  */
    {//printf("program -> function program \n");
			//
		}
#line 1424 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 114 "mini_l.y" /* yacc.c:1646  */
    {//printf("program -> Empty \n");
			//
		}
#line 1432 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 119 "mini_l.y" /* yacc.c:1646  */
    {//printf("declaration -> identifiers COLON INTEGER \n");
			//
		}
#line 1440 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 123 "mini_l.y" /* yacc.c:1646  */
    {//printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER \n");
			//
		}
#line 1448 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 127 "mini_l.y" /* yacc.c:1646  */
    {//printf("identifiers -> ident COMMA identifiers \n");
			//
		}
#line 1456 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 130 "mini_l.y" /* yacc.c:1646  */
    {//printf("identifiers -> ident\n");
			//
		}
#line 1464 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 134 "mini_l.y" /* yacc.c:1646  */
    {//printf("ident -> IDENT %s\n", $1);
			//
		}
#line 1472 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 139 "mini_l.y" /* yacc.c:1646  */
    {//printf("function -> FUNCTION IDENTIFIER SEMICOLON BEGIN_PARAMS parameters \n");
			//
            char *token = yytext;

            // Push to stack!
            func_print_stack.push("\n");
            func_print_stack.push(token);
            func_print_stack.push("func ");
            // printf("func %s\n", token);

            // Add name to strcpy
            strcpy(list_of_function_names[count_names], token);
            count_names++;

            // Empty the print stack!
			while (!func_print_stack.empty()) {
                    printf(func_print_stack.top());
                    func_print_stack.pop();
            }
		}
#line 1497 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 160 "mini_l.y" /* yacc.c:1646  */
    {//printf("parameters -> declaration SEMICOLON parameters \n");
			//
		}
#line 1505 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 163 "mini_l.y" /* yacc.c:1646  */
    {//printf("parameters -> END_LOCALS BEGIN_LOCALS locals \n");
			//
		}
#line 1513 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 167 "mini_l.y" /* yacc.c:1646  */
    {//printf("locals -> declaration SEMICOLON locals \n");
			//
		}
#line 1521 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 170 "mini_l.y" /* yacc.c:1646  */
    {//printf("locals -> END_LOCALS BEGIN_BODY bstatements \n");
			//
		}
#line 1529 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 174 "mini_l.y" /* yacc.c:1646  */
    {//printf("bstatements -> statement SEMICOLON bstatements \n");
			//
		}
#line 1537 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 177 "mini_l.y" /* yacc.c:1646  */
    {//printf("endfunc\n");
            // Push to stack!
            func_print_stack.push("endfunc\n");
		}
#line 1546 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 183 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement1 -> var ASSIGN expression \n");
			//
		}
#line 1554 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 187 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement2 -> IF bool_expr THEN statement_loop2 \n");
			//
		}
#line 1562 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 191 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement_loop2 -> statement SEMICOLON statement_loop2 \n");
			//
		}
#line 1570 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 194 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement_loop2 -> statement SEMICOLON ELSE statement_loop2b \n");
			//
		}
#line 1578 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 197 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement_loop2 -> statement SEMICOLON ENDIF \n");
			//
		}
#line 1586 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 201 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement_loop2b -> statement SEMICOLON statement_loop2b \n");
			//
		}
#line 1594 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 204 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement_loop2b -> statement SEMICOLON ENDIF \n");
			//
		}
#line 1602 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 209 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement3 -> WHILE bool_expr BEGINLOOP statement_loop \n");
			//
		}
#line 1610 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 213 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement_loop3 -> statement SEMICOLON statement_loop3 \n");
			//
		}
#line 1618 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 216 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement_loop3 -> statement SEMICOLON ENDLOOP \n");
			//
		}
#line 1626 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 221 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement4 -> DO BEGINLOOP statement_loop4 \n");
			//
		}
#line 1634 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 225 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement_loop4 -> statement SEMICOLON statement_loop4 \n");
			//
		}
#line 1642 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 228 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement_loop4 -> statement SEMICOLON ENDLOOP WHILE bool_expr \n");
			// 
		}
#line 1650 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 232 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement5 -> READ var_loop \n");
			//
		}
#line 1658 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 236 "mini_l.y" /* yacc.c:1646  */
    {//printf("var_loop -> var COMMA var_loop \n");
			//
		}
#line 1666 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 239 "mini_l.y" /* yacc.c:1646  */
    {//printf("var_loop -> var COMMA \n");
			//
		}
#line 1674 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 242 "mini_l.y" /* yacc.c:1646  */
    {//printf("var_loop -> var \n");
			//
		}
#line 1682 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 246 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement6 -> WRITE var_loop \n");
			//
		}
#line 1690 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 250 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement7 -> CONTINUE \n");
			//
		}
#line 1698 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 254 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement8 -> RETURN expression \n");
			//
		}
#line 1706 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 258 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement -> statement1 \n");
			//
		}
#line 1714 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 261 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement -> statement2 \n");
			//
		}
#line 1722 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 264 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement -> statement3 \n");
			//
		}
#line 1730 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 267 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement -> statement4 \n");
			//
		}
#line 1738 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 270 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement -> statement5 \n");
			//
		}
#line 1746 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 273 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement -> statement6 \n");
			//
		}
#line 1754 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 276 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement -> statement7 \n");
			//
		}
#line 1762 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 279 "mini_l.y" /* yacc.c:1646  */
    {//printf("statement -> statement8 \n");
			//
		}
#line 1770 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 283 "mini_l.y" /* yacc.c:1646  */
    {//printf("bool_expr -> relation_and_expr \n");
			//
		}
#line 1778 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 286 "mini_l.y" /* yacc.c:1646  */
    {//printf("bool_expr -> relation_and_expr OR bool_expr_loop \n");
			//
		}
#line 1786 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 290 "mini_l.y" /* yacc.c:1646  */
    {//printf("bool_expr_loop -> relation_and_expr \n");
			//
		}
#line 1794 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 293 "mini_l.y" /* yacc.c:1646  */
    {//printf("bool_expr_loop -> relation_and_expr OR bool_expr_loop \n");
			//
		}
#line 1802 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 298 "mini_l.y" /* yacc.c:1646  */
    {//printf("relation_and_expr -> relation_expr \n");
			//
		}
#line 1810 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 301 "mini_l.y" /* yacc.c:1646  */
    {//printf("relation_and_expr -> relation_expr AND relation_expr_loop \n");
			//	
		}
#line 1818 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 305 "mini_l.y" /* yacc.c:1646  */
    {//printf("relation_expr_loop -> relation_expr \n");
			//
		}
#line 1826 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 308 "mini_l.y" /* yacc.c:1646  */
    {//printf("relation_expr_loop -> relation_expr AND relation_expr_loop \n");
			//
		}
#line 1834 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 312 "mini_l.y" /* yacc.c:1646  */
    {//printf("relation_expr -> NOT relation_exprS \n");
			//
		}
#line 1842 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 315 "mini_l.y" /* yacc.c:1646  */
    {//printf("relation_expr -> relation_exprS \n");
			//
		}
#line 1850 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 319 "mini_l.y" /* yacc.c:1646  */
    {//printf("relation_exprS -> expression comp expression \n");
			//
		}
#line 1858 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 322 "mini_l.y" /* yacc.c:1646  */
    {//printf("relation_exprS -> TRUE \n");
			//
		}
#line 1866 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 325 "mini_l.y" /* yacc.c:1646  */
    {//printf("relation_exprS -> FALSE \n");
			//
		}
#line 1874 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 328 "mini_l.y" /* yacc.c:1646  */
    {//printf("relation_exprS ->  L_PAREN bool_expr R_PAREN \n");
			//
		}
#line 1882 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 332 "mini_l.y" /* yacc.c:1646  */
    {//printf("comp -> EQ \n");
		//
	}
#line 1890 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 335 "mini_l.y" /* yacc.c:1646  */
    {//printf("comp -> NEQ \n");
		//
	}
#line 1898 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 338 "mini_l.y" /* yacc.c:1646  */
    {//printf("comp -> LT \n");
		//
	}
#line 1906 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 341 "mini_l.y" /* yacc.c:1646  */
    {//printf("comp -> GT \n");
		//
	}
#line 1914 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 344 "mini_l.y" /* yacc.c:1646  */
    {//printf("comp -> LTE \n");
		//
	}
#line 1922 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 347 "mini_l.y" /* yacc.c:1646  */
    {//printf("comp -> GTE \n");
		//
	}
#line 1930 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 351 "mini_l.y" /* yacc.c:1646  */
    {//printf("expression -> mult_expr ADD expression \n");
			//
		}
#line 1938 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 354 "mini_l.y" /* yacc.c:1646  */
    {//printf("expression -> mult_expr SUB expression \n");
			//
		}
#line 1946 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 357 "mini_l.y" /* yacc.c:1646  */
    {//printf("expression -> mult_expr \n");
			//
		}
#line 1954 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 361 "mini_l.y" /* yacc.c:1646  */
    {//printf("mult_expr -> term MULT mult_expr \n");
			//
		}
#line 1962 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 364 "mini_l.y" /* yacc.c:1646  */
    {//printf("mult_expr -> term DIV mult_expr \n");
			//
		}
#line 1970 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 367 "mini_l.y" /* yacc.c:1646  */
    {//printf("mult_expr -> term MOD mult_expr \n");
			//
		}
#line 1978 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 370 "mini_l.y" /* yacc.c:1646  */
    {//printf("mult_expr -> term");
			//
		}
#line 1986 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 375 "mini_l.y" /* yacc.c:1646  */
    {//printf("term -> SUB term1 \n");
		//
	}
#line 1994 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 378 "mini_l.y" /* yacc.c:1646  */
    {//printf("term -> term1 \n");
		//
	}
#line 2002 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 381 "mini_l.y" /* yacc.c:1646  */
    {//printf("term -> term2 \n");
		//
	}
#line 2010 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 385 "mini_l.y" /* yacc.c:1646  */
    {//printf("term1 -> var \n");
		//
	}
#line 2018 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 388 "mini_l.y" /* yacc.c:1646  */
    {//printf("term1 -> NUMBER %d \n", $1);
		//
	}
#line 2026 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 391 "mini_l.y" /* yacc.c:1646  */
    {//printf("term1 -> L_PAREN expression R_PAREN \n");
		//
	}
#line 2034 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 395 "mini_l.y" /* yacc.c:1646  */
    {//printf("term2 -> IDENTIFIER L_PAREN expression_loop R_PAREN \n");
		//
	}
#line 2042 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 399 "mini_l.y" /* yacc.c:1646  */
    {//printf("expression_loop -> expression \n");
			//
		}
#line 2050 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 402 "mini_l.y" /* yacc.c:1646  */
    {//printf("expression_loop -> expression COMMA expression_loop \n");
			//
		}
#line 2058 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 406 "mini_l.y" /* yacc.c:1646  */
    {//printf("var -> IDENT %s \n", $1);
		//
	}
#line 2066 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 409 "mini_l.y" /* yacc.c:1646  */
    {//printf("var -> IDENTIFIER L_SQUARE_BRACKET expression R_SQUARE_BRACKET \n");
		//
	}
#line 2074 "mini_l.tab.c" /* yacc.c:1646  */
    break;


#line 2078 "mini_l.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
  return yyresult;
}
#line 414 "mini_l.y" /* yacc.c:1906  */

/*Addtional Code*/
void yyerror(const char* s){
	extern int currentLine;
	extern char* yytext;
	printf("ERROR: %s at symbol \"%s\" on line %d\n", s, yytext, currentLine);
	exit(1);
}

string newTemp() {
	int temp_count = 0;
  	stringstream ss;
  	ss << temp_count++;
  	string temp = "__temp__" + ss.str();
  	return temp;
}

string newLabel() {
	int label_count = 0;
	stringstream ss;
  	ss << label_count++;
  	string temp = "__label__" + ss.str();
  	return temp;
}
