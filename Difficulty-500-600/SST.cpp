#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if ((a * 10) > (b * 5))
        {
            printf("FIRST\n");
        }
        else if ((a * 10) < (b * 5))
        {
            printf("SECOND\n");
        }
        else
        {
            printf("ANY\n");
        }
    }

    return 0;
}