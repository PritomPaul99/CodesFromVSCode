#include <iostream>

using namespace std;

void printArray(int array[], int n);
void bubbleSort(int arr[], int n);

int main()
{
    int arr[] = {8, 7, 6, 5, 4, 9, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting : \n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "\nArray after sorting:\n";
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
            // cout << "-->";
            // printArray(arr, n);
        }
        // cout << "---->";
        // printArray(arr, n);
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
//Pritom Paul