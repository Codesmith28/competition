#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

bool solve(ll a, ll b, ll c, ll x)
{
    if (a + b >= x)
    {
        return true;
    }
    else if (b + c >= x)
    {
        return true;
    }
    else if (c + a >= x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, x;
        cin >> a >> b >> c >> x;

        solve(a, b, c, x) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}