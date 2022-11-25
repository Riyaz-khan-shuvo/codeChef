#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, week, amount;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &week, &amount);
        printf("%d\n", week * amount);
    }

    return 0;
}