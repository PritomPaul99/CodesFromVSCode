#include <iostream>
using namespace std;

int main()
{
    int i, n;
    bool isPrime = false;

    cin >> n;

    for (int i = 2; i * i < n; i++)
        if (n % i == 0)
            isPrime = true;

    if (isPrime)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}