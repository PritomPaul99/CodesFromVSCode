#include <iostream>
#include <limits.h>

using namespace std;

int M(int *T, int *s, int n)
{
    int r[5], q, i, j, max = INT_MIN;
    r[0] = -1;
    for (i = 1; i <= n; i++)
    {   
        j = i;
        q = 0;
        // while (j <= 5)
        for (j = i; j <= 5; j++)
        {
            q = (q, q + T[j]);
            j = j + s[j] ;
        }
        r[i] = q;
        
        if(r[i-1] > r[i])
        {
            swap(r[i-1], r[i]);
        }

        printf("%d\n", r[i]);
    }
    cout << endl;

    return r[n];
}

int main()
{
    int T[6] = {10, 15, 6, 20};
    int s[6] = {2, 1, 1, 0};
    printf("%d\n", M(&T[0], &s[0], 4));
}