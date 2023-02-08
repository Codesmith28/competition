#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

void solve(int n)
{
    int a[n];
    /* Pi%i should have minimum distinct integers possible */
    // Pi != i

    rep(i, 0, n)
    {
        if (i != n - 1)
        {
            cout << (i + 2) << " ";
        }
        else
        {
            cout << 1 << endl;
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

        // n is the length of required permutation
        solve(n);
    }
    return 0;
}