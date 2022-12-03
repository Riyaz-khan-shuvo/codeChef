#include <bits/stdc++.h>
using namespace std;

int isPrime(int a, int b)
{
    int counter = 0, c = a + b, i;
    for (i = 1; i <= c; i++)
    {
        if (c % i == 0)
        {
            counter++;
        }
    }
    return counter;
}
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        int c = isPrime(a, b);
        if (c > 2)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Alice\n");
        }
    }

    return 0;
}