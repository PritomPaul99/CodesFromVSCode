%option noyywrap
digit [0-9]
letter [a-fA-F]
hex [0-9a-fA-F]
%%


([#]{hex}{hex}{hex}{hex}{hex}{hex}) { printf("Valid Hex code\n"); return 0;}
([#]{hex}{hex}{hex}{hex}{hex}{hex}{hex}+) { printf("Invalid Hex Code\n"); return 0;}
. { printf("Invalid Hex code\n"); return 0;}

%%

int main()
{
    yylex();
    return 0;
}
