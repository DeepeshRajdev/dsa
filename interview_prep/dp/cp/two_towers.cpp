#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        int cnt1 = 0, cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if ((s[i] == 'B' && s[i + 1] == 'B') || (s[i] == 'R' && s[i + 1] == 'R'))
                cnt++;
        }
        for (int i = 0; i < m - 1; i++)
        {
            if ((t[i] == 'B' && t[i + 1] == 'B') || (t[i] == 'R' && t[i + 1] == 'R'))
                cnt1++;
        }
        if (cnt + cnt1 == 0)
            cout << "YES\n";
        else if (cnt + cnt1 > 1)
            cout << "NO\n";
        else
        {
            if (s[n - 1] == t[m - 1])
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}