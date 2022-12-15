#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            printf("LOSS\n");
        }
        else if (a < b)
        {
            printf("PROFIT\n");
        }
        else
        {
            printf("NEUTRAL\n");
        }
    }

    return 0;
}
