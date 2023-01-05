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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int count = 0, temp = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0 && b[i] != 0)
            {
                count++;
            }
            else
            {
                temp = max(temp, count);
                count = 0;
            }
        }
        count == 0 ? cout << temp << endl : cout << count << endl;
    }
    return 0;
}

