#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, result;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        result = ceil((float)n / 10);
        printf("%d\n", result);
    }

    return 0;
}