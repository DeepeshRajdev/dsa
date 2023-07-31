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
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
            if (z == 1)
                a = i;
            else if (z == 2)
                b = i;
            else if (z == n)
                c = i;
        }

        if (a > b)
            swap(a, b);
        if (c < a)
            cout << c + 1 << " " << a + 1 << endl;
        else if (c > b)
            cout << b + 1 << " " << c + 1 << endl;
        else
            cout << 1 << " " << 1 << endl;
    }
}