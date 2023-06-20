%option noyywrap

A [a-z]

%%
[a-z]+ {
    int cnt = 0;
    char *p = yytext;

    while(*p != '\0'){
        if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')){
            cnt++;
        }
    }
}
%%

int main()
{
    yylex();
    return 0;
}