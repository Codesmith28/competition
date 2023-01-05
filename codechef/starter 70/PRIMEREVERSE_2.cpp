#include<bits/stdc++.h>
#include<string>
using namespace std;

int onesbit(string a,int n)
{
    int count = 0;
    while(n--)
    {
        if(a[0]=='1')
        {
            count++;
        }
        a = a.substr(1);
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;

        if(onesbit(a,n) == onesbit(b,n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}