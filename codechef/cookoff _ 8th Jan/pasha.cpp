#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

int freq(char c, string s)
{
    int count = 0;
    int n = s.length();
    rep(i, 0, n)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}

 

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin>>s;
        int count = 0;

        rep(i, 0, n)
        {
            char c = s[i];
            int f = freq(c, s);

            if (2 * f - n == k)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}