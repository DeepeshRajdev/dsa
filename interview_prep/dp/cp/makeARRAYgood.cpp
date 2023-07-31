#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll f(ll x)
{
    int w = 1;
    while (w < x)
        w *= 2;
    return w;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << n << endl;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            v.push_back(z);
        }
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " " << f(v[i]) - v[i] << endl;
        }
    }
}