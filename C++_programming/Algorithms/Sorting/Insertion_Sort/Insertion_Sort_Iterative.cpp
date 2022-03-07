#include <iostream>

using namespace std;

void printArray(int array[], int n);
void insertionSort(int arr[], int n);

int main()
{
    int arr[] = {5, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Printing the array:\n";
    printArray(arr, n);

    cout << "\nAfter sorting:\n";
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) // i stuarts from the 2nd element of the array
    {
        int key = arr[i]; // Copying the 2nd element of the array to the "key" variable

        int j = i - 1; // j starts from the 1st element of the array

        while (j > -1 && arr[j] > key) // j backtracks to 0th element from i-1 element, j eventually ec=nd up being -1
        {
            arr[j + 1] = arr[j];
            // j = j - 1;
            j--;
        }
        arr[j + 1] = key;
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