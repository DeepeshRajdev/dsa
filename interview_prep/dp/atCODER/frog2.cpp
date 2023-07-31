#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h;
    h.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        h.push_back(z);
    }
    vector<int> dp(n + 1, 0);
    dp[n - 1] = abs(h[n] - h[n - 1]);
    for (int i = n - 2; i >= 1; i--)
    {
        int mini = INT_MAX;
        for (int j = 1; j <= k; j++)
        {
            if (j + i <= n)
                mini = min((abs(h[i] - h[i + j]) + dp[i + j]), mini);
        }
        dp[i] = mini;
    }
    cout << dp[1] << endl;
}