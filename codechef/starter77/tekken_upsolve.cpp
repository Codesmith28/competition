#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        /* first fight between b & c , thus way some damage will be reduced that can be done on a */

        int m = b - min(b, c);
        int n = c - min(b, c);

        // winner of the match fights with 'a' :
        if (m > n)
        {
            a -= m;
            a > 0 ? cout << "YES\n" : cout << "NO\n";
        }

        else
        {
            a -= n;
            a > 0 ? cout << "YES\n" : cout << "NO\n";
        }
    }

    return 0;
}