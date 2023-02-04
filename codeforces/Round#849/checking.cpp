#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        bool flag = 0;

        string s = "codeforces";
        for (int i = 0; i < s.length(); i++)
        {
            if (c == s[i])
            {
                flag = 1;
                break;
            }
        }

        flag == 1 ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}