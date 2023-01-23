#include <bits/stdc++.h>
using namespace std;

bool awesome(long long n, long long x, long long y)
{
    if (((n + x) % y == 0) && ((n + y) % x == 0))
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        long long maxl = pow(10, 18);

        for (long long i = 0; i < maxl; i++)
        {
            if (awesome(i, x, y))
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}