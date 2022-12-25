#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, lowestPrice;
        scanf("%d %d %d", &a, &b, &c);
        a <= b &&a <= c ? lowestPrice = b + c : b <= a &&b <= c ? lowestPrice = a + c
                                                                : lowestPrice = a + b;
        printf("%d\n", lowestPrice);
    }

    return 0;
}