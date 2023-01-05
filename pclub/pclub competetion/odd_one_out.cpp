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

        for (int i = 0; i < n; i++)
        {
            // for (int j = i + 1; j < n; j++)
            // {
            //     if (  (a[i] != a[j] && a[i] == a[j + 1]))
            //     {
            //         cout << i + 2 << endl;
            //         continue;

            //     }

            //     else if( a[i]!=a[j] && a[j]==a[j+1] )
            //     {
            //         cout<<i+1<<endl;
            //         continue;
            //     }
            // }

            if (a[i] != a[i + 1] && a[i] == a[i + 2])
            {
                cout << i + 2 << endl;
                break;
            }

            else if (a[i] != a[i + 1] && a[i + 1] == a[i + 2])
            {
                cout << i + 1 << endl;
                break;
            }

            else if (a[n - 1] != a[n - 2] && a[n - 2] == a[n - 3])
            {
                cout << n << endl;
                break;
            }
        }
    }
    return 0;
}