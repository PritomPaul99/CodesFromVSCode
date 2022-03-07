#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char str[10000];
    
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (i & 1 && str[i] != 'Z')
        {
            printf("YES\n");
            return 0;
        }
        if (!(i & 1) && str[i] != 'A')
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}