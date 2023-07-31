#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    // 1 based indexing is done in tabulation so that when any of the index reches -1 we can store that at 0
    vector<int> prv(m + 1, 0), cur(m + 1, 0); // here shifting is done dp[0][anything] will
    // tell that we have covered string 1 completely and reached index -1

    for (int i = 0; i <= m; i++)
        prv[i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
                cur[j] = 1 + prv[j - 1];
            else
                cur[j] = max(prv[j], cur[j - 1]);
        }
        prv = cur;
    }
    cout << "lcs :" << prv[m] << endl;
}