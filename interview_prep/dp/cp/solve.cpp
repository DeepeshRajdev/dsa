#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, temp, a;
        cin >> s;
        string q;
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] <= s[i - 1])
                cnt++;
            else
                break;
        }

        string ans = s.substr(0, cnt + 1);
        q = ans;
        reverse(ans.begin(), ans.end());
        q = q + ans;

        string w;
        w.push_back(s[0]);
        w.push_back(s[0]);
        if (q > w)
            cout << w << endl;
        else
            cout << q << endl;
    }
}
