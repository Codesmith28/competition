#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w, m;
    cin >> n >> w >> m;

    // total length = n;
    // pattern length = w;
    // gap between pattern = m

    int remain = n - m;
    int pattern = w + m;

    int ans = remain / pattern;
    cout << ans << endl;

    return 0;
}