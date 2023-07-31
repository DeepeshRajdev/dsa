#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, p, q, d;
        cin >> n >> m >> p >> q >> d;
        if (min((n - p), q - 1) <= d && min((m - q), p - 1) <= d)
            cout << -1 << endl;
        else
            cout << n + m - 2 << endl;
    }
}