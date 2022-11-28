#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d, e;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a + b + c + d == 0)
        {
            printf("IN\n");
        }
        else
        {
            printf("OUT\n");
        }
    }

    return 0;
}