#include <iostream>

using namespace std;

int binarySearch(int arr[], int x, int l, int r);
void printArray(int array[], int n);

int main()
{
    int arr[] = {2, 3, 5, 6, 7, 8, 9, 10, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The array is:\n";
    printArray(arr, n);

    cout << "\nNow searching...\n";
    int q;
    cout << "Enter the number to search: ";
    cin >> q;

    int result = binarySearch(arr, q, 0, (n - 1));

    (result == -1) ? (cout << "Data not found!\n\n") : (cout << "Data found at " << result + 1 << "th position.\n\n");

    return 0;
}

int binarySearch(int arr[], int x, int l, int r)
{
    int mid;
    while (r >= l)
    {
        mid = (r + l) / 2;
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