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
        vector<int> h;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            if (z == 1)
                cnt++;
            else
                h.push_back(z);
        }
        int x = (cnt + 1) / 2;
        cout << h.size() + x << endl;
    }
}