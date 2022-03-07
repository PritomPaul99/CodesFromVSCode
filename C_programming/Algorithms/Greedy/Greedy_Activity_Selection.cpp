#include <stdio.h>
void printMaxActivities(int s[], int f[], int n);
void printMaxActivities2(int s[], int f[], int n);
void sort(int s[], int f[], int n);
int main()
{
    int s[] = {1, 3, 0, 5, 8, 5};
    int f[] = {2, 4, 6, 7, 9, 9};
    int s2[] = {3, 1, 0, 5, 8, 5};
    int f2[] = {4, 2, 6, 7, 9, 9};
    int n = sizeof(s) / sizeof(s[0]);
    printMaxActivities(s, f, n);
    printf("\n");
    printMaxActivities2(s2, f2, n);
    return 0;
}
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
    printf("Following activities are selected :");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
        if (s[j] >= f[i])
        {
            printf("%d ", j);
            i = j;
        }
    }
}

//when the activity is not sorted
void printMaxActivities2(int s[], int f[], int n)
{
    sort(s, f, n);
    int i, j;
    printf("Following activities are selected :");
    i = 0;
    printf("\nStarted: %d Ended: %d \n", s[i], f[i]);
    for (j = 1; j < n; j++)
    {
        if (s[j] >= f[i])
        {
            printf("Started: %d Ended: %d \n", s[j], f[j]);
            i = j;
        }
    }
}
void sort(int s[], int f[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j <= n - i; j++)
        {
            if (f[j] > f[j + 1])
            {
                k = 1;
                int temp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp;
                
                int temp2 = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp2;
            }
        }
        if (k == 0)
        {
            return;
        }
    }
}