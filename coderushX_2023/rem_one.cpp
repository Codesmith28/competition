#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, l;
        unsigned long long int s;

        // to find if a subarray exist which has the sum s and length l
        // given array of natural numbers  upto n
        // length of subarray = l
        // sum of all elements of subarray = s;

        cin >> n >> l >> s;

        long long a[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
            sum += a[i];
        }
        long long sum_0 = sum;
        long long temp = sum;

        int del = n - l;
        for (int i = 0; i < del; i++)
        {
            sum_0 -= a[i];
            sum -= a[n - i - 1];
        }

        if (s >= sum_0 && s <= sum)
        {
            
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}