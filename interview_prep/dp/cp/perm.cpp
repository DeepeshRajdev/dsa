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
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i = i + 2)
            {
                swap(v[i], v[i + 1]);
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i = i + 2)
            {
                swap(v[i], v[i + 1]);
            }
            swap(v[n - 1], v[n - 2]);
        }
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
}