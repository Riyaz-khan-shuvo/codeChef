#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        c = ((ceil((float)a / 6)) * b);
        printf("%d\n", c);
        // int c = ((ceil((float)1 / 6)) * 100);
        // printf("%d\n", c);
    }
    // cout << ceil(4.01); // always round upword
    // int c = ((ceil((float)1 / 6)) * 100);
    // printf("%d", c);
    return 0;
}