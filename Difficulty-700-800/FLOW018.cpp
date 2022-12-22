#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int f, fact=1;
        scanf("%d", &f);
        for (int i = 1; i <= f; i++)
        {
            fact *= i;
        }
        printf("%d\n", fact);
    }

    return 0;
}