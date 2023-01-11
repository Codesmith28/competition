#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sum(v) accumulate(all(v), (int)0)
#define ff first
#define ss second
#define pi pair<int, int>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
int M = 998244353;
const int mod = 1e9 + 7;

int powr(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if ((b & 1) == 1)
        {
            ans = (ans * 1LL * a) % mod;
        }
        a = (a * 1LL * a) % mod;
        b = b >> 1;
    }
    return ans;
}
void solve()
{
    int n, m, x, y, k, c, d;
    string s, s1, s2;
    bool f1 = true, f2 = true;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        /* code */
        if (i * i != n and n % i == 0)
        {
            cout << 1 << " " << i << " " << n / i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(10) << fixed;

    int test = 1;
    cin >> test;

    while (test--)
        solve();
}