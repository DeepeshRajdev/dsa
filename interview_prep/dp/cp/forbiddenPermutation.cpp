#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, d;
        cin >> n >> m >> d;
        vector<int> p;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            p.push_back(z);
            mp[z] = i + 1;
        }
        vector<int> a;
        int ans = INT_MAX;

        int mini = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            int z;
            cin >> z;
            a.push_back(z);
        }
        for (int i = 0; i < m - 1; i++)
        {
            int x = mp[a[i]];
            int y = mp[a[i + 1]];

            if (y - x > d || y <= x)
            {
                ans = 0;
                break;
            }

            if (d < n - 1)
            {

                ans = min(ans, (d - y + x + 1));
            }
            ans = min(y - x, ans);
        }
        cout << ans << endl;
    }
}