#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        a + b + c == 180 ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}