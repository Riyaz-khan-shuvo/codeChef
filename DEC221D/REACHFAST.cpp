#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y, k, ans = 0, c = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &x, &y, &k);

        if (x > y)
        {
            ans = y;
            for (int i = 0; i < x; i++)
            {
                if (x > ans)
                {
                    ans += k;
                    c++;
                }
            }
        }
        if (x < y)
        {
            ans = x;
            for (int i = 0; i < y; i++)
            {
                if (y > ans)
                {
                    ans += k;
                    c++;
                }
            }
        }
        printf("%d\n", c);
        c = 0;
    }

    return 0;
}