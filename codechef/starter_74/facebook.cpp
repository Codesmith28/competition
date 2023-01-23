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
        int a[n], b[n];

        // a[i] likes and b[i] comments

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int index = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[index] <= a[i])
            {
                index = i;
                if (a[index] == a[i])
                {
                    if (b[index] < b[i])
                    {
                        index = i;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        cout << index + 1 << endl;
        // cases:
        /*
        a[i] max -> ith index required
        if same a[i] present then go for b[i]
        */
    }
    return 0;
}
