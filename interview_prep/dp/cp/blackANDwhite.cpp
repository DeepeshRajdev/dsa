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
            char z;
            cin >> z;
            if (z == 'B')
                v.push_back(0);
            else
                v.push_back(1);
        }
        vector<int> s;
        int sum = 0, ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            s.push_back(sum);
        }
        if (n == k)
            cout << s[n - 1] << endl;
        else
        {
            for (int i = 0; i + k - 1 < n; i++)
            {
                ans = min(ans, s[i + k - 1] - s[i] + v[i]);
            }
            cout << ans << endl;
        }
    }
}