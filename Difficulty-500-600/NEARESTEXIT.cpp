#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        if (a <= 50)
        {
            printf("LEFT\n");
        }
        else
        {
            printf("RIGHT\n");
        }
    }

    return 0;
}