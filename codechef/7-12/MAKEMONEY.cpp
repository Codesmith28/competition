#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

int summa(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, c;
        cin >> n >> x >> c;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int sum = summa(a, n);
        int costt = 0;
        int maxdiff = INT_MIN;

        if (n == 1)
        {
            cout << sum << endl;
            continue;
        }
        else if (sum > c)
        {
            for (int i = 0; i < n; i++)
            {
                a[i] = x;
                sum = summa(a, n);
                costt = costt + c;
                if (sum > costt)
                {
                    maxdiff = max(maxdiff, sum - costt);
                }
            }
            cout << maxdiff << endl;
            continue;
        }
        else
        {
            cout << sum << endl;
            continue;
        }
    }
    return 0;
}