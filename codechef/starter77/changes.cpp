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
    // creating an array of pairs to link charge with their index
    pair<char, int> charges[n];

    // freq of neutrals
    int zeros = 0;

    // length of charges array -> j
    int j = 0;

    rep(i, 0, n)
    {
        // if charge = 0 increase the freq
        if (s[i] == '0')
        {
            zeros++;
        }
        // else pair the charges with their index in charges array
        else
        {
            charges[j++] = {s[i], i};
        }
    }

    // for those that remains neutral after infinite time:
    int eternalZero = 0;

    // iterating through charges array;
    rep(i, 0, j - 1)
    {
        if ((charges[i].ff != charges[i + 1].ff) && ((charges[i + 1].ss - charges[i].ss) % 2 == 0))
        {
            eternalZero++;
        }
    }
    // these will only increase iff
    /*
     *consecutive charges are opposite;
     *how did we check it ?
     *in the charges array;
     *consecutive charges are opposite and
     *difference in their indices(in main string) should be even number */

    // there can be a case when the entire string is filled with neutral charges thus
    cout << (zeros != n ? eternalZero : zeros) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;

        solve(n, s);
    }
    return 0;
}