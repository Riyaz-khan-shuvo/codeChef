#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int s1 = 0, s2 = 0;
    int W = 0;
    int L = 0;
    while (n--)
    {
        int p1, p2;
        scanf("%d %d", &p1, &p2);

        s1 += p1;
        s2 += p2;

        int cl = abs(s1 - s2);
        if (cl > L)
        {
            L = cl;                  // maximum lead changed
            s1 > s2 ? W = 1 : W = 2; // updating winner using ternary operator
        }
    }
    printf("%d %d", W, L);
    return 0;
}