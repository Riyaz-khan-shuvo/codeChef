#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if ((a == c || a == d) && ((b == c) || b == d))
        {
            printf("%d\n", 0);
        }
        else if (a != c && a != d && b != c && b != d)
        {
            printf("%d\n", 2);
        }
        else
        {
            printf("%d\n", 1);
        }
    }

    return 0;
}