#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if ((a * 2) > (b * 5))
        {
            printf("Chocolate\n");
        }
        else if ((a * 2) < (b * 5))
        {
            printf("Candy\n");
        }
        else
        {
            printf("Either\n");
        }
    }
    return 0;
}