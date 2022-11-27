#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, co = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if (a * b < 100)
        {
            printf("%d\n", 0);
        }
        if (a * b >= 100)
        {
            printf("%d\n", (a * b) / 100);
        }
    }

    return 0;
}