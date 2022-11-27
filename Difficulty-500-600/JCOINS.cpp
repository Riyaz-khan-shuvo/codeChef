#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", (a * 10 + b * 5));
    }

    return 0;
}