#include <stdio.h>

void printList(int array[], int n);
void quickSort(int arr[], int lb, int ub);
int partition(int arr[], int lb, int ub);
void sort(int arr[3], int n);

int main()
{
    int arr[] = {10, 5, 9, 12, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: \n");
    printList(arr, n);
    printf("\n\n");

    //sorting...
    quickSort(arr, 0, n - 1);

    printf("After sorting:\n");
    printList(arr, n);
}

void quickSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int part = partition(arr, lb, ub);

        quickSort(arr, lb, part - 1);
        quickSort(arr, part + 1, ub);
    }
}

int partition(int arr[], int lb, int ub)
{
    int arr2[3];
    // int x;
    int pivot;
    if ((ub - lb + 1) >= 3)
    {
        for (int i = (ub - 1), j = 0; i > ub - 3; --i, j++)
        {
            arr2[j] = arr[i];
        }
        sort(arr, 3);
        int temp = arr2[1];
        arr2[1] = arr[ub];
        arr[ub] = temp;
        pivot = arr2[1];
    }
    else
    {
        pivot = arr[ub];
    }


    int i = lb - 1;
    int j;

    for (j = lb; j < ub; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int h = arr[i];
            arr[i] = arr[j];
            arr[i] = h;
        }
    }
    // swap(arr[i + 1], arr[ub]);
    int h = arr[i + 1];
    arr[i + 1] = arr[ub];
    arr[i + 1] = h;
    return i + 1;
}

void printList(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == n)
        {
            printf("%d\n", array[i]);
            return;
        }
        printf("%d", array[i]);
        printf(" - ");
    }
}

void sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
