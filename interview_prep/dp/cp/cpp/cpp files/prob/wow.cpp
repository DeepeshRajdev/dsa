#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(i + 1);
        }
        swap(v[1], v[n - 1]);
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}