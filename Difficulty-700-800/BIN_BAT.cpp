#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b, c;
        scanf("%d %d %d", &n, &a, &b);
        int remainingTeam = 0;
        c = n;
        // for (int i = 2; i <= n; i += 2)
        // {
        //     if (c != 1)
        //     {
        //         c /= 2;
        //         remainingTeam++;
        //     }
        // }
        // or
        //  while(n>1){
        //     remainingTeam++;
        //     n=n/2;
        // }
        remainingTeam = log2(n);
        printf("%d\n", (remainingTeam * a) + ((remainingTeam - 1) * b));
    }

    return 0;
}