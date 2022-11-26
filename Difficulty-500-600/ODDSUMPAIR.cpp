#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, sum1, sum2, sum3;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        sum1 = a + b;
        sum2 = a + c;
        sum3 = b + c;
        if (sum1 % 2 != 0 || sum2 % 2 != 0 || sum3 % 2 != 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}