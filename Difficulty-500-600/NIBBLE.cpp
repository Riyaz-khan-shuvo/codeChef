#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        if (a % 4 == 0)
        {
            printf("GOOD\n");
        }
        else
        {
            printf("NOT GOOD\n");
        }
    }

    return 0;
}