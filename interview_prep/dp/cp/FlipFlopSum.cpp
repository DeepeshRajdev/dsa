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
        int sum = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            sum += z;
            v.push_back(z);
        }
        if (sum == n)
        {
            cout << sum - 4 << endl;
        }
        else
        {
            bool flag = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] + v[i + 1] == -2)
                {
                    flag = 1;
                    cout << sum + 4 << endl;
                    break;
                }
            }
            if (flag == 0)
                cout << sum << endl;
        }
    }
}