#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a * b <= c * d)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}