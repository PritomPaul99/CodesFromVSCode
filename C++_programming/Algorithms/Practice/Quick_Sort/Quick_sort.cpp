#include <iostream>

using namespace std;

void printArray(int array[], int n);
void quickSort(int arr[], int lb, int ub);
int partition(int arr[], int lb, int ub);

int main()
{
    int arr[] = {8, 7, 6, 5, 4, 3, -3, -6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array:\n";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}

void quickSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int pi = partition(arr, lb, ub);

        quickSort(arr, lb, pi - 1);
        quickSort(arr, pi + 1, ub);
    }
}

int partition(int arr[], int lb, int ub)
{
    int pivot = arr[ub];
    int i = lb - 1;
    int j;

    for (j = lb; j < ub; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[ub]);
    return i + 1;
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