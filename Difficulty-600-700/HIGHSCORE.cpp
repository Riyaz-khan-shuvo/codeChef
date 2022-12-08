#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, b, c, d, correct;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        scanf("%d %d %d %d", &a, &b, &c, &d);
        correct = max(max(a, max(b, c)), d);
        printf("%d\n", correct);
    }

    return 0;
}