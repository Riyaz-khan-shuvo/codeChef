#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, sum = 0, co = 0;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i + j == a)
            {
                co++;
            }
        }
    }
    printf("%d\n", co);

    return 0;
}