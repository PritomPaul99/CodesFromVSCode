#include <iostream>

using namespace std;
void printArray(int array[], int n);
void bubbleSort(int arr[], int n);
int main()
{
    int arr[] = {5, 3, 4, 1, 7, 2, 10, 6, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting:\n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Array after sorting:\n";
    printArray(arr, n);

    return 0;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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