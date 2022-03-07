#include<iostream>

using namespace std;

int main()
{
    int T;
    int N;
    int m, sum = 0, count = 0;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        cin>>N;
        while (N>0)
        {
            m = N%10;
            sum = sum + m;
            N = N/10;
            count++;
        }
        count<<sum;
        count<<count;
    }
    return 0;
}