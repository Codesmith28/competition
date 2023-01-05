#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // n pairs of socks
    // interval of m days
    // after how many days will she run out of socks
    int days = 0;
    while (n != 0)
    {
        days++;
        n--;
        if (days % m == 0)
        {
            n++;
        }
    }
    cout << days << endl;
    return 0;
}