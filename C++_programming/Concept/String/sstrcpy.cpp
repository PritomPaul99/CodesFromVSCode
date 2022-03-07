#include <bits/stdc++.h>

using namespace std;

int main()
{
    char name[] = "Pritom";
    char name1[10];

    int len1 = strlen(name);

    strcpy(name1, name);

    strcat(name1, name);

    cout << "String: " << name << endl
         << "Lenth 1: " << len1 << endl
         << "Name1: " << name1 << endl;

    
}