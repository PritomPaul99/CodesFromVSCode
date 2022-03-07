#include <iostream>
#include <math.h>

#define Inf 2147483648

using namespace std;

// int cut_rod(int *arr, int n)
// {
//     if (n==0)
//     {
//         return 0;
//     }
//     int q = -Inf;
//     for (int i = 0; i < n; i++)
//     {
//         q = max(q, arr[i]+cut_rod(arr, n-i-1));
//     }
//     return q;
// }
int CUT_ROD(int p[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    int q = -Inf;
    for (int i = 0; i < n; i++)
    {
        q = max(q, p[i] + CUT_ROD(p, n - i - 1));
    }
    return q;
}
int main()
{
    int arr[] = {1, 5, 8, 9, 10, 16, 17, 20, 24, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int q = CUT_ROD(arr, n);
    cout << q;
    return 0;
}
