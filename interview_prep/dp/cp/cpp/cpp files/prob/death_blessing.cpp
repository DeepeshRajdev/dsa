#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> v;
        vector<long long> l;
        for (int i = 0; i < n; i++)
        {
            long long z;
            cin >> z;
            v.push_back(z);
        }
        for (int i = 0; i < n; i++)
        {
            long long z;
            cin >> z;

            l.push_back(z);
        }
        long long h = 0;
        for (int i = 0; i < n; i++)
        {
            h += v[i];
        }
        long long p = 0;
        for (int i = 0; i < n; i++)
        {
            p += l[i];
        }
        long long max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (l[i] > max)
                max = l[i];
        }
        long long ans = h + p - max;
        cout << ans << endl;
    }
}