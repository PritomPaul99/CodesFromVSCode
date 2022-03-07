#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (size_t i = 0; n != 0; i++)
    {
        int rem = n%10;
        n = n/10;
        cout<< rem;
    }
    
}