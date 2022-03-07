#include <stdio.h>

/* Checks whether a is odd or not. Returns 1 
if a is Odd number otherwise 0 */
int isOdd(int a)
{
    return a % 2;
}

/*Seperates Even and Odd Numbers of an array. first all Even and 
then all Odd numbers. This approach is similar to partition step 
of quick sort */
void seperateOddEven(int *array, int size)
{
    int temp, left = 0, right = size - 1;
    while (right > left)
    {
        /* traverse from left to right till we find a Odd number */
        while (!isOdd(array[left]))
            left++;
        /* traverse from right to left till we find an Even number */
        while (isOdd(array[right]))
            right--;

        if (left < right)
        {
            /* Swap array[left] and array[right] */
            temp = array[right];
            array[right] = array[left];
            array[left] = temp;
        }
    }
}

int main()
{
    int array[10] = {2, 7, 5, 10, 13, 20, 14, 0, 7, 3};
    int i;

    seperateOddEven(array, 10);

    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}