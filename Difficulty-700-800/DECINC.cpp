#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    n % 4 == 0 ? printf("%d\n", n + 1) : printf("%d\n", n - 1);
    return 0;
}