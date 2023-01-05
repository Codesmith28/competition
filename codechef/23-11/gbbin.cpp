#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x=0;
        int y=0;

        for(int i=0; i<s.length()-1; i++)
        {
            for(int j=i+1; j<s.length(); j++)
            {
               if(s[i]==1 && s[j]==0)
               {
                   x++;
               }
               else if(s[i]==0 && s[j]==1)
               {
                   y++;
               }
            }
        }
        
        


    }
    return 0;
}