#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int max_value = max(a, max(b, c));
        int ans = a + b + c - max_value;
        ans == max_value ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
