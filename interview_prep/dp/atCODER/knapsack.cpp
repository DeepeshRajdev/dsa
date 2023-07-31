#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll f(int ind, int k, vector<pair<int, ll>> p, vector<vector<int>> &dp)
{

    if (ind == 0)
    {
        if (k >= p[0].first)
            return p[0].second;

        return 0;
    }
    if (dp[ind][k] != -1)
        return dp[ind][k];
    ll pick = INT_MIN;
    if (k >= p[ind].first)
        pick = p[ind].second + f(ind - 1, k - p[ind].first, p, dp);
    ll npick = f(ind - 1, k, p, dp);
    return dp[ind][k] = max(pick, npick);
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, ll>> p;
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    for (int i = 0; i < n; i++)
    {
        pair<int, ll> z;
        cin >> z.first;
        cin >> z.second;
        p.push_back(z);
    }
    ll ans = 0;
    ans = f(n - 1, k, p, dp);
    cout << ans << endl;
}
