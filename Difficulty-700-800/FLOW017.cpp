#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a > b && a > c)
        {
            if (b > c)
            {
                d = b;
            }
            else
            {
                d = c;
            }
        }
        else if (b > a && b > c)
        {
            if (a > c)
            {
                d = a;
            }
            else
            {
                d = c;
            }
        }
        else if (c > a && c > b)
        {
            if (a > b)
            {
                d = a;
            }
            else
            {
                d = b;
            }
        }

        printf("%d\n", d);
    }
    return 0;
}