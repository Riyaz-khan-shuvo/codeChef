#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, o, c, remainingBall;
    scanf("%d %d %d", &r, &o, &c);

    remainingBall = (20 - o) * 6;
    r < c + (remainingBall * 6) ? printf("YES\n") : printf("NO\n");
    return 0;
}