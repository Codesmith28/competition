#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        x > 10 * y ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
