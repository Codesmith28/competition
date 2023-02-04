#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> fmap;
        for (int i = 0; i < n; i++)
        {
            if (fmap.find(arr[i]) == fmap.end())
            {
                fmap[arr[i]] = 1;
            }
            else
            {
                fmap[arr[i]]++;
            }
        }

        sort(arr.begin(), arr.end(), [&fmap](int a, int b)
             {
             if (fmap[a] != fmap[b])
             {
                 return fmap[a] > fmap[b];
             }

             return a < b; });

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}