#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int diff = y - x;
        diff = abs(diff);

        int r = diff % k;
        int q = diff / k;

        if (r != 0)
        {
            cout << q + 1 << endl;
        }

        else
        {
            cout << q << endl;
        }
    }
    return 0;
}