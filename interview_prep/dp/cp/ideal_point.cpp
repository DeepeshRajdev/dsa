#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            pair<int, int> p;
            cin >> p.first;
            cin >> p.second;
            if (k >= p.first && k <= p.second)
                v.push_back(p);
        }
        int s = v.size();
        vector<int> f(51, 0);
        for (int i = 1; i < 51; i++)
        {
            for (int j = 0; j < s; j++)
            {
                if (i >= v[j].first && i <= v[j].second)
                    f[i]++;
            }
        }
        if (n == 1 && s > 0 && k == v[0].first && k == v[0].second)
            cout << "YES\n";
        else if (n == 1 || s == 0)
            cout << "NO\n";
        else
        {
            bool flag = 0;
            for (int i = 0; i < 51; i++)
            {
                if (f[i] == f[k] && i != k)
                {
                    flag = 1;
                    cout << "NO\n";
                    break;
                }
            }
            if (flag == 0)
                cout << "YES\n";
        }
    }
}