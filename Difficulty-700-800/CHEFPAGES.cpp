#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if ((a == 0 || a == 1) && (b == 0 || b == 1))
    {
        if (a == 1 && b == 1)
        {
            printf("https://discuss.codechef.com\n");
        }
        else if (a == 1 && b == 0)
        {
            printf("https://www.codechef.com/contests\n");
        }
        else
        {
            printf("https://www.codechef.com/practice\n");
        }
    }

    return 0;
}