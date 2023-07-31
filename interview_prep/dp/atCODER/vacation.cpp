#include <bits/stdc++.h>
using namespace std;

int f(int ind, int prv, vector<vector<int>> v, vector<vector<int>> &dp)
{
    if (ind == v.size())
        return 0;
    int mx = 0;
    if (dp[ind][prv ] != -1)
        return dp[ind][prv ];
    for (int i = 0; i < 3; i++)
    {
        if (prv != i)
        {
            int x = v[ind][i] + f(ind + 1, i, v, dp);
            mx = max(mx, x);
        }
    }
    return dp[ind][prv ] = mx;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    vector<vector<int>> dp;
    for (int i = 0; i < n; i++)
    {
        vector<int> p;
        for (int i = 0; i < 3; i++)
        {
            int z;
            cin >> z;
            p.push_back(z);
        }
        v.push_back(p);
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> p;
        for (int i = 0; i <= 3; i++)
        {

            p.push_back(-1);
        }
        dp.push_back(p);
    }
    int ans = f(0, 3, v, dp);
    cout << ans << endl;
}