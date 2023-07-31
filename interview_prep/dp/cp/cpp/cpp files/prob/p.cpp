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
        string a;
        cin >> a;
        string ans;
        int c = 0;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i + 1] <= a[i])
            {
                ans.push_back('-');
                c += a[i] - a[i + 1];
            }
            else
            {
                if (c > 0)
                {
                    ans.push_back('-');
                    c += a[i] - a[i + 1];
                }
                else
                {
                    ans.push_back('+');
                    c += a[i] + a[i + 1] - 96;
                }
            }
        }
        cout << ans << endl;
    }
}
