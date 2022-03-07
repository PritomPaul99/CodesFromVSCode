#include <stdio.h>
int main() {
    int n, i;
    int c[100], sum = 0;
    float avg;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%f", &c[i]);
        sum += c[i];
    }

    avg = sum / n;
    printf("Average = %f", avg);
    return 0;
}