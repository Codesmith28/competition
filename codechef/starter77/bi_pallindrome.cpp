#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

void solve(int n, string a, int m, string b)
{
    map<char, int> freq;

    rep(i, 0, n)
    {
        freq[a[i]]++;
    }

    rep(i, 0, m)
    {
        freq[b[i]]++;
    }

    if ((n + m) % 2 != 0)
    {
        bool flag1 = 1;
        bool flag2 = 1;
        for (auto element : freq)
        {
            if (flag1 && element.ss % 2 != 0)
            {
                flag1 = 0;
                continue;
            }

            if (element.ss % 2 != 0)
            {
                flag2 = 0;
                break;
            }
        }

        (flag2 == 1 && flag1 == 0) ? cout << "YES\n" : cout << "NO\n";
    }

    else if ((m + n) % 2 == 0)
    {
        bool flag1 = 1;
        for (auto element : freq)
        {
            if (flag1 && element.ss % 2 != 0)
            {
                flag1 = 0;
                break;
            }
        }
        (flag1) ? cout << "YES\n" : cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        solve(n, a, m, b);
    }
    return 0;
}