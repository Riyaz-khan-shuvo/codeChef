#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d, e;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        d = ceil((float)b / a);
        if (c - d < 0)
        {
            e = 0;
        }
        else
        {
            e = c - d;
        }
        printf("%d\n", e);
    }

    return 0;
}