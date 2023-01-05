#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int cost = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x)
            {
                cost += b[i];
            }
        }

        cout << cost << endl;
    }
    return 0;
}