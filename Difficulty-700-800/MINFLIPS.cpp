#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, operation = 0, x = 0, y = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] == 1)
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if (x > y)
        {
            if ((x - y) % 2 == 0)
            {
                operation = (x - y) / 2;
            }
            else
            {
                operation = -1;
            }
        }
        else
        {
            if ((y - x) % 2 == 0)
            {
                operation = (y - x) / 2;
            }
            else
            {
                operation = -1;
            }
        }
        printf("%d\n", operation);
    }

    return 0;
}