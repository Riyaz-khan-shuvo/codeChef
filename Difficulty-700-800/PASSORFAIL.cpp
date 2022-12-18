#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x, p;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &n, &x, &p);
        if ((3 * x) - (n - x) >= p)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
    }

    return 0;
}