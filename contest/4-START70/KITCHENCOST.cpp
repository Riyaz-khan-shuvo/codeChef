#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x, i, j, price = 0;
        scanf("%d %d", &n, &x);
        int a[n], b[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] >= x)
            {
                price += b[i];
            }
        }
        printf("%d\n", price);
    }

    return 0;
}
