#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        b = a * 50;
        c = ((float)2 * (0.2 * b)) + (float)(0.3 * b);
        printf("%d\n", (b - c));
    }

    return 0;
}