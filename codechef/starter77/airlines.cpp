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
        int x, y, z;
        cin >> x >> y >> z;

        /* x = capacity of each airplane (total 10 exist)
        y = people willing
        z = cost of 1 seat */

        int totalSeats = 10 * x;

        int accomodate;
        if (totalSeats >= y)
        {
            accomodate = y;
        }
        else
        {
            accomodate = totalSeats;
        }

        cout << accomodate * z << endl;
    }
    return 0;
}