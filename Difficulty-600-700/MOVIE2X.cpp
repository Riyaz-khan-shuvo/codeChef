#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    if (b % 2 == 0)
    {
        c = (a - b) + (b / 2);
        printf("%d\n", c);
    }

    return 0;
}