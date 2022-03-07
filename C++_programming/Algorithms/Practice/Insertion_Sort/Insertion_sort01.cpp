#include <iostream>

using namespace std;

void printArray(int array[], int n);
void insertionSort(int arr[], int n);

int main()
{
    int arr[] = {5, 3, 4, 1, 7, 2, 10, 6, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting:\n";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Array after sorting:\n";
    printArray(arr, n);
    return 0;
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

void insertionSort(int arr[], int n)
{
    cout <<"Called...\n";
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        cout << "loop 1:\nArr[i} = "<< arr[i]<< "\ni = " << i << "\nj = " << j << endl;
        while (j > -1 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
            cout << "   loop 2: \n  arr[j+1] = " << arr[j+1] << " arr[j] = " << arr[j] << "\n   j = " << j << endl;
        }
        arr[j + 1] = temp;
        cout << "after loop 2: \n"<< "temp = " << temp;
    }
}
