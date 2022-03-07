#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char ch[101];
        cin >> ch;
        int count1 = 0, count2 = 0;
        for (int i = 0; ch[i] != '\0'; i++) //for counting the length of the string. You can also use strlen() to find the length of the string
        {
            count1++;
        }

        if (count1 <= 10)
        {
            printf("%s", ch);
        }
        else
        {

            for (int i = 1; i < count1 - 1; i++)
            {
                count2++;
            }
            printf("%c%d%c", ch[0], count2, ch[count1-1]);
        }
        printf("\n");
    }
}