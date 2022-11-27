#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        if (a >= 1 && a <= 100)
        {
            printf("%d\n", 100 - a);
        }
    }

    return 0;
}