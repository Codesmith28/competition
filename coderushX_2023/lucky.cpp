#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    long long x = a + b;
    long long y = b + c;
    long long z = c + a;

    bool flag = 0;

    if (x > 0 && x % 2 == 0)
    {
        flag = 1;
    }

    else if (y > 0 && y % 2 == 0)
    {
        flag = 1;
    }
    else if (z > 0 && z % 2 == 0)
    {
        flag = 1;
    }

    flag == 1 ? cout << "YES\n" : cout << "NO\n";

    return 0;
}