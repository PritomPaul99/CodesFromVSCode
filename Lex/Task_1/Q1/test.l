%option noyywrap

a[a-z]
unscor[_]

%%

^({a}*) {printf("Not matched\n");}
^

%%