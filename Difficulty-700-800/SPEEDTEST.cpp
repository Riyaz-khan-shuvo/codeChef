#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float a, b, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &a, &x, &b, &y);
        float alSpeed = a / x;
        float bSpeed = b / y;
        if (alSpeed > bSpeed)
        {
            printf("Alice\n");
        }
        else if (alSpeed < bSpeed)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Equal\n");
        }
    }

    return 0;
}