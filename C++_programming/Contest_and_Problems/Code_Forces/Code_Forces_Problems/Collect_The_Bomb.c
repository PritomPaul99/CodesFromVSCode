#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    
    char S[100000];

    for (int i = 0; i < T; i++)
    {
        int count = 0;
        gets(S);
        for (int i = 0; S[i] != '\0'; i++)
        {
            if ('#' == S[i])
            ++count;
        }
        printf("%d", count);
    }
    
}