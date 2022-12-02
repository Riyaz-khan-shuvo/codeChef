#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int max1 = max(a, b);
        int max2 = max(c, d);
        printf("%d\n", max1 + max2);
    }

    return 0;
}