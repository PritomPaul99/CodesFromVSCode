#include <stdio.h>

int main()
{
    char str[100];
    // scanf("%[^\n]%*c", str);
    // gets(str);
    fgets(str, 100, stdin); // (str, str_length, stdin)
    
    printf("Hello World!\n");
    printf("%s", str);

}
