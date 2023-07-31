#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        long long sum = 0, ans = 0;
        vector<long long> a;
        for (int i = 0; i < n; i++)
        {
            long long z;
            cin >> z;
            a.push_back(z);
        }

        vector<long long> b;
        for (int i = 0; i < m; i++)
        {
            long long z;
            cin >> z;
            b.push_back(z);
        }
        sort(b.begin(), b.end(), greater<int>());
        if (m <= n)
        {
            sort(a.begin(), a.end());
            for (int i = m; i < n; i++)
                sum += a[i];
            // long long s1 = accumulate(a.begin(), a.end(), 0);
            long long s2 = 0;
            for (int i = 0; i < m; i++)
            {
                s2 += b[i];
            }
            // ans = s1 + s2 - sum;
            cout << s2 + sum << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {

                sum += b[i];
            }
            cout << sum << endl;
        }
    }
}