#include <iostream>

using namespace std;

void insertionSort(int arr[], int n);
void printArray(int array[], int n);

int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]); //Determining the size of the array.

    cout << "The array is:\n";
    printArray(arr, size); //Self explanatory. Just printing the array before sorting.

    cout << "\n\n";
    insertionSort(arr, size); //Calling the insertionSort function.

    cout << "After sorting:\n";
    printArray(arr, size);

    return 0;
}

void insertionSort(int arr[], int n) //Return type is void because insertionSort() function is not returning anything. I is just sorting the array.
{
    for (int i = 1; i < n; i++) //First loop. Loop is starting from the 2nd array element, beause it will start compairing wit it's previous item.
    {
        int temp = arr[i]; // Coping the item to a temporary variable.
        int j = i-1;
        while (j > -1 && arr[j] > temp) // 2nd loop.
        {
            arr[j+1] = arr[j];
            j = j - 1; 
            // cout <<"------------------>";
            // printArray(arr, n);
            // cout << "\n";
        }
        arr[j+1] = temp;
        // cout << "\n";
        // printArray(arr, n);
    }
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