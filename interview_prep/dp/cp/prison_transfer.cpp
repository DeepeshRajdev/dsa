#include <bits/stdc++.h>
using namespace std;
#define ll long long
int f(vector<ll> v, ll start, ll end, ll t, ll n)
{
    bool flag = 1;
    if (end > n)
    {
        if (flag == 0)
            return 0;
        else
            return 1;
    }

    for (int i = start; i < end; i++)
    {
        if (v[i] > t)
            flag = 0;
    }
    return f(v, start + 1, end + 1, t, n);
}

int main()
{
    ll n, t, c;
    cin >> n >> t >> c;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        v.push_back(z);
    }
    int cnt = f(v, 0, c, t, n);
    cout << cnt << endl;
}