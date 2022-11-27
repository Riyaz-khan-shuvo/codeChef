#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    scanf("%d", &t);
    if (t >= 1 && t <= 100)
    {
        while (t--)
        {
            scanf("%d %d", &a, &b);
            if (a >= 2 && a <= 12 && a > b)
            {
                printf("%d\n", (a * 4 + b));
            }
        }
    }

    return 0;
}