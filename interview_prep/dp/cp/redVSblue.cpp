#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        int p = r / (b + 1);
        int q = r % (b + 1);
        string k;
        string ans;
        for (int i = 0; i < p; i++)
        {
            k += 'R';
        }
        k += "RB";
        for (int i = 0; i < q; i++)
        {
            ans += k;
        }
        k.pop_back();
        k.pop_back();
        k += 'B';
        for (int i = 0; i < b - q; i++)
        {
            ans += k;
        }
        k.pop_back();
        ans += k;
        cout << ans << endl;
    }
}