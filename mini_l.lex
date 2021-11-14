%{
    #include "includes.h"
    #include "tok.h"
    int currentLine = 1;        /* Setup Line and Depth tracking variables */
    int currentColumn = 0;
%}

DIGIT		[0-9]
ALPHANUM    [a-zA-Z0-9]
WHITESPACE	[ \t\0]
WHITESPACENL	[\n\r]
INVALIDSTART	[0-9|_][a-zA-Z0-9]*
INVALIDEND	[a-zA-Z][a-zA-Z0-9|_]*[_]
COMMENTS	[##].*


%%
"function"	    {yylval.aString = strdup(yytext); return FUNCTION; currentColumn += yyleng;} /* Reserved Words */
"beginparams" 	{yylval.aString = strdup(yytext); return BEGIN_PARAMS; currentColumn += yyleng;}
"endparams"     {yylval.aString = strdup(yytext); return END_PARAMS; currentColumn += yyleng;}
"beginlocals" 	{yylval.aString = strdup(yytext); return BEGIN_LOCALS; currentColumn += yyleng;}
"endlocals"     {yylval.aString = strdup(yytext); return END_LOCALS; currentColumn += yyleng;}
"beginbody"     {yylval.aString = strdup(yytext); return BEGIN_BODY; currentColumn += yyleng;}
"endbody"     	{yylval.aString = strdup(yytext); return END_BODY; currentColumn += yyleng;}
"integer"   	{yylval.aString = strdup(yytext); return INTEGER; currentColumn += yyleng;}
"read"     	    {yylval.aString = strdup(yytext); return READ; currentColumn += yyleng;}
"write"     	{yylval.aString = strdup(yytext); return WRITE; currentColumn += yyleng;}
"array"	    	{yylval.aString = strdup(yytext); return ARRAY; currentColumn += yyleng;}
"of"		    {yylval.aString = strdup(yytext); return OF; currentColumn += yyleng;}
"if"		    {yylval.aString = strdup(yytext); return IF; currentColumn += yyleng;}
"then"		    {yylval.aString = strdup(yytext); return THEN;currentColumn += yyleng;}
"endif"		    {yylval.aString = strdup(yytext); return ENDIF; currentColumn += yyleng;}
"else"		    {yylval.aString = strdup(yytext); return ELSE; currentColumn += yyleng;}
"while"		    {yylval.aString = strdup(yytext); return WHILE; currentColumn += yyleng;}
"do"		    {yylval.aString = strdup(yytext); return DO; currentColumn += yyleng;}
"beginloop"	    {yylval.aString = strdup(yytext); return BEGINLOOP; currentColumn += yyleng;}
"endloop"	    {yylval.aString = strdup(yytext); return ENDLOOP; currentColumn += yyleng;}
"continue"	    {yylval.aString = strdup(yytext); return CONTINUE; currentColumn += yyleng;}
"and"		    {yylval.aString = strdup(yytext); return AND; currentColumn += yyleng;}
"or"		    {yylval.aString = strdup(yytext); return OR; currentColumn += yyleng;}
"not"		    {yylval.aString = strdup(yytext); return NOT; currentColumn += yyleng;}
"true"		    {yylval.aString = strdup(yytext); return TRUE; currentColumn += yyleng;}
"false"		    {yylval.aString = strdup(yytext); return FALSE; currentColumn += yyleng;}
"return"	    {yylval.aString = strdup(yytext); return RETURN; currentColumn += yyleng;}

"-"     {yylval.aString = strdup(yytext); return SUB; currentColumn += yyleng;} /* Arithmetic Operators */
"+"     {yylval.aString = strdup(yytext); return ADD; currentColumn += yyleng;}
"*"     {yylval.aString = strdup(yytext); return MULT; currentColumn += yyleng;}
"/"     {yylval.aString = strdup(yytext); return DIV; currentColumn += yyleng;}
"%"     {yylval.aString = strdup(yytext); return MOD; currentColumn += yyleng;}

"=="	{yylval.aString = strdup(yytext); return EQ; currentColumn += yyleng;} /* Comparison Operators */
"<"	    {yylval.aString = strdup(yytext); return LT; currentColumn += yyleng;}
">"	    {yylval.aString = strdup(yytext); return GT; currentColumn += yyleng;}
"<="	{yylval.aString = strdup(yytext); return LTE; currentColumn += yyleng;}
">="	{yylval.aString = strdup(yytext); return GTE; currentColumn += yyleng;}
"<>"	{yylval.aString = strdup(yytext); return NEQ; currentColumn += yyleng;}

";"     {yylval.aString = strdup(yytext); return SEMICOLON; currentColumn += yyleng;} /* Other Special Symbols */
":"     {yylval.aString = strdup(yytext); return COLON; currentColumn += yyleng;}
"("     {yylval.aString = strdup(yytext); return L_PAREN; currentColumn += yyleng;}
")"     {yylval.aString = strdup(yytext); return R_PAREN; currentColumn += yyleng;}
":="   	{yylval.aString = strdup(yytext); return ASSIGN; currentColumn += yyleng;}
","	    {yylval.aString = strdup(yytext); return COMMA; currentColumn += yyleng;}
"["	    {yylval.aString = strdup(yytext); return L_SQUARE_BRACKET; currentColumn += yyleng;}
"]"	    {yylval.aString = strdup(yytext); return R_SQUARE_BRACKET; currentColumn += yyleng;}

[a-zA-Z]({ALPHANUM}|_+{ALPHANUM})*		{yylval.aString = strdup(yytext); return IDENTIFIER; currentColumn += yyleng;} /* Identifiers */

{DIGIT}+        {yylval.num = atoi(yytext); return NUMBER; currentColumn += yyleng;} /* Numbers */

{WHITESPACE}+ 	{currentColumn += yyleng;} /* WHITESPACE */
{WHITESPACENL}+ {currentColumn = 0; currentLine += 1;} /* WHITESPACENL */

{COMMENTS}	{currentLine += 1; currentColumn = 0;} /*Comments on a single line */

{INVALIDSTART}	{printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n",
		    currentLine, currentColumn, yytext); exit(1);} /*Invalid identifiers: must start with a letter */

{INVALIDEND}	{printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n",
		    currentLine, currentColumn, yytext); exit(1);} /*Invalid identifiers: cannot end with an underscore */

.		{printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n",
                    currentLine, currentColumn, yytext); exit(1);}                        /* Catch anything else */

%%
