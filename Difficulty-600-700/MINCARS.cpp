#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        b = ceil((float)a / 4);
        printf("%d\n", b);
    }

    return 0;
}