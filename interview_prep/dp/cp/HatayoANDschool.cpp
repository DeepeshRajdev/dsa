#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> ind;
        vector<int> p;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            if (z % 2)
                ind.push_back(i);
            else
                p.push_back(i);
        }
        int x = ind.size();
        if (x == 0 || (x == 2 && p.size() == 1))
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            if (x >= 3)
            {
                for (int i = 0; i < 3; i++)
                {
                    cout << ind[i] + 1 << " ";
                }
                cout << endl;
            }
            else if (x % 2 == 0 || x == 1)
            {
                cout << ind[0] + 1 << " ";
                for (int i = 0; i < 2; i++)
                {
                    cout << p[i] + 1 << " ";
                }
                cout << endl;
            }
        }
    }
}