#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, water;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &water);
        if (water >= 2000)
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