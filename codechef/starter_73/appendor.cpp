#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, y;
        cin >> n >> y;
        long arr[n], OR = 0;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            OR = OR | arr[i];
        }

        for (int j = 0; j <= y; j++)
        {
            if ((OR | j) == y)
            {
                cout << j << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << "-1 \n";
        }
    }
    return 0;
}
