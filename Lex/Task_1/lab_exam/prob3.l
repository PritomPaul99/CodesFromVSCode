%
#include <stdio.h>
%
%option noyywrap

A [a-z]

%%



%%

int main()
{
    yylex();
    return 0;
}