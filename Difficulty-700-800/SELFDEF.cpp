#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, count = 0;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] >= 10 && a[i] <= 60)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}