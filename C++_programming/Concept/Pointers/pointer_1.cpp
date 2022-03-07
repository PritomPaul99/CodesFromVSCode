#include <iostream>

using namespace std;

int main()
{
    int a;
    a = 10;
    int *ptr;
    ptr = &a;
    *ptr = 2020;

    cout << "*ptr = " << *ptr << endl;
    cout << "ptr = " << ptr << endl;
    cout << "&a = " << &a << endl;
    cout << "a = " << a << endl;
    cout << "ptr size: " << sizeof(ptr) << endl;

    return 0;

}
