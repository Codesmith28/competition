#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

bool compidx(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

int main()
{
    int n, d;
    cin >> n >> d;
    int rank[n];

    vector<pair<int, int>> nxtYr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> rank[i];
    }

    for (int i = 0; i < n; i++)
    {
        nxtYr[i].first = rank[i];
        nxtYr[i].second = i;
    }

    int poi[n];
    for (int i = 0; i < n; i++)
    {
        cin >> poi[i];
    }

    nxtYr[d - 2].second = 0;
    nxtYr[0].second = d - 2;

    sort(nxtYr.begin(), nxtYr.end(), compidx);
    nxtYr[0].first += poi[0];

    for (int i = 1; i < n; i++)
    {
        nxtYr[i].first += poi[n - i];
    }

    nxtYr[0].second = n + 1;
    sort(nxtYr.begin(), nxtYr.end(), comp);

    int count = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (nxtYr[i].second == n + 1)
        {
            cout << count << endl;
            break;
        }
        count++;
    }

    return 0;
}