#include <Vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> x;
    int i;

    for (i = 0; i < 10; ++i)
    {
        x.push_back(i);
    }
    for (i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl
         << "Size is: " << x.size() << endl
         << "Capacity: " << x.capacity() << endl
         << "Max_Size: " << x.max_size() << endl
         << endl;

    cout<< sizeof(x);
}