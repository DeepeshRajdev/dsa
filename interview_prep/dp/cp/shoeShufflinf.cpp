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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
            m[z]++;
        }
        bool flag = 0;
        for (auto x : m)
        {
            if (x.second == 1)
            {
                cout << -1 << endl;
                flag = 1;
                break;
            }
        }
    }
}