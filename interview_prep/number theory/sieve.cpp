#include <bits/stdc++.h>
using namespace std;
vector<int> sieve(int n)
{
    vector<int> prime(n + 1, 1);

    prime[1] = prime[0] = 0; // mark 1 and 0 as not prime
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                prime[j] = 0; // mark all thr multiples of ith prime no. as not prime
            }
        }
    }
    vector<int> ans;
    for (int i = 0; i < +n; i++)
    {
        if (prime[i])
            ans.push_back(i);
    }
    return ans; // returning a vector containing all prime no. from 1 to n
}
int main()
{
    vector<int> v = sieve(114);
    for (auto x : v)
        cout << x << " ";
}