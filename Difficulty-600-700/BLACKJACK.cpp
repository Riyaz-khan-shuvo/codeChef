#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        c = 21 - (a + b);
        if (c > 10)
        {
            c = -1;
        }
        printf("%d\n", c);
    }

    return 0;
}