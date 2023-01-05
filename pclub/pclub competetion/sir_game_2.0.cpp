#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    int smol = a[0];

    for (int i = 1; i < n; i++)
    {
        smol = gcd(smol, a[i]);
    }

    cout << smol * n << endl;

    return 0;
}