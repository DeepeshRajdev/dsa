#include <bits/stdc++.h>
using namespace std;

int f(int ind1, int ind2, string a, string b, vector<vector<int>> &dp)
{
    if (ind1 < 0 || ind2 < 0)
        return 0;

    if (dp[ind1][ind2] != -1)
        return dp[ind1][ind2];
    if (a[ind1] == b[ind2])
    {
        return dp[ind1][ind2] = 1 + f(ind1 - 1, ind2 - 1, a, b, dp);
    }
    return dp[ind1][ind2] = max(f(ind1 - 1, ind2, a, b, dp), f(ind1, ind2 - 1, a, b, dp));
}
int main()
{
    string a, b;
    cin >> a >> b;
    vector<vector<int>> dp(a.size(), vector<int>(b.size(), -1));
    cout << "lcs :" << f(a.size() - 1, b.size() - 1, a, b, dp) << endl;
}
