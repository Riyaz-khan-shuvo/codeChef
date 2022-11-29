#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        if (a % 3 == 1)
        {
            c = 2;
        }
        else if (a % 3 == 2)
        {
            c = 1;
        }
        else
        {
            c = 0;
        }
        printf("%d\n", c);
    }

    return 0;
}