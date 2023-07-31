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
        if (n == k || k == 1)
        {
            for (auto x : v)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
        {
            int i = 0;
            for (; i < n / 2; i++)
            {
                cout << n - i << " " << 1 + i << " ";
            }
            if (n % 2)
                cout << n - i << " ";
            cout << endl;
        }
    }
}