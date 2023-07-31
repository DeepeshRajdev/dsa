#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll a, b;
        cin >> a >> b;
        ll n, m;
        cin >> n >> m;
        if ((m * a) < b * (m + 1))
        {
            ll x = n / (m + 1);
            ll y = n % (m + 1);
            ll z = x * m * a;
            ll w = y * min(a, b);
            cout << z + w << endl;
        }
        else
        {
            ll x = n / (m + 1);
            ll y = n % (m + 1);
            ll z = x * b * (m + 1);
            ll w = y * min(a, b);
            cout << z + w << endl;
        }
    }
}