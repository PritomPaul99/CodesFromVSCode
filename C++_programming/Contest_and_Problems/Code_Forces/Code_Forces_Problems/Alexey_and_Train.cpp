#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> v1;
        vector<int> v2;
        for (int j = 0; j < n; j++)
        {
            int in;
            cin >> in;
            v1.push_back(in);
        }
        sort(v1.begin(), v1.end());
        for (int j = 0; j < n; j++)
        {
            if (j != 0)
            {
                if (v1[j] != v1[j - 1])
                    cout << v1[j] << " ";
                else
                    v2.push_back(v1[j]);
            }
            else
                cout << v1[j] << " ";
        }
        for (int j = 0; j < v2.size(); j++)
        {
            cout << v2[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}