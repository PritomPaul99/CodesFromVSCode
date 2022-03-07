#include <iostream>

using namespace std;

void printArray(int arr[], int n);
void bubbleSort(int arr[], int n);
int main()
{
    int arr[] = {4, 2, 6, 7, 1, 9, 0, 8, 13, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The array is:\n";
    printArray(arr, n);

    cout << "Sorting...\n\n";
    bubbleSort(arr, n);

    cout << "array after sorting:\n";
    printArray(arr, n);

    return 0;
}

void bubbleSort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n-1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) == n)
        {
            cout << arr[i] << endl;
        }
        else
        {
            cout << arr[i] << "  -  ";
        }
    }
}

//Pritom Paul