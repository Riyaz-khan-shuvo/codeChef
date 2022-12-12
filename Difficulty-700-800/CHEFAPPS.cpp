#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, s, x, y, z, deletedItems;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &s, &x, &y, &z);
        if (s >= x + y + z)
        {
            deletedItems = 0;
        }
        else if (y + z <= s || x + z <= s)
        {
            deletedItems = 1;
        }
        else
        {
            deletedItems = 2;
        }

        printf("%d\n", deletedItems);
    }

    return 0;
}