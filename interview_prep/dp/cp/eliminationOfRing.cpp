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
        int cnt = 0;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }
        // while (n > 2)
        // {
        //     if (v[0] == v.back())
        //         v.pop_back();
        //     else
        //     {
        //         cnt++;
        //         v.pop_back();
        //     }
        //     n--;
        // }
        // cnt += n;
        for (int i = 0; i <= n - 2; i++)
        {
            if (v[i] != v[(i + 2) % n])
                cnt++;
        }
        if (cnt == 0)
        {
            cout << 1 + n / 2 << endl;
        }
        else
            cout << n << endl;
    }
}
