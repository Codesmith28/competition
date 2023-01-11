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
        
        if(currBit == y)
        {
            cout<<0<<endl;
            continue;
        }
        
        int diff = abs(currBit - y);
        int count = 0;
        
        for (int i = 0; i < diff; i++)
        {
            if ((currBit | (currBit+i+1)) == y)
            {
                count++;
            }
        }
        
        count == 0 ? cout << -1 << endl : cout << count << endl;
    }
    return 0;
}