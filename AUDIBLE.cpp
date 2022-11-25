#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, sound;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &sound);
        if (sound >= 67 && sound <= 45000)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}