#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,c;
        cin>>a>>c;

        int b = a+c;

        if(b%2 ==0)
        {
            cout<<(b/2)<<endl;
        }

        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}