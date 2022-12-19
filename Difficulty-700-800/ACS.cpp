#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, p, result;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &p);
        result = (p / 100) + (p % 100);
        if (result > 10)
        {
            printf("%d\n", -1);
        }
        else
        {
            printf("%d\n", result);
        }
    }

    return 0;
}
