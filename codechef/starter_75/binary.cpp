#include <bits/stdc++.h>
using namespace std;

void solve(string s, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    
    if (s == "1" || s == "10")
    {
        cout << "NO\n";
        return;
    }
    else
    {
        if (count <= 3)
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(s, n);
    }
    return 0;
}