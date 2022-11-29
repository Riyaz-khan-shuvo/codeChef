#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a == d || b == d || c == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}