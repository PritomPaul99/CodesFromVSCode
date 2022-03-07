#include <iostream>

using namespace std;

void printArray(int array[], int n);
void selectionSort(int arr[], int n);
int main()
{
    int arr[] = {10, 9, 8, 7, 1, 5, 4, 3, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting:\n";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Array after sorting:\n";
    printArray(arr, n);
    return 0;
}

void selectionSort(int arr[], int n)
{
    int min, i, j;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

// void selectionSort(int arr[], int n)
// {
//     int i, j, min_idx;

//     // One by one move boundary of unsorted subarray
//     for (i = 0; i < n - 1; i++)
//     {
//         // Find the minimum element in unsorted array
//         min_idx = i;
//         for (j = i + 1; j < n; j++)
//             if (arr[j] < arr[min_idx])
//                 min_idx = j;

//         // Swap the found minimum element with the first element
//         swap(arr[min_idx], arr[i]);
//     }
// }

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
