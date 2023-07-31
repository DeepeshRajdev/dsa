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
        string s;
        cin >> s;
        int p;
        cin >> p;

        priority_queue<char> h;
        for (int i = 0; i < s.length(); i++)
        {
            h.push(s[i]);
        }
        int cost = 0;
        for (int i = 0; i < s.size(); i++)
        {
            cost += s[i] - 96;
        }
        map<char, int> m;
        while (cost > p && !s.empty())
        {
            char c = h.top();
            // size_t found = s.find(c);
            // s.erase(found, 1);
            cost -= (c - 96);
            m[c]++;
            h.pop();
        }
        for (char x : s)
        {
            if (m[x] > 0)
            {
                m[x]--;
                continue;
            }
            cout << x;
        }
        cout << endl;
    }
}