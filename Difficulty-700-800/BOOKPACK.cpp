#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z, result;
        scanf("%d %d %d", &x, &y, &z);
        result = ceil((float)y / z);
        printf("%d\n", result * x);
    }

    return 0;
}