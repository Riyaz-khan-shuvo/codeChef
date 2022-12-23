#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        (x + y) % 2 == 0 ? printf("Janmansh\n") : printf("Jay\n");
    }

    return 0;
}