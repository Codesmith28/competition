#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        if (a[0] > 0)
        {
            cout << a[0] - 1 << endl;
            continue;
        }

        else if (a[0] < 0)
        {
            int i = 1;
            while (a[i] < 0)
            {
                i++;
            }

            if (a[i] == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << a[i] - 1 << endl;
            }
        }
    }
    return 0;
}
