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
        int b[n];
        int count_1 = 0;
        int count_0 = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            b[i] == 0 ? count_0++ : count_1++;
        }

        if(count_1 > count_0)
        {
            count = 1*count_1 + count_0*2;
        }
        else
        {
            count = count_1;
        }

        // if freq % 2 == 0 then 0 else 1

        count <= n ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}