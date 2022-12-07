#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &n, &x, &c);
        int a[n], sum = 0, cou = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] + c < x)
            {
                a[i] = x;
                cou++;
            }
            sum += a[i];
        }
        printf("%d\n", (sum - (cou * c)));
    }

    return 0;
}