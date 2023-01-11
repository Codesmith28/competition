#include <bits/stdc++.h>
using namespace std;

bool lucky(int n)
{
    while (n > 0)
    {
        int r = n % 10;
        if (r == 7)
        {
            return true;
        }
        n = n / 10;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        lucky(n) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}