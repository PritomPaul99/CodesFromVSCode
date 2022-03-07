#include<istream>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int r1, r2;
        scanf("%d %d", &r1, &r2);
        int n = 0;
        n = (0.83 * ((r1*r1)/(r2*r2)) - 1.9);

        printf("%d\n",n);
    }
    
}