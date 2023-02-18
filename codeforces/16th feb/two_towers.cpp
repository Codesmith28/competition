#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

// check whether the string is made of alternating characters or not ?
bool isAlter(string s)
{
    for (int i = 0; i < s.length() - 2; i++)
    {
        if (s[i] != s[i + 2])
        {
            return false;
        }
    }

    if (s[0] == s[1])
    {
        return false;
    }

    return true;
}

// operation:
// select a tower with atleast 2 blocks
// move its top block to other tower

void solve(int n, string a, int m, string b)
{
    // check for alternating pattern
    bool flag1 = 0;
    bool flag2 = 0;

    bool flag3 = 1;
    bool flag4 = 1;

    bool flag5 = 1;

    isAlter(a) ? flag1 = 1 : flag1 = 0;
    isAlter(b) ? flag2 = 1 : flag2 = 0;

    // check for same ending letters;
    // better: check for consecutive endings
    a[n - 1] != b[m - 1] ? flag5 = 1 : flag5 = 0;

    if (!flag1)
    {
        a[n - 1] == a[n - 2] ? flag3 = 0 : flag3 = 1;
    }

    if (!flag2)
    {
        b[m - 1] == b[m - 2] ? flag4 = 0 : flag4 = 1;
    }

    if (flag1 && flag2)
    {
        cout << "YES\n";
    }

    else
    {
        if ((flag3 || flag4) && flag5)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /*    We need to create a string with alternate letters  using the given operation*/

        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        solve(n, a, m, b);
    }
    return 0;
}