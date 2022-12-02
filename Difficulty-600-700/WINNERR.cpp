#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, pa, pb, qa, qb, x, y, z;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &pa, &pb, &qa, &qb);
        int max1 = max(pa, pb);
        int max2 = max(qa, qb);

        if (max1 > max2)
        {
            printf("Q\n");
        }
        else if (max1 < max2)
        {
            printf("P\n");
        }
        else
        {
            printf("TIE\n");
        }
    }

    return 0;
}