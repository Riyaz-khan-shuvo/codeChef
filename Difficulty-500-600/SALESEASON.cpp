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
        else if (a <= 1000)
        {
            printf("%d\n", a - 25);
        }
        else if (a <= 5000)
        {
            printf("%d\n", a - 100);
        }
        else
        {
            printf("%d\n", a - 500);
        }
    }

    return 0;
}