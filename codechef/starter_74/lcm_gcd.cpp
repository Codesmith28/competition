#include <bits/stdc++.h>
using namespace std;
long long gcd(long long x, long long y)
{
    long long r = 0, a, b;
    a = (x > y) ? x : y; // a is greater number
    b = (x < y) ? x : y; // b is smaller number

    r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}

long long lcm(long long x, long long y)
{
    long long a;
    a = max(x, y); // a is greater number
    while (true)
    {
        if (a % x == 0 && a % y == 0)
        {
            return a;
        }
        ++a;
    }
}

long long special(long long a, long long b, long long x)
{
    return lcm(a, x) - gcd(b, x);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        int abso = 1;
        for (long long x = a; x <= INT_MAX; x++)
        {
            if (abso <= special(a, b, x))
            {
                abso = special(a, b, x);
            }
        }
        cout << abso << endl;
    }
    return 0;
}