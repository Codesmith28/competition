#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int k = 1;

        for (k = 1; k <= 100; k++)
        {
            if ((a % k != 0) && (b % k != 0) && (c % k != 0))
            {
                cout << k << endl;
                break;
            }
            else
            {
                k++;
            }
        }
    }
    return 0;
}