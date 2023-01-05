#include <bits/stdc++.h>
using namespace std;

int onesbit(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n % 10 == 1)
        {
            count++;
        }
        n = n / 10;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a, b;
        cin >> a;
        cin >> b;

        if (onesbit(a) == onesbit(b))
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}