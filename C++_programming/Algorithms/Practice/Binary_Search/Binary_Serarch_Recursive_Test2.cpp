#include <iostream>

using namespace std;

int binarySearch(int arr[], int x, int l, int r);
void printArray(int array[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]); //Number of array elements. If we divide the size of the whole array by the size of a single array element
                                          //we will have the number of array elements
    int x;
    cout << "The array is:\n";
    printArray(arr, n);

    x = 8; // Item to search

    int pos = binarySearch(arr, x, 0, (n - 1));

    if (pos == -1)
    {
        cout << "Item not found";
    }
    else
    {
        cout << "8 found at: " << pos + 1 << endl;
    }

    x = 3; // 2ned search
    pos = binarySearch(arr, x, 0, (n - 1));

    if (pos == -1)
    {
        cout << "\nItem not found";
    }
    else
    {
        cout << "\n3 found at: " << pos + 1 << endl;
    }

    return 0;
}

int binarySearch(int *arr, int x, int l, int r)
{
    int mid;
    while (r >= l)
    {
        mid = (l + r) / 2;
        if (x == arr[mid])
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            return binarySearch(arr, x, mid + 1, r);
        }
        else if (arr[mid] > x)
        {
            return binarySearch(arr, x, l, mid - 1);
        }
    }
    return -1;
}

void printArray(int array[], int n) // For printing the array
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