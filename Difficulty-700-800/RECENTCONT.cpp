#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    scanf("%d", &t);
    while (t--)
    {
        int n, len, st = 0, lt = 0;
        int x;
        scanf("%d %d", &n, &x);
        getline(cin, s);
        len = s.length();

        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'S' && s[i + 1] == 'T')
            {
                st++;
            }
            else if (s[i] == 'L' && s[i + 1] == 'T')
            {
                lt++;
            }
        }
        printf("%d %d\n", st, lt);
    }

    return 0;
}