#include <bits/stdc++.h>
using namespace std;


bool awesome(long long x,long long y,long long n)
{
    int a = (n+x)%y;
    int b = (n+y)%x;

    if(a==0 && b==0)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        int a = 0;
        for(int i=0; i<=pow(10,18); i++)
        {
            if(awesome(x,y,i))
            {
                cout<<i<<endl;
                break;
            }                  
        }
    }
    return 0;
}