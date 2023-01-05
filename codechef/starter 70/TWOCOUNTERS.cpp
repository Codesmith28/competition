#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        // n mins and n events
        int event[m];
        int event_type[m];
        for (int i = 0; i < m; i++)
        {
            cin >> event[i];
            // event[i] = Ti
            // ith event happens at Ti + 0.5
        }
        for (int i = 0; i < m; i++)
        {
            cin >> event_type[i];
            // whether the event type is 1 or 2
        }

        int a,b,score;
        a = 0;
        b = 0;
        score = 0;
        /* to maximise the score
        a>b when event type is 1
        a<b when event type is 2 

        event occurs when event[i]==n
        score only increases when there is an event*/

        for (int i = 0; i < n; i++)
        {
            if (event[i] == i + 1)
            {
                if (event_type[i] == 1)
                {
                    if (a > b)
                    {
                        score++;
                    }
                    else
                    {
                        a = 0;
                        b = 0;
                    }
                }

                else
                {
                    if (a < b)
                    {
                        score++;
                    }
                    else
                    {
                        a = 0;
                        b = 0;
                    }
                }
            }

            // increase a and b accordingly
            else if (i != n - 1)
            {
                if (event_type[i + 1] == 1)
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
        }
        cout<<score<<endl;
    }
    return 0;
}