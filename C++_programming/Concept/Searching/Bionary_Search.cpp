#include <iostream>

using namespace std;

int b_search(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = (r - l) + l / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            return b_search(arr, l, mid - 1, x);
        }
        else
        {
            return b_search(arr, mid + 1, r, x);
        }
    }
    return -1;
}

int main()
{
    int n = 10;
    int arr[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 7;

    int pos = b_search(arr, 0, n - 1, x);

    if (pos == -1)
    {
        cout << "Not found!" << endl;
    }
    else
    {
        cout << "Element is in " << pos << "th position!" << endl;
    }
    return 0;
}
