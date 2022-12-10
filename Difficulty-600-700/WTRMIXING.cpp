#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &a, &b, &x, &y);
        if (b >= a)
        {
            if ((b - a) <= x)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else
        {
            if (abs(b - a) <= y)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}