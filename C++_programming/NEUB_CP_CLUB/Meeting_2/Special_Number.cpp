#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int q = (n*(n+1))/2; //1 + 2 + 3 + 4 +........+ n = q

    // if (q%2 != 0)
    // {
    //     // 3%2 = 1.5
    //     printf("YES\n" );
    // }
    // else
    // {
    //     printf("NO\n" );
    // }
    q%2 ? printf("YES\n" ) : printf("NO\n" );
}
