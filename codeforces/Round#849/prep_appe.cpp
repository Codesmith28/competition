#include <bits/stdc++.h>
using namespace std;

void shortes(string s, int n)
{
    int x = n;

    for (int i = 0; i < n; i++)
    {

        if (((s[i] == '0') && (s[n - 1 - i] == '1')) || ((s[i] == '1') && (s[n - 1 - i] == '0')))
        {
            n-=2;
        }
    }

    cout << n << endl << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        shortes(s, n);
    }

    return 0;
}