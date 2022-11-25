#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
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