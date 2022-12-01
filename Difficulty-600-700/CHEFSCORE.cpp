#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, sum = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        for (int i = 0; i <= a; i++)
        {
            if ((i * b) == c)
            {
                printf("YES\n");
                sum = 0;
                break;
            }
            else
            {
                sum++;
            }
        }
        if (sum > 0)
        {
            printf("NO\n");
        }
    }

    return 0;
}