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
        int x;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }
        if (n % 2)
        {
            cout << "Mike\n";
        }
        else
        {
            int m = *min_element(v.begin(), v.end());
            for (int i = 0; i < n; i++)
            {
                if (v[i] == m)
                {
                    x = i + 1;
                    break;
                }
            }
            if (x % 2)
                cout << "Joe\n";
            else
                cout << "Mike\n";
        }
    }
}
