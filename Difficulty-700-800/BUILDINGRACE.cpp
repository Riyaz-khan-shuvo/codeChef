#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    float tA, tB;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        tA = (float)a / c;
        tB = (float)b / d;
        if (tA > tB)
        {
            printf("Chefina\n");
        }
        else if (tA < tB)
        {
            printf("Chef\n");
        }
        else
        {
            printf("Both\n");
        }
    }

    return 0;
}