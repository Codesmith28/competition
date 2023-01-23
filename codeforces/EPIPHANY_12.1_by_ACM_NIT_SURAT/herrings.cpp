#include <bits/stdc++.h>
using namespace std;

long long select(long long a, long long b, long long c, long long d)
{
    int x = a * b;
    int y = c * d;
    if (x + y != 0)
    {
        return 1;
    }
}

int main()
{
    int n;
    cin >> n;
    long long a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count += select(a[i],a[j],b[i],b[j]);
        }
    }

    cout << count / 1000000007 << endl;
    return 0;
}