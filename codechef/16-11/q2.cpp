#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b;
       cin>>a>>b;
       int s = a+b;
       int i;

       for(i=2; i<s; i++)
       {
        if(s % i == 0)
        {
            cout<<"Bob\n";
            return 0;
        }
       }

       if(s == i)
       {
        cout<<"Alice\n";
       }


    }
    return 0;
}