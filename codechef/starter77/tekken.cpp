#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int maxi = max(a,max(b,c));
        int mini = min(a,min(b,c));

        if( a == maxi)
        {
            // mid _ min
            int mini_2 = min(b,c);
            b = b - min(b,c);
            c = c - min(b,c);

            

            
        }

        else if( a == mini)
        {

        }

        
    }
    return 0;
}