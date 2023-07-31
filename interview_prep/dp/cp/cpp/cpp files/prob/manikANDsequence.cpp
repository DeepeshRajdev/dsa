#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        if (n > m || (n % 2 == 0 && m % 2 != 0))
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            if (n % 2 == 0)
            {
                for (int i = 0; i < n - 2; i++)
                {
                    cout << 1 << " ";
                }

                cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << endl;
            }
            else
            {

                for (int i = 0; i < n - 1; i++)
                {
                    cout << 1 << " ";
                }
                cout << m - n + 1 << endl;
            }
        }
    }
}