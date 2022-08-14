#include <iostream>
#include <cstdlib>
using namespace std;

int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;
	return (*x - *y);
}

int main()
{
	const int num = 10;
	int arr[num] = {5,9,10,14,16,19,21,26,29,31};
	int key1 = 10;
	int *p1 = (int*)bsearch(&key1,arr,num,sizeof(int),compare);

	if(p1 == NULL)
		cout << key1 << " not found " << endl;
	else
		cout << key1 << " found at position " << (p1-arr) << endl;

	int key2 = 15;
	int *p2 = (int*)bsearch(&key2,arr,num,sizeof(int),compare);
	if(p2 == NULL)
		cout << key2 << " not found " << endl;
	else
		cout << key2 << " found at position " << (p2-arr) << endl;
	return 0;
}