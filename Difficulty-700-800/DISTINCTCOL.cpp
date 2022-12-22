#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int arrMax = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arrMax)
            {
                arrMax = arr[i];
            }
        }
        printf("%d\n", arrMax);
    }

    return 0;
}