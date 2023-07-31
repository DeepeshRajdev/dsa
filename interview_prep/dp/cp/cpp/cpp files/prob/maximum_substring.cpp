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
        long long cnt = 0, maxi = 0, cnt2 = 0, maxi2 = 0, k1 = 0, k2 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                k1++;
            if (s[i] == '0')
                k2++;
            if (s[i] == '1')
            {
                cnt++;
                maxi = max(maxi, cnt);
            }
            else if (s[i] == '0')
                cnt = 0;

            if (s[i] == '0')
            {
                cnt2++;
                maxi2 = max(maxi2, cnt2);
            }
            else if (s[i] == '1')
                cnt2 = 0;
        }
        long long p = max(pow(maxi, 2), pow(maxi2, 2));
        long long q = k1 * k2;
        cout << max(q, p) << endl;
    }
}