%option noyywrap

digit[0 - 9]

%%

{digit}* (1){digit}* {printf("contained 01\n");}
({digit} | {digit} *) { printf("not contained 01\n");}

.return;

%%

int main()
{
    yyflex();
    return 0;
}