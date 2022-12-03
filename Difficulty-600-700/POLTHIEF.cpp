#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if (a >= b)
        {
            c = a - b;
        }
        else
        {
            c = b - a;
        }
        printf("%d\n", c);
    }

    return 0;
}