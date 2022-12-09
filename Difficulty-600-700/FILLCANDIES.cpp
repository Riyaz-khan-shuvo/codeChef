#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k, m, result;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &n, &k, &m);
        result = ceil(n / (float)(k * m));
        printf("%d\n", result);
    }

    return 0;
}