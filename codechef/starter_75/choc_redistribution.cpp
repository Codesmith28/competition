#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        // all shall have distinct chocolates and none should be left over
        // hence the base case is : 1,2,3
        // hence the minimum sum is = 6;

        (x + y + z) >= 6 ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}