#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        unordered_map<char, int> a;
        unordered_map<char, int> b;
        for (auto x : s)
        {
            a[x]++;
            b[x] = 0;
        }
        int p = 0, q = 0;
        for (auto x : s)
        {
            a[x]--;
            b[x]++;
            p = 0;
            q = 0;
            for (auto x : a)
            {
                if (x.second > 0)
                    p++;
            }
            for (auto x : b)
            {
                if (x.second > 0)
                    q++;
            }

            ans = max(ans, p + q);
        }
        cout << ans << endl;
    }
}