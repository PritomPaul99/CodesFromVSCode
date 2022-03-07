#include <iostream>
// #include <math.h>
#define INFINITY 2147483647

using namespace std;


void printArray(int array[], int n);
void merge(int *arr, int lb, int mid, int ub);
void mergeSort(int *arr, int lb, int ub);

int main()
{
    int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting:\n";
    printArray(arr, n);

    //calling the merge sort function
    mergeSort(arr, 0, n - 1);

    cout << "Array after sorting:\n";
    printArray(arr, n);
    return 0;
}

void mergeSort(int *arr, int lb, int ub)
{
    if (ub > lb)
    {
        int mid = (lb + ub) / 2;

        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
    else
    {
        return;
    }
}

void merge(int arr[], int lb, int mid, int ub)
{
    int nl = (mid - lb) + 1;
    int nr = ub - mid;
    int L[nl + 1], R[nr + 1]; //Last element is sentinel

    for (int i = 0; i < nl; i++)
    {
        L[i] = arr[lb + i];
    }
    L[nl] = INFINITY;
    for (int i = 0; i < nr; i++)
    {
        R[i] = arr[mid + 1 + i];
    }
    R[nr] = INFINITY;

    int i(0), j(0), k;

    for (k = lb; k <= ub; k++)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
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