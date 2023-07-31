#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (k == 1 || n == k)
            cout << 1 << endl;
        else if (n == 1)
            cout << k << endl;
        else
        {
            if (k > n)
            {
                ll m = k / n;
                ll l = k - (m * (n - 1));

                if (m == 1 && n == 2)
                    cout << max(m, k - m) << endl;
                else if (l > m)
                    cout << m + 1 << endl;
                else
                    cout << m << endl;
            }
            else if (k < n)
            {
                ll s = n + (n % k);
                ll m = s / n;
                ll l = s - (m * (n - 1));
                if (l > m)
                    cout << m + 1 << endl;
                else
                    cout << m << endl;
            }
        }
    }
}
