#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        set<int> s1;
        for (int i = a; i <= b; i++)
        {
            s1.emplace(i);
        }
        for (int i = c; i <= d; i++)
        {
            s1.emplace(i);
        }

        int x = s1.size();
        cout << x << endl;
    }
    return 0;
}