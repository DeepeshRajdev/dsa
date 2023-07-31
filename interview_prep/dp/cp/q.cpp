#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll q = min(a, b);

        while (max(a, b) % q != 0)
            q++;
        ll x = max(a, b) / q;
        cout << x + q << endl;
    }
}