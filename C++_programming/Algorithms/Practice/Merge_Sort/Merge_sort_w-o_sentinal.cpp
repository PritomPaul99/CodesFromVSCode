#include <iostream>
#define So sizeof

using namespace std;

void printArray(int array[], int n);
void mergeSort(int arr[], int lb, int ub);
void merge(int arr[], int lb, int mid, int ub);

int main()
{
    int arr[] = {8, 6, 5, 2, 4, 1, 3, 7};
    int n = So(arr) / So(arr[0]);

    cout << "Array before sorting:\n";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Array after sorting:\n";
    printArray(arr, n);

    return 0;
}

void mergeSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;

        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

void merge(int arr[], int lb, int mid, int ub)
{
    int n1 = mid - lb + 1;
    int n2 = ub - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[lb + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = lb;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
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