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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }
        int i = n - 2;
        while (i >= 0)
        {
            if (v[i] > v[i + 1])
                break;

            i--;
        }
        int u = i + 1;
        set<int> s;
        for (int k = 0; k <= i; k++)
        {
            s.insert(v[k]);
        }
        for (int j = i + 1; j < n; j++)
        {
            if (s.find(v[j]) != s.end())
                i = j;
        }
        while (u <= i)
        {
            s.insert(v[u]);
            u++;
        }
        cout << s.size() << endl;
    }
}