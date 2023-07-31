#include <bits/stdc++.h>
using namespace std;
int f(int x)
{
    int c1 = 0, c2 = 0;
    if (x % 2 == 0)
    {
        while (x % 2 == 0 && x)
        {
            x = x / 2;
            c1++;
        }
        return c1;
    }

    else
    {
        while (x % 2 != 0 && x)
        {
            x = x / 2;
            c2++;
        }
        return c2;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        if (sum % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                v[i] = f(v[i]);
            }
            int min = *min_element(v.begin(), v.end());
            cout << min << endl;
        }
    }
}