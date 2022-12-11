#include <bits/stdc++.h>
using namespace std;
string xoring(string a, string b, int n)
{
    string ans = "";

    // Loop to iterate over the
    // Binary Strings
    for (int i = 0; i < n; i++)
    {
        // If the Character matches
        if (a[i] == b[i])
            ans += "0";
        else
            ans += "1";
    }
    return ans;
}
int main()
{
    int t;
    // scanf("%d", &t);
    // while (t--)
    // {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int n = a.length();
    cout << xoring(a, b, n) << endl;
    cout << "String length is : " << n;
    // }

    return 0;
}