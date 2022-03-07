#include <stdio.h>
int main() {
    char S[1000];
    char ch = '#';
    int count = 0;

    printf("Enter a string: ");
    fgets(S, sizeof(S), stdin);

    for (int i = 0; S[i] != '\0'; ++i) {
        if (ch == S[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}