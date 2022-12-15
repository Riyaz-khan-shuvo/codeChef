#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &y);
        if (x >= y * 2)
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