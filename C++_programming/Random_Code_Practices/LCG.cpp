#include <iostream>

using namespace std;


int main()
{
    int z0, z, i = 0;
    cin >> z0;
    int zx = z0;

    while(true)
    {
        z = ((5 * z0) + 3) % 16;
        cout << "z" << i+1 << " = " << z << endl;
        i++;
        if (z == zx)
        {
            cout << "End in: " << i << endl;
            break;
        }
        z0 = z;
        z = 0;
    }
    return 0;
}



