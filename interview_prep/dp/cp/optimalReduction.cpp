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

        deque<int> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }
        sort(v.begin(), v.end());
        int ans = v[0];

        for (int i = 1; i < n; i++)
        {
            ans = max(ans, v[i] - v[i - 1]);
        }
        cout << ans << endl;
    }
}