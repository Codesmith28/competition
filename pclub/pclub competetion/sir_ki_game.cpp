#include <bits/stdc++.h>
using namespace std;

int summation(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

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

    int sum = summation(a, n);

    sort(a, a + n);

    int diff = a[n - 1] - a[n - 2];
    int smallest = min(a[0], diff);

    int hcf = gcd(diff, smallest);

    cout << hcf * n << endl;
}