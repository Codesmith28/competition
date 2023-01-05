#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int b[n];
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            if(b[i] > n)
            {
                return -1;
            }
        }

        int a[n];
        for(int i=0; i<n; i++)
        {
            a[i] = 0;
        }

        /* use 1-based indexing
        and put the elements accordingly in a[n] where so ever the frequency matches 
        */
        int freq;
        for(int i=0; i<n; i++)
        {
        }
        
        

    }
    return 0;
}