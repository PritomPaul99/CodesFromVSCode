//Pritom Paul
#include <iostream>
using namespace std;

void printList(int array[], int size);
void bSort(int arr[], int size);
void bubbleSort(int array[], int size);

int main()
{
    int arr[] = {10, 5, 9, 12, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting:\n";
    printList(arr, n);
    cout << "\n\n";

    //sorting...
    bSort(arr, n);

    cout << "After sorting:\n";
    printList(arr, n);

    return 0;
}

void bSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        printList(arr, size);
    }
}

void printList(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if((i+1)==size)
        {
            cout << array[i];
            break;
        }
        cout << array[i] << "  -  ";
    }
    cout << "\n";
}