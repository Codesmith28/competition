#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // one prob solved increases the skill point by 1

    if (n == 2)
    {
        cout << abs(a[1] - a[0]);
    }

    else
    {
        int sum = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i += 2)
        {
            sum += abs(a[i] - a[i + 1]);
        }
        cout << sum << endl;
    }

    return 0;
}