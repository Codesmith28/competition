#include <bits/stdc++.h>
using namespace std;

void shortes(string s, int n)
{
    for (int i = 0; i < (n / 2); i++)
    {

        if (s[i] == '0' && s[n - 1 - i] == '1')
        {
            n -= 2;
        }

        else if (s[i] == '1' && s[n - 1 - i] == '0')
        {
            n -= 2;
        }
    }

    cout<<n<<endl;
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

        shortes(s,n);
    }

    return 0;
}