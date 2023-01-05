
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

        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int x = 1e5;
            int count_arr[x] = {0};
            for (int i = 0; i < n; i++)
            {
                count_arr[a[i]]++;
            }

            bool flag = 1;
            for (int i = 0; i < x; i++)
            {
                if (count_arr[i] % 2 != 0)
                {
                    flag = 0;
                    break;
                }
            }

            flag == 1 ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }
    return 0;
}
