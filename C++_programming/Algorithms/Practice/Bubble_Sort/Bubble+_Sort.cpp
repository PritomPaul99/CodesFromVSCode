//Pritom Paul
#include <iostream>
using namespace std;
void printArray(int arr[], int n);

int main()
{
    int arr[10];
    int n;
    cout << "Sorting Algorithms: Bubble Sort\n\n"
         << endl;
    cout << "Enter the number of array:(<=10) ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unsorted: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; i < n - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted: ";
    printArray(arr, n);

    return 0;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// for (int i = 0; i < n-1; i++)
// {
//     for (int j = i+1; j < n; j++)
//     {
//         if (arr[i] > arr[j])
//         {
//             swap(arr[i], arr[j]);
//             cout<< "i, j and array: ";
//             printArray(arr,n);
//             cout<<"\n";
//         }

//     }

// }