#include <iostream>

using namespace std;

void printArray(int arr[], int n);
void bubbleSort(int arr[], int n);

int main()
{
    int arr[] = {10, 5, 7, 14, 19, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The array is: \n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Array after sorting: \n";
    printArray(arr, n);

    return 0;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
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