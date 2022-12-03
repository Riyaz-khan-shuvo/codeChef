#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        cout << __gcd(x, y) << " " << (x * y) / __gcd(x, y) << endl;
    }
}

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long int a, b;
//         cin >> a >> b;
//         cout << gcd(a, b) << " " << lcm(a, b) << endl;
//     }
//     return 0;
// }
