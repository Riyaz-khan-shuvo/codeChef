#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    string result = "";
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a >= b)
        {
            if (a - b <= c)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            if (b - a <= c)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}