#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    char ch;
    if (a[0] >= 97)
    {
        ch = a[0] - 32;
    }
    else
    {
        ch = a[0];
    }
    string b = ch + a.substr(1);
    cout << b << endl;
    // lowercase is 32 askii ahead of uppercase
    // askii of 'a' is 97 and of 'A' is 65
    return 0;
}