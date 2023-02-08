#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

double mean(ll sum, int n)
{
    double ans = (double)(sum / n);
    return ans;
}

ll median(ll a[], int n)
{
    ll ans;
    sort(a, a + n);
    if (n % 2 != 0)
    {
        ans = a[n / 2];
    }
    else
    {
        ans = (1 / 2) * (a[n / 2] + a[(n + 2) / 2]);
    }

    return ans;
}

ll beauty(ll mean, ll median)
{
    return (3 * (abs(mean - median)));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        rep(i, 0, n)
        {
            cin >> a[i];
            sum += a[i];
        }


        
    }
    return 0;
}