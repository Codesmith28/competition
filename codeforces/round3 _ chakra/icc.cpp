#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    /* The task is to determine the highest possible ranking for the Indian team in the competition after the next year's matches, given the current rankings and the distribution of points for the upcoming year. It is ensured that each team will have a unique number of points before the next year. */

    int n, d;
    cin >> n >> d;
    // n = nations
    // d = indian position

    int ranking[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ranking[i];
        // this shows the current point
    }
    // use pairs to link the inedx with points
    int points[n];
    for (int i = 0; i < n; i++)
    {
        cin >> points[i];
    }

    // sort(points, points + n);


    vector<pair<int, int>> nexPoi;

    for (int i = 0; i < n; i++)
    {
        nexPoi.push_back(make_pair(ranking[i], i));
    }


    // indexing from last as 1st pos will get most

    nexPoi[d - 1].first += points[n - 1];
    nexPoi[d - 1].second += INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (i == d - 1)
        {
            continue;
        }

        nexPoi[i].first += points[i + 1];
    }

    sort(nexPoi.begin(),nexPoi.end(),comp);

    int rank = n;
    int i = n-1;

    while(nexPoi[i].second != INT_MIN)
    {
        i--;
        n--;
    }

    // output the rank of india after next yr
    cout<<n<<endl;


    return 0;
}