#include <bits/stdc++.h>
using namespace std;
bool sorted(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}
bool rsorted(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] < v[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, x = 0;
        cin >> n;
        vector<int> v;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            m[z]++;
            v.push_back(z);
        }

        if (sorted(v))
            cout << 0 << endl;
        else if (rsorted(v))
            cout << v[0] << endl;
        else
        {
            if (m.size() == 2)
            {
                for (auto x : m)
                {
                    sum += x.first;
                }
                if (sum % 2 != 0)
                    cout << -1 << endl;
                else
                {
                    cout << sum / 2 << endl;
                }
            }
            else
                cout << -1 << endl;
        }
    }
}