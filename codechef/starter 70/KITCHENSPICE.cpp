#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        if (s < 4)
        {
            cout << "MILD" << endl;
        }

        else if ((s >= 4) && (s < 7))
        {
            cout << "MEDIUM" << endl;
        }

        else
        {
            cout << "HOT" << endl;
        }
    }
    return 0;
}