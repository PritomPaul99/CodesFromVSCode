#include <iostream>

using namespace std;

void printArray(int array[], int n);

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sort:\n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Array after dort:\n";
    printArray(arr, n);
    return 0;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
    }
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