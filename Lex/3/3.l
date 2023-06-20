%option noyywrap

%%

[a-z]+_ {
  printf("Matched token: %s\n", yytext);

}

. {
  printf("Unmatched character: %c\n", yytext[0]);
}

%%

int main() {
  yylex();
  return 0;
}
