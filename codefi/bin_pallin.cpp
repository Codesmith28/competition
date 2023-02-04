#include <bits/stdc++.h>
using namespace std;

// decimal to binary
string decToBin(int n)
{
    string s = "";
    while (n > 0)
    {
        s += to_string(n % 2);
        n /= 2;
    }
    return s;
}

// check if pallindromic
bool isPallin(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s = decToBin(n);
        isPallin(s) ? cout << "Yes\n" : cout << "No\n";
    }

    return 0;
}
