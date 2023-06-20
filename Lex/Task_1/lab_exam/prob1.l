%option noyywrap

letter [a-zA-Z]
digit [0-9]
und _
dot .
at @
lower [a-z]
upper [A-Z]

%%

{letter}|{und}+({letter}|{digit}|{und}|{dot})*{at}({lower}|{upper}|{digit}|{und})+{dot}{lower}{lower}+ { printf("Valid email\n"); return 0;}
. { printf("Invalid email\n"); return 0;}

%%

int main() {
    yylex();
    return 0;
}
