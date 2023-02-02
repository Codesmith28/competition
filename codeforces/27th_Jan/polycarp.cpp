#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x = "3141592653589793238462643383279";
        string s;
        cin >> s;

        int count = 0;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (s[i] == x[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}