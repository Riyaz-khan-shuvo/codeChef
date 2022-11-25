#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, total;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        total = (a * 10) + (b * 90);
        printf("%d\n", total);
    }

    return 0;
}