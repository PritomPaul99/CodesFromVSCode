#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main()
{
    int t;
    int i = 1;
    while (t--)
    {
        char ch[100];

        cout << "Gets: ";
        gets(ch);
        strupr(ch);

        cout << ch;
        i++;
    }
}