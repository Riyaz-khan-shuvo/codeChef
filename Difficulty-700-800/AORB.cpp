#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        //   for 1st A -> B attempt
        int i = 500 - (x * 2);
        int j = 1000 - ((x + y) * 4);
        //   for 2nd B -> A attempt
        int p = 1000 - (y * 4);
        int q = 500 - ((x + y) * 2);
        cout << max((i + j), (p + q)) << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t, a, b;
//     scanf("%d", &t);
//     while (t--)
//     {
//         scanf("%d %d", &a, &b);
//         printf("%d\n", (1500) - ((a * 2) + ((a * 2) + (b * 4))));
//     }

//     return 0;
// }