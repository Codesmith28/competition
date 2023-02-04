#include <bits/stdc++.h>
using namespace std;

int lonsubarr(vector<int>&arr)
{
    int curr = 0;
    int j = 0;
    int len = 0;
    for(int i=0; i<arr.size(); i++)
    {
        while(curr & arr[i] != 0)
        {
            curr = curr ^ arr[j];
            j++;
        }
        curr |= arr[i];

        if(j<i)
        {
            len = max(len, i-j+1);
        }
        if(len == 0)
        {
            len = 1;
        }
    }
    return len;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        cout<<lonsubarr(arr)<<endl;

    }
    return 0;
}