#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, w, x, y, z;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &w, &x, &y, &z);
        if (w == (x + y + z) || w == (x + y) || w == (x + z) || w == (y + z) || w == x || w == y || w == z)
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