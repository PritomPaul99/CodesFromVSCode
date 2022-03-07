#include <iostream>

using namespace std;

int binarySearch(int array[], int left, int right, int x);
void printArray(int array[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Data is:\n";
    printArray(arr, n);

    cout << "\nEnter a number to search: ";
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1)
    {
        cout << "\nData not found!\n\n";
    }
    else
    {
        cout << "\nData found at position no: " << result + 1 << endl
             << "\n";
    }

    return 0;
}

int binarySearch(int array[], int left, int right, int x)
{
    int mid;
    if (right >= left)
    {
        mid = (left + right) / 2;

        if (x == array[mid])
        {
            return mid;
        }
        else if (x > array[mid])
        {
            return binarySearch(array, (mid + 1), right, x);
        }
        else if (x < array[mid])
        {
            return binarySearch(array, left, (mid - 1), x);
        }
    }
    return -1;
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