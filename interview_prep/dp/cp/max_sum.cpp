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
        deque<ll> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < k; i++)
        {
            if (v[0] + v[1] > v.back())
                v.pop_back();
            else
            {
                v.pop_front();
                v.pop_front();
            }
        }
        ll ans = 0;
        for (auto x : v)
            ans += x;
        cout << ans << endl;
    }
}