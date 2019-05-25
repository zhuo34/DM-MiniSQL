// A Bison parser, made by GNU Bison 3.3.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.





#include "parser.hpp"


// Unqualified %code blocks.
#line 23 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:435

# include "compiler.hpp"
# include "compilertools/compilertools.hpp"

#line 50 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:435


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 145 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:510

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser (Compiler& drv_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      drv (drv_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_number_type
  parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 44: // exp
      case 47: // attribute_exp
      case 50: // constrain_exp
        value.YY_MOVE_OR_COPY< Expression * > (YY_MOVE (that.value));
        break;

      case 41: // select_list
      case 42: // table_list
      case 43: // select_condition
      case 46: // attribute_list
      case 49: // constrain_list
        value.YY_MOVE_OR_COPY< ExpressionList * > (YY_MOVE (that.value));
        break;

      case 34: // statement
      case 35: // drop_table_statement
      case 36: // drop_db_statement
      case 37: // use_statement
      case 38: // create_db_statement
      case 40: // select_statement
      case 45: // create_table_statement
        value.YY_MOVE_OR_COPY< Statement * > (YY_MOVE (that.value));
        break;

      case 3: // NUMBER
      case 48: // variant_type
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case 29: // STRING
      case 30: // FILENAME
      case 39: // source_statement
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 44: // exp
      case 47: // attribute_exp
      case 50: // constrain_exp
        value.move< Expression * > (YY_MOVE (that.value));
        break;

      case 41: // select_list
      case 42: // table_list
      case 43: // select_condition
      case 46: // attribute_list
      case 49: // constrain_list
        value.move< ExpressionList * > (YY_MOVE (that.value));
        break;

      case 34: // statement
      case 35: // drop_table_statement
      case 36: // drop_db_statement
      case 37: // use_statement
      case 38: // create_db_statement
      case 40: // select_statement
      case 45: // create_table_statement
        value.move< Statement * > (YY_MOVE (that.value));
        break;

      case 3: // NUMBER
      case 48: // variant_type
        value.move< int > (YY_MOVE (that.value));
        break;

      case 29: // STRING
      case 30: // FILENAME
      case 39: // source_statement
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 44: // exp
      case 47: // attribute_exp
      case 50: // constrain_exp
        value.move< Expression * > (that.value);
        break;

      case 41: // select_list
      case 42: // table_list
      case 43: // select_condition
      case 46: // attribute_list
      case 49: // constrain_list
        value.move< ExpressionList * > (that.value);
        break;

      case 34: // statement
      case 35: // drop_table_statement
      case 36: // drop_db_statement
      case 37: // use_statement
      case 38: // create_db_statement
      case 40: // select_statement
      case 45: // create_table_statement
        value.move< Statement * > (that.value);
        break;

      case 3: // NUMBER
      case 48: // variant_type
        value.move< int > (that.value);
        break;

      case 29: // STRING
      case 30: // FILENAME
      case 39: // source_statement
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    switch (yytype)
    {
      case 3: // NUMBER
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < int > (); }
#line 430 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 29: // STRING
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < std::string > (); }
#line 436 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 30: // FILENAME
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < std::string > (); }
#line 442 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 34: // statement
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < Statement * > (); }
#line 448 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 35: // drop_table_statement
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < Statement * > (); }
#line 454 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 36: // drop_db_statement
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < Statement * > (); }
#line 460 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 37: // use_statement
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < Statement * > (); }
#line 466 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 38: // create_db_statement
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < Statement * > (); }
#line 472 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 39: // source_statement
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < std::string > (); }
#line 478 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 40: // select_statement
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < Statement * > (); }
#line 484 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 41: // select_list
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < ExpressionList * > (); }
#line 490 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 42: // table_list
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < ExpressionList * > (); }
#line 496 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 43: // select_condition
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < ExpressionList * > (); }
#line 502 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 44: // exp
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < Expression * > (); }
#line 508 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 45: // create_table_statement
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < Statement * > (); }
#line 514 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 46: // attribute_list
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < ExpressionList * > (); }
#line 520 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 47: // attribute_exp
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < Expression * > (); }
#line 526 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 48: // variant_type
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < int > (); }
#line 532 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 49: // constrain_list
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < ExpressionList * > (); }
#line 538 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      case 50: // constrain_exp
#line 57 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:676
        { yyo << yysym.value.template as < Expression * > (); }
#line 544 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:676
        break;

      default:
        break;
    }
    yyo << ')';
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (drv));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 44: // exp
      case 47: // attribute_exp
      case 50: // constrain_exp
        yylhs.value.emplace< Expression * > ();
        break;

      case 41: // select_list
      case 42: // table_list
      case 43: // select_condition
      case 46: // attribute_list
      case 49: // constrain_list
        yylhs.value.emplace< ExpressionList * > ();
        break;

      case 34: // statement
      case 35: // drop_table_statement
      case 36: // drop_db_statement
      case 37: // use_statement
      case 38: // create_db_statement
      case 40: // select_statement
      case 45: // create_table_statement
        yylhs.value.emplace< Statement * > ();
        break;

      case 3: // NUMBER
      case 48: // variant_type
        yylhs.value.emplace< int > ();
        break;

      case 29: // STRING
      case 30: // FILENAME
      case 39: // source_statement
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 62 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { drv.execute_statement(yystack_[0].value.as < Statement * > ()); }
#line 819 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 3:
#line 63 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { drv.execute_statement(yystack_[0].value.as < Statement * > ()); }
#line 825 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 4:
#line 67 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = nullptr; }
#line 831 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 5:
#line 68 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = nullptr; }
#line 837 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 6:
#line 69 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = yystack_[1].value.as < Statement * > (); }
#line 843 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 7:
#line 70 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = nullptr; Compiler::file = yystack_[1].value.as < std::string > (); return 0; }
#line 849 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 8:
#line 71 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = yystack_[1].value.as < Statement * > (); }
#line 855 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 9:
#line 72 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = yystack_[1].value.as < Statement * > (); }
#line 861 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 10:
#line 73 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { std::cout << "Bye" << std::endl; return -1; }
#line 867 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 11:
#line 74 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = yystack_[1].value.as < Statement * > (); }
#line 873 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 12:
#line 75 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = yystack_[1].value.as < Statement * > (); }
#line 879 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 13:
#line 76 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = yystack_[1].value.as < Statement * > (); }
#line 885 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 14:
#line 80 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = new Drop_Table_Statement(yystack_[0].value.as < std::string > ()); }
#line 891 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 15:
#line 84 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = new Drop_Database_Statement(yystack_[0].value.as < std::string > ()); }
#line 897 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 16:
#line 88 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = new Use_Statement(yystack_[0].value.as < std::string > ()); }
#line 903 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 17:
#line 92 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Statement * > () = new Create_Database_Statement(yystack_[0].value.as < std::string > ()); }
#line 909 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 18:
#line 96 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 915 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 19:
#line 100 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    {
		Select_Statement * select = new Select_Statement;
		select->set_select(yystack_[3].value.as < ExpressionList * > ());
		select->set_table(yystack_[1].value.as < ExpressionList * > ());
		select->set_condition(yystack_[0].value.as < ExpressionList * > ());
		yylhs.value.as < Statement * > () = select;
	}
#line 927 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 20:
#line 110 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < ExpressionList * > () = new ExpressionList; yylhs.value.as < ExpressionList * > ()->push_back(yystack_[0].value.as < Expression * > ()); }
#line 933 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 21:
#line 111 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < ExpressionList * > ()->push_back(yystack_[0].value.as < Expression * > ()); }
#line 939 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 22:
#line 115 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < ExpressionList * > () = new ExpressionList; yylhs.value.as < ExpressionList * > ()->push_back(yystack_[0].value.as < Expression * > ()); }
#line 945 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 23:
#line 116 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < ExpressionList * > ()->push_back(yystack_[0].value.as < Expression * > ()); }
#line 951 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 24:
#line 120 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < ExpressionList * > () = nullptr; }
#line 957 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 25:
#line 121 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < ExpressionList * > () = new ExpressionList; yylhs.value.as < ExpressionList * > ()->push_back(yystack_[0].value.as < Expression * > ()); }
#line 963 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 26:
#line 125 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Expression * > () = new String_Expression(yystack_[0].value.as < std::string > ()); }
#line 969 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 27:
#line 130 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    {
		Create_Table_Statement * create = new Create_Table_Statement(yystack_[4].value.as < std::string > ());
		create->set_attribute(yystack_[2].value.as < ExpressionList * > ());
		create->set_constrain(yystack_[1].value.as < ExpressionList * > ());
		yylhs.value.as < Statement * > () = create;
	}
#line 980 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 28:
#line 139 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < ExpressionList * > () = new ExpressionList(); yylhs.value.as < ExpressionList * > ()->push_back(yystack_[0].value.as < Expression * > ()); }
#line 986 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 29:
#line 140 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yystack_[2].value.as < ExpressionList * > ()->push_back(yystack_[0].value.as < Expression * > ()); yylhs.value.as < ExpressionList * > () = yystack_[2].value.as < ExpressionList * > (); }
#line 992 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 30:
#line 144 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Expression * > () = new Attribute_Expression(yystack_[1].value.as < std::string > (), yystack_[0].value.as < int > ()); }
#line 998 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 31:
#line 148 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < int > () = -1; }
#line 1004 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 32:
#line 149 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < int > () = -2; }
#line 1010 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 33:
#line 150 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < int > () = yystack_[1].value.as < int > (); }
#line 1016 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 34:
#line 154 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < ExpressionList * > () = nullptr; }
#line 1022 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 35:
#line 155 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < ExpressionList * > () = new ExpressionList(); yylhs.value.as < ExpressionList * > ()->push_back(yystack_[0].value.as < Expression * > ()); }
#line 1028 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 36:
#line 156 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yystack_[2].value.as < ExpressionList * > ()->push_back(yystack_[0].value.as < Expression * > ()); yylhs.value.as < ExpressionList * > () = yystack_[2].value.as < ExpressionList * > (); }
#line 1034 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 37:
#line 160 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Expression * > () = new Constrain_Expression(0, yystack_[1].value.as < std::string > ()); }
#line 1040 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;

  case 38:
#line 161 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:919
    { yylhs.value.as < Expression * > () = new Constrain_Expression(1, yystack_[1].value.as < std::string > ()); }
#line 1046 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
    break;


#line 1050 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:919
            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -22;

  const signed char parser::yytable_ninf_ = -1;

  const signed char
  parser::yypact_[] =
  {
      21,   -18,     6,     5,     3,     4,    11,   -22,   -22,     1,
     -22,     8,    15,    22,    28,    29,    30,    31,   -22,    -5,
     -22,   -22,   -22,    19,    23,   -22,    24,    25,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -18,   -18,    34,
     -22,   -22,   -22,    -4,   -22,   -22,    27,   -18,   -18,   -22,
      -6,    35,   -22,   -22,   -22,   -22,   -22,    36,   -22,    14,
     -19,    48,    38,    39,   -22,   -22,   -22,   -21,    40,    32,
      37,   -22,   -22,    41,    42,   -22,   -22
  };

  const unsigned char
  parser::yydefact_[] =
  {
       0,     0,     0,     0,     0,     0,     0,     4,     5,     0,
       2,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      20,    10,    18,     0,     0,    16,     0,     0,     1,     3,
       9,    13,    11,    12,     7,     6,     8,     0,     0,     0,
      17,    14,    15,    24,    22,    21,     0,     0,     0,    19,
       0,    34,    28,    25,    23,    31,    32,     0,    30,     0,
       0,     0,     0,     0,    29,    35,    27,     0,     0,     0,
       0,    36,    33,     0,     0,    37,    38
  };

  const signed char
  parser::yypgoto_[] =
  {
     -22,   -22,    56,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,     2,   -22,   -22,     9,   -22,   -22,     0
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    19,
      43,    49,    20,    17,    51,    52,    58,    60,    65
  };

  const unsigned char
  parser::yytable_[] =
  {
      37,    28,    47,    66,    67,     1,    62,    63,     2,     3,
       4,    18,     5,    23,     6,    24,     7,     8,    55,    56,
      57,    26,    21,    27,    30,     1,    38,    48,     2,     3,
       4,    31,     5,    25,     6,    22,     7,     8,    32,    44,
      45,    62,    63,    50,    33,    34,    35,    36,    39,    53,
      54,    68,    40,    41,    42,    46,    50,    61,    59,    69,
      70,    73,    72,    75,    76,    29,    74,    71,    64
  };

  const unsigned char
  parser::yycheck_[] =
  {
       5,     0,     6,    22,    23,     4,    27,    28,     7,     8,
       9,    29,    11,    10,    13,    12,    15,    16,    24,    25,
      26,    10,    16,    12,    16,     4,    31,    31,     7,     8,
       9,    16,    11,    29,    13,    30,    15,    16,    16,    37,
      38,    27,    28,    29,    16,    16,    16,    16,    29,    47,
      48,     3,    29,    29,    29,    21,    29,    21,    23,    21,
      21,    29,    22,    22,    22,     9,    29,    67,    59
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,     4,     7,     8,     9,    11,    13,    15,    16,    33,
      34,    35,    36,    37,    38,    39,    40,    45,    29,    41,
      44,    16,    30,    10,    12,    29,    10,    12,     0,    34,
      16,    16,    16,    16,    16,    16,    16,     5,    31,    29,
      29,    29,    29,    42,    44,    44,    21,     6,    31,    43,
      29,    46,    47,    44,    44,    24,    25,    26,    48,    23,
      49,    21,    27,    28,    47,    50,    22,    23,     3,    21,
      21,    50,    22,    29,    29,    22,    22
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    32,    33,    33,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    35,    36,    37,    38,    39,    40,
      41,    41,    42,    42,    43,    43,    44,    45,    46,    46,
      47,    48,    48,    48,    49,    49,    49,    50,    50
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     2,     3,     2,     5,
       1,     3,     1,     3,     0,     2,     1,     7,     1,     3,
       2,     1,     1,     4,     0,     2,     3,     4,     4
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "$end", "error", "$undefined", "NUMBER", "SELECT", "FROM", "WHERE",
  "QUIT", "SOURCE", "CREATE", "TABLE", "USE", "DATABASE", "DROP", "BLANK",
  "\"eof\"", "\";\"", "\"-\"", "\"+\"", "\"*\"", "\"/\"", "\"(\"", "\")\"",
  "\",\"", "\"int\"", "\"double\"", "\"char\"", "\"primary key\"",
  "\"foreign key\"", "STRING", "FILENAME", "','", "$accept",
  "statement_list", "statement", "drop_table_statement",
  "drop_db_statement", "use_statement", "create_db_statement",
  "source_statement", "select_statement", "select_list", "table_list",
  "select_condition", "exp", "create_table_statement", "attribute_list",
  "attribute_exp", "variant_type", "constrain_list", "constrain_exp", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned char
  parser::yyrline_[] =
  {
       0,    62,    62,    63,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    80,    84,    88,    92,    96,   100,
     110,   111,   115,   116,   120,   121,   125,   129,   139,   140,
     144,   148,   149,   150,   154,   155,   156,   160,   161
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 1480 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.cpp" // lalr1.cc:1242
#line 164 "/Users/chenzhuo/Documents/ZJU/Courses/Grade2b/DBS/DM/compiler/parser.y" // lalr1.cc:1243


void
yy::parser::error (const location_type& l, const std::string& m)
{
  std::cerr << l << ": " << m << "\n";
}
