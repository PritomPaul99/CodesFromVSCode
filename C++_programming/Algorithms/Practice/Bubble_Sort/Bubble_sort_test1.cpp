#include <iostream>

using namespace std;

void printData(int arr[], int n);
void bSort(int arr[], int n);

int main()
{
    int arr[100];
    int n;

    cout << "Enter the number of array (1-100): ";
    cin >> n;

    cout << "Enter the array (Space seperated): \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nArray before sorting: \n";
    printData(arr, n);

    bSort(arr, n);

    cout << "\n\nArray after sortingL:\n";
    printData(arr, n);

    return 0;
}

void printData(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == n)
        {
            cout << arr[i];
            break;
        }
        cout << arr[i] << "  -  ";
    }
}

void bSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

//Pritom Paul