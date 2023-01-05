#include <iostream>
using namespace std;

int getbit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int A[n];
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
        }
        
        while(q--)
        {
            int k,l1,r1,l2,r2;
            cin>>k>>l1>>r1>>l2>>r2;
            int count=0;
            for(int i=l1;i<r1+1;i++)
            {
                for(int j=l2; j<r2+1; j++)
                {
                    if( getbit(A[i],k) != getbit(A[j],k) )
                    {
                        count++;
                    }
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
