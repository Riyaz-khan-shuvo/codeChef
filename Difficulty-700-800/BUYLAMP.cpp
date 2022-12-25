#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k, x, y;
        // n -> total lamps k-> total red lamps x-> red lamps cost y-> blue lamps cost
        scanf("%d %d %d %d", &n, &k, &x, &y);
        printf("%d\n", k * x + min(x, y) * (n - k));
    }

    return 0;
}