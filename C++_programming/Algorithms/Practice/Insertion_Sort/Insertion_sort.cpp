#include <iostream>

using namespace std;
void printArray(int array[], int n);
void insertionSort(int arr[], int n);
int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The array:" << endl;
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Array after sorting:" << endl;
    printArray(arr, n);
    return 0;
}

void insertionSort(int arr[], int n)
{
    int temp;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while (j > -1 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
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