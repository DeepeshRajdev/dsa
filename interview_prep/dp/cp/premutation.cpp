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
        vector<int> rohit;
        int virat;
        map<int, int> m;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            vector<int> ans;
            for (int i = 0; i < n - 1; i++)
            {
                int z;
                cin >> z;
                ans.push_back(z);
            }
            m[ans.back()]++;
            v.push_back(ans);
        }
        for (auto x : m)
        {
            if (x.second > 1)
                virat = x.first;
        }
        for (auto x : v)
        {
            if (x[n - 2] != virat)
            {
                rohit = x;
                break;
            }
        }
        rohit.push_back(virat);
        for (auto x : rohit)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}