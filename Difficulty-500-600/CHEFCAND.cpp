#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            d = a - b;
            d = ceil((float)d / 4);
            printf("%d\n", d);
        }
        else
        {
            printf("%d\n", 0);
        }
    }

    return 0;
}