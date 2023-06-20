%{
#include <stdio.h>
%}

%%

[a-z]+(_[a-z]+)* { printf("Valid token: %s\n", yytext); }

%%
int yywrap() {
    return 1;
}
int main() {
    yylex();
    return 0;
}
