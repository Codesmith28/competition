#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    if (n <= 9 && n >= 2)
    {
        cout << n - k << endl;
    }

    // we can find the last digit by n%10
    else
    {
        while (k--)
        {
            if (n % 10 != 0)
            {
                n = n - 1;
            }

            else
            {
                n = n / 10;
            }
        }

        cout << n << endl;
    }

    return 0;
}