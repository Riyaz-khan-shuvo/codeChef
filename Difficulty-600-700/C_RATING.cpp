#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        c = ceil(((float)b - a) / 8);
        printf("%d\n", c);
    }

    return 0;
}