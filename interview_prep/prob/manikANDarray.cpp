#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<ll> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }
        // ll mx = *max_element(v.begin(), v.end());
        // ll mn = *min_element(v.begin(), v.end());
        // int i = 0, j = 0;
        // for (int k = 0; i < n; i++)
        // {
        //     if (v[i] == mx)
        //         i = k;
        //     else if (v[i] == mn)
        //         j = k;
        // }
        // if (i == n - 1 || j == 0 || (i + 1) % n == j || (j + 1) % n == i)
        //     cout << mx - mn << endl;
        // else
        // {
        //     ll maxi = v[n - 1] - v[0];
        //     for (int i = 0; i < n; i++)
        //     {

        //         v.push_back(v.front());
        //         v.pop_front();
        //         maxi = max(maxi, v[n - 1] - v[0]);
        //     }
        //     cout << maxi
        //          << endl;
        // }
        }
}