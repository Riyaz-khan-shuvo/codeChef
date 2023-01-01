#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int s[n], d[n], equ = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &s[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &d[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == d[i])
            {
                equ++;
            }
        }
        printf("%d\n", equ);
    }

    return 0;
}