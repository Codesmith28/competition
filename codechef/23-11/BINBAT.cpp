#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int count = 0;

        while(n>1)
        {
            n = n/2;
            count++;
        }

        // a mins for rounds
        // b mins for break
        // break is rounds - 1
        
        cout<< count*a + b*(count-1) <<endl;
    }

    return 0;
}