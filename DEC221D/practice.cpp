#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    cout << "Please enter your name: \n";
    getline(cin, str);
    cout << "Hello, " << str
         << " welcome to GfG !\n";
    cout << "String length is : " << str.length();
    return 0;
}