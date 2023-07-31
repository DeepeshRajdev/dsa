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
        vector<int> l;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;

            l.push_back(z);
        }
        long long h = accumulate(v.begin(), v.end(), 0);
        long long p = accumulate(l.begin(), l.end(), 0);
        long long max = *max_element(l.begin(), l.end());
        cout << h + p - max << endl;
    }
}