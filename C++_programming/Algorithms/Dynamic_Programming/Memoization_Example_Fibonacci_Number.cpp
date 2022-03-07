#include <iostream>
using namespace std;

#define MAX 100
int lookup[MAX];

void inti()
{
    for (int i = 0; i < MAX; i++)
    {
        lookup[i] = -1;
    }
}

int fib(int n)
{
    if (lookup[n] == -1)
    {
        if (n <= 1)
        {
            lookup[n] = n;
        }
        else
        {
            lookup[n] = fib(n - 1) + fib(n - 2);
        }
    }
    return lookup[n];
}

int main()
{
    int n = 10-1;
    inti();
    int x = fib(n);
    cout << "Nth Fibonacci number is: " << x;
    return 0;
}
