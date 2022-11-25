#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if (a >= b)
        {
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", a);
        }
    }

    return 0;
}