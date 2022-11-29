#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int arr[n], count = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] >= 1000)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}