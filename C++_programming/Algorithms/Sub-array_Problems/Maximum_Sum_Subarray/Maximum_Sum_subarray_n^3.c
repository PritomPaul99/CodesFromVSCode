#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))


#define so sizeof

int main()
{
    int arr[] = {-1, 4, -2, 5};
    int m = MAX(MAX(10, 30), 50);

    printf("%d", m);
}