#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
        }
        //number of odds
        int odd=0;
        for(int i=0; i<n; i++)
        {
            if(A[i]%2 != 0)
            {
                odd++;
            }
        }

        int even = n - odd;

        if(n%2!=0)
        {
            if(odd%2==0 & even<=n-2 )
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(odd%2!=0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }

        
    }
    return 0;
}

