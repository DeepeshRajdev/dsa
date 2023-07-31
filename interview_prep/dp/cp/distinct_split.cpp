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
        unordered_set<char> a;
        unordered_set<char> b;
        for (int i = 1; i < n; i++)
        {
            int j = i - 1;
            int k = i;
            while (j >= 0)
            {
                a.insert(s[j]);
                j--;
            }

            while (k < n)
            {
                b.insert(s[k]);
                k++;
            }

            int g = a.size() + b.size();

            ans = max(ans, g);
            a.clear();
            b.clear();
        }
        cout << ans << endl;
    }
}