#include <iostream>

using namespace std;

void swap_array(int arr[], int n);
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before4 reverse:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    swap_array(arr, n);

    cout << "\nArray after reverse:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

void swap_array(int arr[], int n)
{
    int temp;
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
}



