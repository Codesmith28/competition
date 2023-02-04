#include <bits/stdc++.h>
using namespace std;

void move(string s, int n)
{
    // let initial coord : (0,0)
    int x = 0;
    int y = 0;

    bool flag = 0;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'U')
        {
            y++;
        }
        else if (s[i] == 'D')
        {
            y--;
        }
        else if (s[i] == 'R')
        {
            x++;
        }
        else if (s[i] == 'L')
        {
            x--;
        }

        if (x == 1 && y == 1)
        {
            cout << "YES\n";
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "NO\n";
    }
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

        move(s, n);
    }
    return 0;
}