#include <bits/stdc++.h>
using namespace std;

int g(int n, vector<int> &dp)
{ // top-down approach
    if (n == 0 || n == 1)
        return n;   // dp array is taken for memoization
    if (dp[n] != 0) // checking wether we have already computed this subproblem
        return dp[n];
    return dp[n] = g(n - 1, dp) + g(n - 2, dp);
}
int f(int n)
{ // bottom-up appraoch
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    int n = 5;
    vector<int> dp(n + 1, 0);
    cout << g(n, dp);
}