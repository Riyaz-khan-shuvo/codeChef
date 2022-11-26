#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, weeks, days;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &weeks, &days);
        printf("%d\n", (weeks * 7 - days));
    }
    return 0;
}