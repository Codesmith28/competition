#include <bits/stdc++.h>
using namespace std;

int prod(int arr[], int n)
{
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod = prod * arr[i];
    }
    return prod;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (prod(a, n) % k == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}