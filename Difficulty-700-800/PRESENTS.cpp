#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, result = 0;
        scanf("%d", &n);

        if (n % 5 == 0)
        {
            result = (n / 5);
            result = (n - result);
        }
        else
        {
            result = (n / 5);
            result = (n - result);
        }
        printf("%d\n", result);
    }

    return 0;
}