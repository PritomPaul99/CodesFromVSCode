#include <stdio.h>

int main()
{
    char C;

    scanf("%c", &C);

    if (C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}