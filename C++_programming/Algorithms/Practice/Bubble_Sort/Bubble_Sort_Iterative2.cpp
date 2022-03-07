#include <iostream>

using namespace std;

void printArray(int array[], int n);
void bubbleSort(int arr[], int n);

int main()
{
    int arr[] = {8, 7, 6, 5, 54, 3, 2, 1, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Arr4ay before sorting: \n";
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
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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