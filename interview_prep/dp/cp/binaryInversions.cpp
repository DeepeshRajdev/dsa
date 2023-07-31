#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll f(vector<ll> v)
{
    ll s = accumulate(v.begin(), v.end(), 0);
    ll n = v.size(), sum = 0, ans = 0;
    vector<ll> p;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        p.push_back(sum);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            ans += (n - i - s + p[i] - 1);
    }
    return ans;
}
ll g(vector<ll> v)
{
    ll n = v.size(), sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            v[i] = 1;
            break;
        }
    }
    ll s = accumulate(v.begin(), v.end(), 0);

    vector<ll> p;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        p.push_back(sum);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            ans += (n - i - s + p[i] - 1);
    }
    return ans;
}
ll h(vector<ll> v)
{

    ll n = v.size(), sum = 0, ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 1)
        {
            v[i] = 0;
            break;
        }
    }
    ll s = accumulate(v.begin(), v.end(), 0);
    vector<ll> p;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        p.push_back(sum);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            ans += (n - i - s + p[i] - 1);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            v.push_back(z);
        }
        ll x = f(v);
        ll y = h(v);
        ll z = g(v);
        ll ans = max(x, max(y, z));
        cout << ans << endl;
    }
    return 0;
}