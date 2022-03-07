#include <iostream>
#include <math.h>
using namespace std;

int findMissing(int arr[], int n)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        int check = 0;
        for (int j = 0; j < n; j++)
        {
            // cout << "I: " << i << "  Arr: " << arr[j] << endl;
            if (arr[j] == i)
            {
                check = 1;
                // cout << "Yes" << endl;
                // break;
            }
        }
        if (check == 0)
        {
            break;
        }
    }
    return i;
}
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == n)
        {
            cout << array[i] << endl;
            return;
        }
        cout << array[i] << "  -  ";
    }
}
int main()
{
    int a[] = {1, 3, 0, 2, 4, 7, 5};
    int n = sizeof(a) / sizeof(a[0]);
    printArray(a, n);
    int x = findMissing(a, n);
    cout << "Missing: " << x;
    return 0;
}
