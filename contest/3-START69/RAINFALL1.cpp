#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        if (a < 3)
        {
            printf("LIGHT\n");
        }
        else if (a < 7)
        {
            printf("MODERATE\n");
        }
        else
        {
            printf("HEAVY\n");
        }
    }

    return 0;
}