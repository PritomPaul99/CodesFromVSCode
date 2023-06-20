%option noyywrap

%%

[a-zA-Z]+ {
    char *p = yytext;
    int cnt = 0;

    while (*p != '\0') {
        if (*p == 'z' || *p == 'Z') {
            cnt++;
            if (cnt >= 3) {
                printf("Match\n");
                return 0;
            }
        }
        else {
            cnt = 0;
        }
        p++;
    }
    printf("No match\n");
}

%%

int main() {
    yylex();
    return 0;
}
