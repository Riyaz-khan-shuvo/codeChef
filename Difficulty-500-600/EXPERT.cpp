#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        c = ((float)b / a) * 100;
        if (c >= 50)
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