#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        if (a % 3 == 1)
        {
            printf("HUGE\n");
        }
        else if (a % 3 == 2)
        {
            printf("SMALL\n");
        }
        else
        {
            printf("NORMAL\n");
        }
    }

    return 0;
}