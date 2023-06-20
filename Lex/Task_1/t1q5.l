%option noyywrap

INT [0-9]
dot [.]

%%

({INT}{dot}) {printf("invalid number.\n");}
({INT}*{dot}{INT}+) {printf("floating point\n");}
({INT}*) {printf("integre'\n");}
. return 0;


%%

int main()
{
    yylex();
    return 0;
}