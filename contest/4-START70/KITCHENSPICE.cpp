#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &x);
        if (x >= 1 && x <= 10)
        {
            if (x < 4)
            {
                printf("MILD\n");
            }
            else if (x >= 4 && x < 7)
            {
                printf("MEDIUM\n");
            }
            else
            {
                printf("HOT\n");
            }
        }
    }

    return 0;
}