#include <iostream>
using namespace std;

int main()
{
    int T, S, X, Y, Z;
    cin >> T;
    while (T--)
    {
        cin >> S >> X >> Y >> Z;
        if (S - X - Y >= Z)
            cout << "0\n";
        else if (S - X <= Z || S - Y >= Z)
            cout << "1\n";
        else
            cout << "2\n";
    }
    return 0;
}
