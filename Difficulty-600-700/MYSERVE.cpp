#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, res, sum;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        sum = a + b;
        res = sum / 2;
        if (res % 2 == 0)
        {
            printf("Alice\n");
        }
        else
        {
            printf("Bob\n");
        }
    }

    return 0;
}