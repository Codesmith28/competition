#include <bits/stdc++.h>
using namespace std;

int bitOr(long long arr[], int n)
{
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        ans = (ans | arr[i]);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long y;
        cin >> n >> y;
        long long a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int currBit = bitOr(a, n);

        // check upto the numbers where the bit after the leftmost setbit is 1

        int diff = y - currBit;
        int count = 0;

        int temparr[diff];
        for (int i = 0; i < diff; i++)
        {
            temparr[i] = currBit + i + 1;
        }
        for (int i = 0; i < diff; i++)
        {
            if ((currBit | temparr[i]) == y)
            {
                count++;
            }
        }

        (count == 0 && currBit != y) ? cout << -1 << endl : cout << count << endl;
        cout<<endl;
    }  
    return 0;
}