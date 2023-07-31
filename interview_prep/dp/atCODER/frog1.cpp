#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
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
        dp[i] = min((abs(h[i] - h[i + 1]) + dp[i + 1]), (abs(h[i] - h[i + 2]) + dp[i + 2]));
    }
    cout << dp[1] << endl;
}