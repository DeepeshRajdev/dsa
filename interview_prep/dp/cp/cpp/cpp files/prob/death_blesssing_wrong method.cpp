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
        int n;
        cin >> n;

        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back({z, 0});
        }
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;

            v[i].second = z;
        }
        sort(v.begin(), v.end());
        long long t = 0;
        while (!v.empty())
        {
            t += v.back().first;
            long long h = v.back().second;
            v.pop_back();
            if (!v.empty())
                v.back().first += h;
        }
        cout << t << endl;
    }
}