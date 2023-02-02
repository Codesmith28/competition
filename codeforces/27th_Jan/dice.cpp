#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int x, int r)
{
    if (r / 6 > 0)
    {
        arr[x] = 6;

        return;
    }
    else if (r / 5 > 0)
    {
        arr[x] = 5;

        return;
    }
    else if (r / 4 > 0)
    {
        arr[x] = 4;

        return;
    }
    else if (r / 3 > 0)
    {
        arr[x] = 3;

        return;
    }
    else if (r / 2 > 0)
    {
        arr[x] = 2;

        return;
    }
    else
    {
        arr[x] = 1;

        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;

        /* she has n dices
        sum of all numbers on n dice is s
        sum of numbers on n-1 dices is r */

        int lost = s - r;
        int ans[n];
        ans[n - 1] = lost;
        int x = n - 1;

        while (x--)
        {
            solve(ans, x, r);
            r = r - 1 - ans[x];
        }

        for (int i = x - 1; i >= 0; i--)
        {
            solve(ans, i, r);
            r -= ans[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl
             << endl;
    }
    return 0;
}