#include<iostream>
using namespace std;

bool monop(int a,int b,int c)
{
    if(a+b<c || a+c<b || b+c<a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r1,r2,r3;
        cin>>r1>>r2>>r3;

        if( monop(r1,r2,r3) )
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }

    }
    return 0;
}