#include <iostream>

using namespace std;

void swap(int *a, int *b);
void revArray(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before reversion:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " - ";
    }

    revArray(arr, n);


    cout << "\nArray after reversion:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " - ";
    }
    
    return 0;
}

void revArray(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(&arr[i], &arr[j]);
        i++, j--;
    }
    
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}



