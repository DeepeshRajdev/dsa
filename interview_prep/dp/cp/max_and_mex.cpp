#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        set<ll> s;
        for (int i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            s.insert(z);
        }
        if (k == 0)
            cout << s.size() << endl;
        else
        {
            ll a = *(--s.end());
            ll b = -1;
            for (int i = 0; i < n; i++)
            {
                if (s.find(i) == s.end())
                {
                    b = i;
                    break;
                }
            }
            if (b == -1)
                b = n;
            ll c = (a + b + 1) / 2;
            s.insert(c);
            if (b > a)
            {
                cout << n + k << endl;
            }
            else
                cout << s.size() << endl;
        }
    }
}