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
        string s;
        cin >> s;
        int ans = -1, c = -1;
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R' && s[i + 1] == 'L')
            {
                ans = 0;
                flag = 1;
                break;
            }
            if (s[i] == 'L' && s[i + 1] == 'R')
                c = i;
        }
        if (flag == 1)
            cout << 0 << endl;
        else
        {
            if (c >= 0)
                cout << c + 1 << endl;
            else
                cout << -1 << endl;
        }
    }
}