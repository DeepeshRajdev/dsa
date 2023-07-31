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
        vector<ll> e;
        vector<ll> o;
        for (int i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            if (z & 1)
                o.push_back(z);
            else
                e.push_back(z);
        }
        if (is_sorted(e.begin(), e.end()) && is_sorted(o.begin(), o.end()))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}