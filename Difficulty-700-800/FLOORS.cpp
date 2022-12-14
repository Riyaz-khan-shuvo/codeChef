#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        int c = ceil((float)a / 10);
        int d = ceil((float)b / 10);
        if (d >= c)
        {
            printf("%d\n", d - c);
        }
        else
        {
            printf("%d\n", c - d);
        }
    }

    return 0;
}