#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    n1 > n2 ? printf("%d\n", n1 - n2) : printf("%d\n", n1 + n2);

    return 0;
}