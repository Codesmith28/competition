#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // n is the area

    // smallest perimeter
    vector<int> facto;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            facto.push_back(i);
            facto.push_back(n / i);
        }
    }

    // for (auto element : facto)
    // {
    //     cout << element << endl;
    // }

    // for minimum perimeter:
    int P;
    int small_P = INT_MAX;
    for (int i = 0; i < facto.size(); i += 2)
    {
        P = 2 * (facto[i] + facto[i + 1]);
        small_P = min(P, small_P);
    }

    cout << small_P << endl;
    return 0;
}