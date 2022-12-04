#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        a <= b ? printf("%d\n", a) : printf("%d\n", (a * 2) - b);
    }
    return 0;
}