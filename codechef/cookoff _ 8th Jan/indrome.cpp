#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

void solve(int n, string s)
{
    bool flag = 0;
    rep(i, 0, n - 1)
    {
        rep(j, i + 1, n)
        {
            if (s[i] == s[j])
            {
                flag = 1;
                break;
            }
            if (flag == 1)
            {
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << n - 2 << endl;
    }
    else
    {
        cout << -1 << endl;
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

        // to identify if there exist 2 characters that are same
        solve(n, s);
    }
    return 0;
}