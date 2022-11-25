#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        if (a <= 100)
        {
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", a - 10);
        }
    }

    return 0;
}