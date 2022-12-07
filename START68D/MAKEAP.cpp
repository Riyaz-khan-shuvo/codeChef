#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &c);
        if (a <= c)
        {
            b = (a + c);
            if (b % 2 == 0)
            {
                b /= 2;
            }
            else
            {
                b = -1;
            }

            printf("%d\n", b);
        }
    }

    return 0;
}