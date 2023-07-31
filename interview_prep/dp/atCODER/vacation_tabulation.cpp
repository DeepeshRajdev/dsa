#include <bits/stdc++.h>
using namespace std;

int f(int ind, int prv, vector<vector<int>> v, vector<vector<int>> &dp)
{
    if (ind == v.size())
        return 0;
    int mx = 0;
    if (dp[ind][prv] != -1)
        return dp[ind][prv];
    for (int i = 0; i < 3; i++)
    {
        if (prv != i)
        {
            int x = v[ind][i] + f(ind + 1, i, v, dp);
            mx = max(mx, x);
        }
    }
    return dp[ind][prv] = mx;
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

            p.push_back(0);
        }
        dp.push_back(p);
    }
    dp[0][0] = max(v[0][1], v[0][2]);
    dp[0][1] = max(v[0][0], v[0][2]);
    dp[0][2] = max(v[0][0], v[0][1]);
    dp[0][3] = max(v[0][0], max(v[0][1], v[0][2]));
    for (int ind = 1; ind < n; ind++)
    {
        for (int prv = 0; prv <= 3; prv++)
        {
            int mx = 0;
            for (int i = 0; i < 3; i++)
            {
                if (prv != i)
                {
                    int x = v[ind][i] + dp[ind - 1][i];
                    mx = max(mx, x);
                    dp[ind][prv] = mx;
                }
            }
        }
    }
    int maxi = 0;
    for (int i = 0; i < 4; i++)
        maxi = max(maxi, dp[n - 1][i]);
    cout << maxi << endl;
}