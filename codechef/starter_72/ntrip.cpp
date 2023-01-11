#include <bits/stdc++.h>
using namespace std;

bool condition(int n, int a, int b, int c)
{
    if (((a * b * c) % n == 0) && ((n % (a * b) == 0) && (n % (c * b) == 0) && (n % (a * c) == 0)))
    {
        return true;
    }
    return false;
}

void combination_3(vector<int> v, int number)
{
    for (int i = 1; i <= v.size() - 3; i++)
    {
        for (int j = i + 1; j <= v.size() - 2; j++)
        {
            for (int k = j + 1; k <= v.size() - 1; k++)
            {
                if (condition(number, v[i], v[j], v[k]))
                {
                    cout << v[i] << " " << v[j] << " " << v[k] << endl;
                    return;
                }

                // last possible case
                else if ((i == v.size() - 3) && (j == v.size() - 2) && (k == v.size() - 1))
                {
                    if (condition(number, v[i], v[j], v[k]) == false)
                    {
                        cout << -1 << endl;
                        return;
                    }
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // make an algorithm that stores all the factors
        vector<int> v;
        for (int k = 1; k <= sqrt(n); k++)
        {
            if (n % k == 0)
            {
                if (k == sqrt(n))
                {
                    v.push_back(k);
                }
                else
                {
                    v.push_back(k);
                    v.push_back(n / k);
                }
            }
        }

        sort(v.begin(), v.end());

        if (v.size() == 2 || v.size() == 3)
        {
            cout << -1 << endl;
            continue;
        }

        else
        {
            // v is a sorted array which contains all the factors of n
            // we have a bool function to check for the output
            // make all possible permutations of 3 elements from vector v and use bool function on it
            combination_3(v, n);
        }
    }
    return 0;
}