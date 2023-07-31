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
        int cnt = 0;
        int s = a[0] - 48;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '1')
                cnt++;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == '1' && a[i + 1] == '0' || a[i] == '0' && a[i + 1] == '0')
            {
                s += a[i + 1] - 48;
                cout << "+";
            }
            else
            {
                if (s > 0)
                {
                    s -= a[i + 1] - 48;
                    cout << "-";
                }
                else
                {
                    s += a[i + 1] - 48;
                    cout << "+";
                }
            }
        }
        cout << endl;
    }
}