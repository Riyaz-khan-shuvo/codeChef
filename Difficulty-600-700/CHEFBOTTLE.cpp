#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, result;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a * b < c)
        {
            result = a;
        }
        else
        {
            result = c / b;
        }

        printf("%d\n", result);
    }

    return 0;
}