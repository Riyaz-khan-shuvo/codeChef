#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        d = (1 * b) + (2 * c);
        if (a <= d)
        {
            printf("Qualify\n");
        }
        else
        {
            printf("NotQualify\n");
        }
    }

    return 0;
}