#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d, result;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        result = max(abs((a - c)), abs((b - d)));
        printf("%d\n", result);
    }

    return 0;
}