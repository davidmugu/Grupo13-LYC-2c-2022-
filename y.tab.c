
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Sintactico.y"

#include "lista.h"
#include "pila.h"
#include "tercetos.h"
#include "y.tab.h"
#include "gci.h"
#include "constantes.h"

FILE *yyin;

Lista tablaSimbolos;
Pila pilaVariables;//Pila pilaVariables;
Pila pilaTiposDatos;//Pila pilaTiposDatos;

/* VARIABLES PARA GCI */

int numeracion_terceto;
char aux[1000];
int aux_indice;

int programa_ind, prog_ind, sentencia_ind, grammar_ind, dec_var_ind, declaraciones_ind, lista_var_ind, tipo_dato_ind, asig_ind, between_ind, take_ind,
lista_cte_ind, write_ind, read_ind, while_ind, if_ind, expresion_ind, termino_ind, factor_ind, cond_simple_ind, condicion_ind, operador_algebraico_ind;


/**/
Pila pila_termino, pila_expresion;
int contador_t, contador_e, recuperar_puntero, es_nuevo_token;
t_lista_tercetos lista_tercetos;
Pila pila_condicion, pila_cantidad_desapilar;
char *operador_comparacion;

/*-------------------*/

extern int yylex();
extern void yyerror();
extern char* yytext;
extern int yylineno;



/* Line 189 of yacc.c  */
#line 114 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     WHILE = 258,
     ENDWHILE = 259,
     IF = 260,
     ELSE = 261,
     ENDIF = 262,
     WRITE = 263,
     READ = 264,
     BETWEEN = 265,
     TAKE = 266,
     DECVAR = 267,
     ENDDEC = 268,
     INT = 269,
     REAL = 270,
     STRING = 271,
     CORCHETE_A = 272,
     CORCHETE_C = 273,
     LLAVE_A = 274,
     LLAVE_C = 275,
     PARENTESIS_A = 276,
     PARENTESIS_C = 277,
     COMA = 278,
     PUNTO_COMA = 279,
     DOS_PUNTOS = 280,
     OP_MENOR = 281,
     OP_MAYOR = 282,
     OP_MEN_IGU = 283,
     OP_MAY_IGU = 284,
     OP_NOT = 285,
     OP_AND = 286,
     OP_OR = 287,
     OP_COMP = 288,
     OP_IGUAL = 289,
     CONST_INT = 290,
     CONST_REAL = 291,
     CONST_STRING = 292,
     VARIABLE = 293,
     COMENTARIO_A = 294,
     COMENTARIO_C = 295,
     COMENTARIO = 296,
     OP_SUMA = 298,
     OP_RESTA = 299,
     OP_DIV = 300,
     OP_MULT = 301,
     OP_ASIG = 302
   };
#endif
/* Tokens.  */
#define WHILE 258
#define ENDWHILE 259
#define IF 260
#define ELSE 261
#define ENDIF 262
#define WRITE 263
#define READ 264
#define BETWEEN 265
#define TAKE 266
#define DECVAR 267
#define ENDDEC 268
#define INT 269
#define REAL 270
#define STRING 271
#define CORCHETE_A 272
#define CORCHETE_C 273
#define LLAVE_A 274
#define LLAVE_C 275
#define PARENTESIS_A 276
#define PARENTESIS_C 277
#define COMA 278
#define PUNTO_COMA 279
#define DOS_PUNTOS 280
#define OP_MENOR 281
#define OP_MAYOR 282
#define OP_MEN_IGU 283
#define OP_MAY_IGU 284
#define OP_NOT 285
#define OP_AND 286
#define OP_OR 287
#define OP_COMP 288
#define OP_IGUAL 289
#define CONST_INT 290
#define CONST_REAL 291
#define CONST_STRING 292
#define VARIABLE 293
#define COMENTARIO_A 294
#define COMENTARIO_C 295
#define COMENTARIO 296
#define OP_SUMA 298
#define OP_RESTA 299
#define OP_DIV 300
#define OP_MULT 301
#define OP_ASIG 302




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 41 "Sintactico.y"

    char* strVal;



/* Line 214 of yacc.c  */
#line 248 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 260 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   157

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    14,    16,    18,    20,
      22,    24,    26,    28,    30,    34,    38,    43,    47,    49,
      51,    53,    55,    59,    63,    74,    85,    95,    97,    99,
     103,   107,   110,   113,   116,   119,   120,   128,   135,   146,
     158,   162,   166,   168,   172,   176,   178,   182,   184,   186,
     188,   192,   196,   200,   204,   208,   212,   216,   222,   228,
     230,   232,   234
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    -1,    51,    -1,    51,    52,    24,
      -1,    52,    24,    -1,    53,    -1,    57,    -1,    65,    -1,
      63,    -1,    58,    -1,    59,    -1,    61,    -1,    62,    -1,
      12,    54,    13,    -1,    55,    25,    56,    -1,    55,    25,
      56,    54,    -1,    55,    23,    38,    -1,    38,    -1,    14,
      -1,    15,    -1,    16,    -1,    38,    47,    66,    -1,    38,
      47,    37,    -1,    10,    21,    38,    23,    17,    66,    24,
      66,    18,    22,    -1,    11,    21,    71,    24,    35,    24,
      17,    60,    18,    22,    -1,    11,    21,    71,    24,    35,
      24,    17,    18,    22,    -1,    35,    -1,    36,    -1,    60,
      24,    35,    -1,    60,    24,    36,    -1,     8,    38,    -1,
       8,    37,    -1,     8,    35,    -1,     9,    38,    -1,    -1,
       3,    64,    70,    19,    51,    20,     4,    -1,     5,    70,
      19,    51,    20,     7,    -1,     5,    70,    19,    51,    20,
       6,    19,    51,    20,     7,    -1,     5,    70,    19,    51,
      20,     6,    70,    19,    51,    20,     7,    -1,    66,    43,
      67,    -1,    66,    44,    67,    -1,    67,    -1,    67,    46,
      68,    -1,    67,    45,    68,    -1,    68,    -1,    21,    66,
      22,    -1,    35,    -1,    36,    -1,    38,    -1,    66,    33,
      66,    -1,    66,    29,    66,    -1,    66,    28,    66,    -1,
      66,    27,    66,    -1,    66,    26,    66,    -1,    66,    30,
      66,    -1,    21,    69,    22,    -1,    21,    69,    31,    69,
      22,    -1,    21,    69,    32,    69,    22,    -1,    43,    -1,
      44,    -1,    45,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,    95,    98,    99,   102,   103,   104,   105,
     106,   107,   108,   109,   112,   115,   116,   119,   120,   122,
     127,   132,   139,   140,   143,   146,   147,   150,   151,   152,
     153,   156,   157,   158,   161,   164,   164,   188,   189,   190,
     193,   194,   195,   198,   199,   200,   204,   205,   206,   207,
     210,   211,   212,   213,   214,   215,   218,   219,   220,   223,
     224,   225,   226
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WHILE", "ENDWHILE", "IF", "ELSE",
  "ENDIF", "WRITE", "READ", "BETWEEN", "TAKE", "DECVAR", "ENDDEC", "INT",
  "REAL", "STRING", "CORCHETE_A", "CORCHETE_C", "LLAVE_A", "LLAVE_C",
  "PARENTESIS_A", "PARENTESIS_C", "COMA", "PUNTO_COMA", "DOS_PUNTOS",
  "OP_MENOR", "OP_MAYOR", "OP_MEN_IGU", "OP_MAY_IGU", "OP_NOT", "OP_AND",
  "OP_OR", "OP_COMP", "OP_IGUAL", "CONST_INT", "CONST_REAL",
  "CONST_STRING", "VARIABLE", "COMENTARIO_A", "COMENTARIO_C", "COMENTARIO",
  ".", "OP_SUMA", "OP_RESTA", "OP_DIV", "OP_MULT", "OP_ASIG", "$accept",
  "programa", "prog", "sentencia", "grammar", "dec_var", "declaraciones",
  "lista_var", "tipo_dato", "asig", "between", "take", "lista_cte",
  "write", "read", "while", "$@1", "if", "expresion", "termino", "factor",
  "cond_simple", "condicion", "operador_algebraico", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    51,    51,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    54,    54,    55,    55,    56,
      56,    56,    57,    57,    58,    59,    59,    60,    60,    60,
      60,    61,    61,    61,    62,    64,    63,    65,    65,    65,
      66,    66,    66,    67,    67,    67,    68,    68,    68,    68,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    71,
      71,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     4,     3,     1,     1,
       1,     1,     3,     3,    10,    10,     9,     1,     1,     3,
       3,     2,     2,     2,     2,     0,     7,     6,    10,    11,
       3,     3,     1,     3,     3,     1,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     5,     5,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     0,     6,     7,    10,    11,    12,    13,     9,
       8,     0,     0,     0,    33,    32,    31,    34,     0,     0,
      18,     0,     0,     0,     1,     0,     5,     0,     0,    47,
      48,    49,     0,    42,    45,     0,     0,     0,    59,    60,
      61,    62,     0,    14,     0,     0,    23,    22,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,     0,     0,     0,     0,     0,    17,    19,    20,
      21,    15,     0,    46,    54,    53,    52,    51,    55,    50,
      40,    41,    44,    43,     0,     0,     0,     0,     0,    16,
       0,    57,    58,     0,    37,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,     0,     0,
       0,     0,    26,     0,     0,    38,     0,    24,    25,    29,
      30,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    31,    32,    81,    14,
      15,    16,   118,    17,    18,    19,    21,    20,    42,    43,
      44,    45,    23,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -44
static const yytype_int16 yypact[] =
{
      95,   -44,   -13,    94,   -19,     3,    15,    20,    -6,    61,
     -44,    95,    45,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -13,    87,    62,   -44,   -44,   -44,   -44,    36,    75,
     -44,    86,    31,    55,   -44,    60,   -44,    83,    87,   -44,
     -44,   -44,    84,     6,   -44,   -17,    95,    93,   -44,   -44,
     -44,   -44,   100,   -44,    88,    80,   -44,    34,   -44,    95,
      16,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,   -44,    87,    87,     1,   113,   105,   -44,   -44,   -44,
     -44,    20,    17,   -44,    34,    34,    34,    34,    34,    34,
       6,     6,   -44,   -44,   121,   122,   128,    87,   123,   -44,
     144,   -44,   -44,    43,   -44,    29,   132,   -44,    95,   131,
      87,    32,    37,    95,     0,   129,   -44,   -44,    -1,   145,
      77,   133,   -44,   134,   101,   -44,   146,   -44,   -44,   -44,
     -44,   -44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,   -44,   -43,   -11,   -44,    76,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -31,    71,
      72,    73,   -20,   -44
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      35,    37,    57,    74,     1,    71,     2,    60,    22,     3,
       4,     5,     6,     7,    72,    73,    82,   123,   121,    27,
       1,    96,     2,   124,    28,     3,     4,     5,     6,     7,
      84,    85,    86,    87,    88,    89,    29,   100,    83,     8,
       1,    33,     2,    67,    68,     3,     4,     5,     6,     7,
     115,    69,    70,   110,    54,     8,    55,   119,    30,    67,
      68,    34,   108,    35,    22,   112,   105,   116,   117,    36,
     120,    35,    67,    68,    47,     8,    38,    67,    68,   114,
       1,    46,     2,   109,    58,     3,     4,     5,     6,     7,
      39,    40,    56,    41,    78,    79,    80,   126,     1,    53,
       2,    35,    59,     3,     4,     5,     6,     7,    38,    35,
      61,    62,    63,    64,    65,     8,    75,    66,    48,    49,
      50,    51,    39,    40,    76,    41,    77,    67,    68,    24,
      97,    25,    26,     8,   103,   104,   129,   130,    90,    91,
      98,    92,    93,   101,   102,    94,    95,   106,   107,   111,
     113,   122,   125,   131,     0,   127,   128,    99
};

static const yytype_int8 yycheck[] =
{
      11,    21,    33,    46,     3,    22,     5,    38,    21,     8,
       9,    10,    11,    12,    31,    32,    59,    18,    18,    38,
       3,    20,     5,    24,    21,     8,     9,    10,    11,    12,
      61,    62,    63,    64,    65,    66,    21,    20,    22,    38,
       3,    47,     5,    43,    44,     8,     9,    10,    11,    12,
      18,    45,    46,    24,    23,    38,    25,    20,    38,    43,
      44,     0,    19,    74,    21,   108,    97,    35,    36,    24,
     113,    82,    43,    44,    38,    38,    21,    43,    44,   110,
       3,    19,     5,   103,    24,     8,     9,    10,    11,    12,
      35,    36,    37,    38,    14,    15,    16,    20,     3,    13,
       5,   112,    19,     8,     9,    10,    11,    12,    21,   120,
      26,    27,    28,    29,    30,    38,    23,    33,    43,    44,
      45,    46,    35,    36,    24,    38,    38,    43,    44,    35,
      17,    37,    38,    38,     6,     7,    35,    36,    67,    68,
      35,    69,    70,    22,    22,    72,    73,    24,     4,    17,
      19,    22,     7,     7,    -1,    22,    22,    81
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     8,     9,    10,    11,    12,    38,    49,
      50,    51,    52,    53,    57,    58,    59,    61,    62,    63,
      65,    64,    21,    70,    35,    37,    38,    38,    21,    21,
      38,    54,    55,    47,     0,    52,    24,    70,    21,    35,
      36,    38,    66,    67,    68,    69,    19,    38,    43,    44,
      45,    46,    71,    13,    23,    25,    37,    66,    24,    19,
      66,    26,    27,    28,    29,    30,    33,    43,    44,    45,
      46,    22,    31,    32,    51,    23,    24,    38,    14,    15,
      16,    56,    51,    22,    66,    66,    66,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    20,    17,    35,    54,
      20,    22,    22,     6,     7,    66,    24,     4,    19,    70,
      24,    17,    51,    19,    66,    18,    35,    36,    60,    20,
      51,    18,    22,    18,    24,     7,    20,    22,    22,    35,
      36,     7
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 93 "Sintactico.y"
    {programa_ind = prog_ind; printf("Regla - Programa \n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 95 "Sintactico.y"
    {prog_ind = sentencia_ind; printf("Regla - Prog\n");}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 98 "Sintactico.y"
    {sentencia_ind = crear_terceto(transformar_indice(sentencia_ind),transformar_indice(grammar_ind),SIGNO_VACIO,&numeracion_terceto, &lista_tercetos); printf("Regla - Sentencia Recursiva\n");}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 99 "Sintactico.y"
    {sentencia_ind = grammar_ind; printf("Regla - Sentencia Corte\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 102 "Sintactico.y"
    {grammar_ind = dec_var_ind; printf("Regla - Sentencia de DEC_VAR\n");}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 103 "Sintactico.y"
    {grammar_ind = asig_ind; printf("Regla - Sentencia de ASIG\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 104 "Sintactico.y"
    {grammar_ind = if_ind; printf("Regla - Sentencia de IF\n");}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 105 "Sintactico.y"
    {grammar_ind = while_ind; printf("Regla - Sentencia de WHILE\n");}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 106 "Sintactico.y"
    {grammar_ind = between_ind; printf("Regla - Sentencia de BETWEEN\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 107 "Sintactico.y"
    {grammar_ind = take_ind; printf("Regla - Sentencia de TAKE\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 108 "Sintactico.y"
    {grammar_ind = write_ind; printf("Regla - Sentencia de WRITE\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 109 "Sintactico.y"
    {grammar_ind = read_ind; printf("Regla - Sentencia de READ\n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 112 "Sintactico.y"
    {printf("Regla - Sentencia de Declaracion de Variables\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 115 "Sintactico.y"
    {printf("Regla - Declaraciones corte\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 116 "Sintactico.y"
    {printf("Regla - Declaraciones iteracion\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 119 "Sintactico.y"
    {printf("Regla - lista variables iteracion\n");apilar(&pilaVariables,(yyvsp[(3) - (3)].strVal));}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 120 "Sintactico.y"
    {printf("Regla - lista de variables corte\n");apilar(&pilaVariables, (yyvsp[(1) - (1)].strVal));}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 122 "Sintactico.y"
    {printf("Regla - tipo de dato INT\n");while(!pilaVacia(&pilaVariables)) {
                                                             char variable[100];
                                                             desapilar(&pilaVariables, variable);
                                                             insertarVariable(&tablaSimbolos, variable, "INT");
                                                             }}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 127 "Sintactico.y"
    {printf("Regla - tipo de dato REAL\n");while(!pilaVacia(&pilaVariables)) {
                                                             char variable[100];
                                                             desapilar(&pilaVariables, variable);
                                                             insertarVariable(&tablaSimbolos, variable, "REAL");
                                                             }}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 132 "Sintactico.y"
    {printf("Regla - tipo de dato STRING\n");while(!pilaVacia(&pilaVariables)) {
                                                             char variable[100];
                                                             desapilar(&pilaVariables, variable);
                                                             insertarVariable(&tablaSimbolos, variable, "STRING");
                                                             }}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 139 "Sintactico.y"
    {asig_ind = crear_terceto(SIGNO_IGUAL,(yyvsp[(1) - (3)].strVal),transformar_indice(expresion_ind),&numeracion_terceto, &lista_tercetos);printf("Regla - Sentencia de Asignacion por Expresion\n");}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 140 "Sintactico.y"
    {asig_ind = crear_terceto(SIGNO_IGUAL, (yyvsp[(1) - (3)].strVal), (yyvsp[(3) - (3)].strVal), &numeracion_terceto, &lista_tercetos); printf("Regla - Sentencia de Asignacion por String\n");insertarString(&tablaSimbolos, (yyvsp[(3) - (3)].strVal));}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 143 "Sintactico.y"
    {printf("Regla - Sentencia de Between\n");}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 146 "Sintactico.y"
    {printf("Regla - Sentencia de Take con Lista de Constantes\n");insertarEntero(&tablaSimbolos, (yyvsp[(5) - (10)].strVal));}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 147 "Sintactico.y"
    {printf("Regla - Sentencia de Take sin Lista de Constantes\n");insertarEntero(&tablaSimbolos, (yyvsp[(5) - (9)].strVal));}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 150 "Sintactico.y"
    {printf("Regla - CTE INT\n");insertarEntero(&tablaSimbolos, (yyvsp[(1) - (1)].strVal));}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 151 "Sintactico.y"
    {printf("Regla - CTE REAL\n");insertarReal(&tablaSimbolos, (yyvsp[(1) - (1)].strVal));}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 152 "Sintactico.y"
    {printf("Regla - Lista CTE INT\n");insertarEntero(&tablaSimbolos, (yyvsp[(3) - (3)].strVal));}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 153 "Sintactico.y"
    {printf("Regla - Lista CTE REAL");insertarReal(&tablaSimbolos, (yyvsp[(3) - (3)].strVal));}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 156 "Sintactico.y"
    {write_ind = crear_terceto(FUNCION_WRITE, (yyvsp[(2) - (2)].strVal), SIGNO_VACIO, &numeracion_terceto, &lista_tercetos); printf("Regla - Sentencia de Write: VARIABLE\n");}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 157 "Sintactico.y"
    {write_ind = crear_terceto(FUNCION_WRITE, (yyvsp[(2) - (2)].strVal), SIGNO_VACIO, &numeracion_terceto, &lista_tercetos); printf("Regla - Sentencia de Write: CONST_STRING"); insertarString(&tablaSimbolos, (yyvsp[(2) - (2)].strVal));}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 158 "Sintactico.y"
    {write_ind = crear_terceto(FUNCION_WRITE, (yyvsp[(2) - (2)].strVal), SIGNO_VACIO, &numeracion_terceto, &lista_tercetos); printf("Regla - Sentencia de Write: CONST_INT\n"); insertarEntero(&tablaSimbolos, (yyvsp[(2) - (2)].strVal));}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 161 "Sintactico.y"
    { read_ind = crear_terceto(FUNCION_READ,(yyvsp[(2) - (2)].strVal),SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);printf("Regla - Sentencia de Read: VARIABLE\n");}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 164 "Sintactico.y"
    {

crear_terceto(crear_etiqueta(numeracion_terceto), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, &lista_tercetos); 
apilar(&pila_condicion, &numeracion_terceto);

}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 170 "Sintactico.y"
    {
    
    int aux, cant_desapilar, i;
    desapilar(&pila_condicion, &cant_desapilar);
    for(i = 0; i < cant_desapilar; i++)
    {
        desapilar(&pila_condicion, &aux);
        cambiar_elemento(&lista_tercetos, aux, transformar_indice(numeracion_terceto + 2), SEGUNDO_ELEMENTO);
    }
    
    desapilar(&pila_condicion, &aux);
	crear_terceto(BI, transformar_indice(aux), SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);
	crear_terceto(crear_etiqueta(numeracion_terceto), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);
	while_ind = numeracion_terceto;

    printf("Regla - Sentencia de While\n");}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 188 "Sintactico.y"
    {printf("Regla - Sentencia de if sin else\n");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 189 "Sintactico.y"
    {printf("Regla - Sentencia de if con else\n");}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 190 "Sintactico.y"
    {printf("Regla - Sentencia de if con else (mas condicion)\n");}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 193 "Sintactico.y"
    {expresion_ind = crear_terceto(SIGNO_SUMAR, transformar_indice(expresion_ind), transformar_indice(termino_ind), &numeracion_terceto, &lista_tercetos); printf("Regla - Sentencia de suma\n");}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 194 "Sintactico.y"
    {expresion_ind = crear_terceto(SIGNO_RESTAR, transformar_indice(expresion_ind), transformar_indice(termino_ind), &numeracion_terceto, &lista_tercetos); printf("Regla - Sentencia de resta\n");}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 195 "Sintactico.y"
    {expresion_ind = termino_ind;printf("Regla - Expresion <- Termino\n");}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 198 "Sintactico.y"
    {termino_ind = crear_terceto(SIGNO_MULT, transformar_indice(termino_ind), transformar_indice(factor_ind), &numeracion_terceto, &lista_tercetos); printf("Regla - Sentencia de multiplicacion\n");}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 199 "Sintactico.y"
    {termino_ind = crear_terceto(SIGNO_DIVISION, transformar_indice(termino_ind), transformar_indice(factor_ind), &numeracion_terceto, &lista_tercetos) ;printf("Regla - Sentencia de division\n");}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 200 "Sintactico.y"
    {termino_ind = factor_ind;printf("Regla - Termino <- Factor\n");}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 204 "Sintactico.y"
    {factor_ind = expresion_ind; printf("Regla - Factor\n");}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 205 "Sintactico.y"
    {factor_ind = crear_terceto((yyvsp[(1) - (1)].strVal),SIGNO_VACIO,SIGNO_VACIO,&numeracion_terceto,&lista_tercetos);printf("Regla - Constante Entera\n");insertarEntero(&tablaSimbolos, (yyvsp[(1) - (1)].strVal));}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 206 "Sintactico.y"
    {factor_ind = crear_terceto((yyvsp[(1) - (1)].strVal),SIGNO_VACIO,SIGNO_VACIO,&numeracion_terceto,&lista_tercetos);printf("Regla - Constante Real\n");insertarReal(&tablaSimbolos, (yyvsp[(1) - (1)].strVal));}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 207 "Sintactico.y"
    {factor_ind = crear_terceto((yyvsp[(1) - (1)].strVal),SIGNO_VACIO,SIGNO_VACIO,&numeracion_terceto,&lista_tercetos);printf("Regla - Variable\n");}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 210 "Sintactico.y"
    {printf("Comparacion Igual\n");}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 211 "Sintactico.y"
    {printf("Comparacion Mayor-Igual\n");}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 212 "Sintactico.y"
    {printf("Comparacion Menor-Igual\n");}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 213 "Sintactico.y"
    {printf("Comparacion Mayor\n");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 214 "Sintactico.y"
    {printf("Comparacion Menor\n");}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 215 "Sintactico.y"
    {printf("Comparacion Distinto\n");}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 218 "Sintactico.y"
    {printf("Regla - Condicion");}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 219 "Sintactico.y"
    {printf("Regla - Comparacion AND\n");}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 220 "Sintactico.y"
    {printf("Regla Comparacion OR\n");}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 223 "Sintactico.y"
    {printf("Operador Suma\n");}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 224 "Sintactico.y"
    {printf("Operador Resta\n");}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 225 "Sintactico.y"
    {printf("Operador Division\n");}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 226 "Sintactico.y"
    {printf("Operador Multiplicacion\n");}
    break;



/* Line 1455 of yacc.c  */
#line 2035 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 229 "Sintactico.y"



int main(int argc, char* argv[])
{
    if((yyin = fopen(argv[1],"rt")) == NULL)
    {
        printf("\n No se puede abrir el archivo %s \n", argv[1]);
    }

    printf("\n Compilando... \n\n");

    printf("Se procede a crear la Tabla de Simbolos\n");
    crearLista(&tablaSimbolos);
    printf("La Tabla de Simbolos se creo correctamente\n");
    printf("Se procede a crear la Pila de Variables\n");
    crearPila(&pilaVariables);
    printf("La Pila de Variables se creo correctamente\n");
    printf("Se procede a crear la Pila de Tipos de Datos\n");
    crearPila(&pilaTiposDatos);
    printf("La Pila de Tipos de Datos se creo correctamente\n\n");

    iniciar_gci(&lista_tercetos, &pila_condicion, &pila_cantidad_desapilar, &pila_termino, &pila_expresion, &contador_t, &contador_e, &es_nuevo_token, &recuperar_puntero, &numeracion_terceto);


    yyparse();

    printf("paso yyparse\n");

    finalizar_gci(&lista_tercetos, &pila_condicion, &pila_cantidad_desapilar, &pila_termino, &pila_expresion, "intermedio.txt");

    printf("\n\nSe procede a eliminar la Tabla de Simbolos\n");
    eliminarTabla(&tablaSimbolos);
    printf("La Tabla de Simbolos se elimino correctamente\n");
    
    printf("\n Compilacion exitosa \n");
    fclose(yyin);
    return 0;
}
