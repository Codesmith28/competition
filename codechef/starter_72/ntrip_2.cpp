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
        vector<int> v;
        for (int k = 1; k <= sqrt(n); k++)
        {
            if (n % k == 0)
            {
                if (k == sqrt(n))
                {
                    v.push_back(k);
                }
                else
                {
                    v.push_back(k);
                    v.push_back(n / k);
                }
            }
        }

        (v.size() != 2) && (v.size() != 3) ? cout << v[0] << " " << v[2] << " " << v[3] << endl : cout << -1 << endl;
    }
    return 0;
}