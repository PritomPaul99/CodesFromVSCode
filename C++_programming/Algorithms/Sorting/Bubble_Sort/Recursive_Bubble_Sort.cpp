#include <iostream>

using namespace std;

void printData(int arr[], int num);
void bSort(int arr[], int n);

int main()
{
    int arr[100];
    int n;

    cout << "Enter number5 of data: ";
    cin >> n;

    cout << "Enter space seperated data: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nData before sorting: \n";
    printData(arr, n);

    //calling a recursive function
    bSort(arr, n);

    cout << "\nData after sorting: \n";
    printData(arr, n);

    return 0;
}

void bSort(int arr[], int n)
{
    if(n==1)
    {
        return;
    }
    else
    {
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
            }
        }
        bSort(arr, n-1);        
    }
}

void printData(int arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";
}

//Pritom Paul