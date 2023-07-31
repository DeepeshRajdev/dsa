#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll x, y;
        cin >> x >> y;
        ll p = x - y;
        if (p == 1)
        {
            cout << 2 << endl;
            cout << x << " " << y << endl;
        }
        else if (p == 2)
        {
            cout << 2 * (x - y) << endl;
            cout << x - 1 << " ";

            for (ll i = 0; i < p + 1; i++)
            {
                cout << x-- << " ";
            }
        }
        else
        {
            cout << 2 * (x - y) << endl;
            cout << x - 1 << " ";

            for (ll i = 0; i < p + 1; i++)
            {
                cout << x-- << " ";
            }
            x = x + 2;
            for (ll i = 0; i < p - 2; i++)
            {
                cout << x++
                     << " ";
            }
            cout << endl;
        }
    }
}