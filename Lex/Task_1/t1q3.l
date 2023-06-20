%option noyywrap

A [A-Z]
a [a-z]
dig [0-9]

%%

([p]{A}*{a}*{dig}*[q]) {printf("Valid! \n");}
({a}*{A}*{dig}*) {printf("invalid! \n");}
. return 0;

%%
a
int main()
{
    yylex();
    return 0;
}