#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a > b && a > c)
        {
            printf("Alice\n");
        }
        else if (b > c && b > c)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Charlie\n");
        }
    }
    return 0;
}