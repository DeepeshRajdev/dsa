#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> price;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        price.push_back(z);
    }
    int x, y, s = 0;
    sort(price.begin(), price.end());
    vector<int> sum;
    sum.push_back(0);
    for (int i = 0; i < n; i++)
    {
        s += price[i];
        sum.push_back(s);
    }

    while (q--)
    {
        cin >> x >> y;
        cout << sum[n - x + y] - sum[n - x] << endl;
    }
}