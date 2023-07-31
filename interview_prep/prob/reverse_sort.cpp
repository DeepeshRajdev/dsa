#include <bits/stdc++.h>
using namespace std;
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> ans;

        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                cnt1++;
            if (s[i] == '1')
                cnt2++;
        }
        for (int i = 0; i < cnt1; i++)
        {
            if (s[i] == '1')
                ans.push_back(i + 1);
        }
        for (int i = cnt1; i < s.length(); i++)
        {
            if (s[i] == '0')
                ans.push_back(i + 1);
        }
        if (ans.size() == 0)
            cout << 0 << endl;
        else
        {
            cout << 1 << endl;
            cout << ans.size() << " ";
            for (auto x : ans)
                cout << x << " ";
            cout << endl;
        }
    }
}
