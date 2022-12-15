#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int len, cou = 0;
        scanf("%d", &len);
        char str1[len];
        string boring;
        scanf("%s", &str1);
        for (int i = 0; i < len; i++)
        {
            // if (str1[i] == str1[i + 1])
            // {
            //     cou++;

            // }
            for (int j = 0; j < len; j++)
            {
                if (str1[i+1] == str1[j])
                {
                    boring += str1[i];
                    cou++;
                }
            }
        }

        printf("%d\n", cou);
        printf("%s\n", boring);
    }

    return 0;
}