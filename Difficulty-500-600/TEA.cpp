#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a % b == 0)
        {
            d = a / b;
        }
        else
        {
            d = (a / b) + 1;
        }

        printf("%d\n", d * c);
    }

    return 0;
}