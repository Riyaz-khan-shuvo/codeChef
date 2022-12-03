#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        if (b < (a - b))
            cout << b << endl;
        else
            cout << a - b << endl;
    }

    return 0;
}