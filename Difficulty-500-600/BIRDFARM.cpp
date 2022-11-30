#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (c % a == 0 && c % b == 0)
        {
            printf("ANY\n");
        }

        else if (c % a == 0)
        {
            printf("CHICKEN\n");
        }
        else if (c % b == 0)
        {
            printf("DUCK\n");
        }
        else
        {
            printf("NONE\n");
        }
    }

    return 0;
}