#include <iostream>
using namespace std;

void merge(int array[], int const left, int const mid, int const right);
void mergeSort(int array[], int const begin, int const end);

int findingMissing(int arr[], int q, int n)
{
    int i;
    mergeSort(arr, q, n);
    int check = 0;
    for (i = 0; i < n; i++)
    {
        // cout << "arr[i] = " << arr[i] << "      arr[i+1] = " << arr[i+1]<< endl;
        if (arr[i + 1] - arr[i] > 1)
        {
            // check = 1;
            break;
        }
        // if (check == 1)
        // {
        //     break;
        // }
    }
    if (arr[i] <= n)
    {
        return arr[i] + 1;
    }
    else{
        return 0;
    }
    
}

void merge(int array[], int const left, int const mid, int const right)
{
    auto const L1 = mid - left + 1;
    auto const L2 = right - mid;

    auto *leftArray = new int[L1],
         *rightArray = new int[L2];

    for (auto i = 0; i < L1; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < L2; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfSubArrayOne = 0,
         indexOfL2 = 0;
    int indexOfMergedArray = left;

    while (indexOfSubArrayOne < L1 && indexOfL2 < L2)
    {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfL2])
        {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else
        {
            array[indexOfMergedArray] = rightArray[indexOfL2];
            indexOfL2++;
        }
        indexOfMergedArray++;
    }

    while (indexOfSubArrayOne < L1)
    {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }

    while (indexOfL2 < L2)
    {
        array[indexOfMergedArray] = rightArray[indexOfL2];
        indexOfL2++;
        indexOfMergedArray++;
    }
}

void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively

    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int arr[] = {1, 3, 7, 2, 5, 4, 6};
    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    // printArray(arr, arr_size);

    int x = findingMissing(arr, 0, arr_size - 1);
    cout << "missing: " << x;
    // mergeSort(arr, 0, arr_size - 1);
    // cout << "\nSorted array is \n";
    // printArray(arr, arr_size);
    return 0;
}