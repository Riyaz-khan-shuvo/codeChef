#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if (a < b)
        {
            printf("BIKE\n");
        }
        else if (a > b)
        {
            printf("CAR\n");
        }
        else
        {
            printf("SAME\n");
        }
    }

    return 0;
}