#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        c = pow(2, b);
        for (int i = 0; i < a; i++)
        {
            c /= 2;
        }
        printf("%d\n", c);
    }
    return 0;
}