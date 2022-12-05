#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, N;
    string S;
    cin >> T;
    while (T--)
    {
        cin >> N;
        cin >> S;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == 'A')
            {
                S[i] = 'T';
            }
            else if (S[i] == 'T')
            {
                S[i] = 'A';
            }
            else if (S[i] == 'G')
            {
                S[i] = 'C';
            }
            else if (S[i] == 'C')
            {
                S[i] = 'G';
            }
        }
        cout << S << endl;
    }
    return 0;
}