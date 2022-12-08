#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", a > 3 ? a % 3 == 0 ? (a * b) + (c * ((a / 3) - 1)) : (a * b) + (c * (a / 3)) : a * b);
    }

    return 0;
}