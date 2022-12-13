#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, numberOfCoins = 0, rem;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        if (a % 5 != 0)
        {
            numberOfCoins = -1;
        }
        else if (a % 10 == 0)
        {
            numberOfCoins = a / 10;
        }
        else
        {
            numberOfCoins = (a / 10) + 1;
        }
        printf("%d\n", numberOfCoins);
    }

    return 0;
}