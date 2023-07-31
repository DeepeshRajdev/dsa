#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long sum = 0;
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z - i);
        }
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[v[i]]++;
        }
        for (auto x : m)
        {
            if (x.second > 1)
            {
                int z = x.second;
                sum += z * (z - 1) / 2;
            }
        }
        cout << sum << endl;
    }
}