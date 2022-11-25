#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a > b && a > c)
        {
            if (b > c)
            {
                printf("%d\n", b);
            }
            if (b < c)
            {
                printf("%d\n", c);
            }
        }
        if (b > a && b > c)
        {
            if (a > c)
            {
                printf("%d\n", a);
            }
            if (a < c)
            {
                printf("%d\n", c);
            }
        }
        if (c > a && c > b)
        {
            if (a > b)
            {
                printf("%d\n", a);
            }
            if (a < b)
            {
                printf("%d\n", b);
            }
        }
    }

    return 0;
}
