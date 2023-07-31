#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> v;
        int cnt = 0;
        int z;
        cin >> z;
        v.push_back(z);
        for (int i = 1; i < x; i++)
        {
            int z;
            cin >> z;
            if (z != v.back())
                v.push_back(z);
        }
        int n = v.size();
        if (n == 1)
            cout << "YES\n";
        else
        {

            for (int i = 1; i < n - 1; i++)
            {
                if (v[i] < v[i - 1] && v[i] < v[i + 1])
                    cnt++;
            }
            if (v[1] > v[0])
                cnt++;
            if (v[n - 1] < v[n - 2])
                cnt++;
            if (cnt == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}