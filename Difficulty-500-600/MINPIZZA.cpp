#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        c = ceil((float)(a * b) / 4);
        printf("%d\n", c);
    }

    return 0;
}