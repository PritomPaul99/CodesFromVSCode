#include <stdio.h>
int main()
{
    char str[1000];
    int T;
    scanf("%d", &T);
    getchar();
    for (int i = 0; i < T; i++)
    {
        int count = 0;

        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);

        for (int i = 0; str[i] != '\0'; ++i)
        {
            if ('#' == str[i])
                ++count;
        }

        printf("%d", count);
    }
    return 0;
}