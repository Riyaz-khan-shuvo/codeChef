#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if ((a + b) / 2 >= 35 && (a + c) / 2 >= 35 && (b + c) / 2 >= 35)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }

    return 0;
}