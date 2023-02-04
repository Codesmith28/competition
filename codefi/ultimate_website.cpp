/*
insert elements to nums from instructions
cost associated with insertion:
minimum of number of elements of nums < instruction[i] and number of elements of nums > instruction[i]
*/
// we want to find the cost of insertion of each element of instructions to nums
#include <bits/stdc++.h>
using namespace std;

int cost(int arr[], vector<int> nums, int n)
{
    int cost = 0;
    for(int i=0; i<n; i++)
    {
        int x = arr[i];
        int count1 = 0;
        int count2 = 0;
        for(int j=0; j<nums.size(); j++)
        {
            if(nums[j] < x)
            {
                count1++;
            }
            else if(nums[j] > x)
            {
                count2++;
            }
        }
        nums.push_back(x);
        cost += min(count1, count2); 
    }
    return cost;
}

int main()
{
    int n;
    cin >> n;
    int instructions[n];
    for (int i = 0; i < n; i++)
    {
        cin >> instructions[i];
    }

    vector<int> nums;
    long long y = cost(instructions, nums, n); 
    long long z = pow(10,9);
    cout<<y%z<<endl;
    return 0;
}