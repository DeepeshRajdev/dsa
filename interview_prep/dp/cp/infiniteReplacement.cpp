#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string t;
        cin >> t;
        if (t.find('a') != string::npos)
        {
            if (t.length() == 1)
                cout << 1 << endl;
            else
                cout << -1 << endl;
        }
        else
        {
            long long ans = pow(2, s.length());
            cout << ans << endl;
        }
    }
}