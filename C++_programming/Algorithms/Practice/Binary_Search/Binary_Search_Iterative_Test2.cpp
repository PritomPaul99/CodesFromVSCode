#include <iostream>

using namespace std;

void printArray(int array[], int n);
int binarySearch(int arr[], int n, int x);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = -1;
    cout << "The array" << endl;
    printArray(arr, n);

    int pos = binarySearch(arr, n, x);

    if (pos == -1)
    {
        cout << "Item is not found" << endl;
    }
    else
    {
        cout << "Item found at: " << pos + 1 << endl;
    }

    return 0;
}

int binarySearch(int arr[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    int mid;
    while (r >= l)
    {
        mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            l = mid + 1;
        }
        else if (x < arr[mid])
        {
            r = mid - 1;
        }
        //cout << "\nL: " << l << " R: " << r << endl;
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