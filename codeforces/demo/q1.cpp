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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        sort(a, a + n);

        int c[n];

        for (int i = 0; i < n; i++)
        {
            {
                if ((b[i] - a[n - 1]) != 0)
                {
                    c[i] = b[i] - a[n - 1];
                }

                else
                {
                    c[i] = b[i] - a[n - 2];
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
