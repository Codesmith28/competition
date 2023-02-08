#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

void solve(ll a[], ll n)
{
    // remove !=0 stones from any pile
    // after that anyone can take any number of stones from the pile
    // after each move number of stones that to be taken ++;

    // freq of all elements must be even for Z to win
    // else M wiil win always

    map<ll, ll> freq;

    rep(i, 0, n)
    {
        freq[a[i]]++;
    }

    bool flag = 1;
    for (auto element : freq)
    {
        if (element.ss % 2 != 0)
        {
            flag = 0;
            // i.e. freq of some element is odd
            break;
        }
    }

    flag == 0 ? cout << "Marichka\n" : cout << "Zenyk\n";
}
// 1 1 4 4
// 1 4 4

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        rep(i, 0, n)
        {
            cin >> a[i];
        }

        // Marichka goes first
        // Zenyk goes next and so on
        // find the winner of the game
        solve(a, n);
    }
    return 0;
}