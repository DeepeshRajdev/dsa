#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    // 1 based indexing is done in tabulation so that when any of the index reches -1 we can store that at 0
    vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, -1)); // here shifting is done dp[0][anything] will
    int n = a.size(), m = b.size();                                      // tell that we have covered string 1 completely and reached index -1
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 0; i <= m; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << "lcs :" << dp[n][m] << endl;
}