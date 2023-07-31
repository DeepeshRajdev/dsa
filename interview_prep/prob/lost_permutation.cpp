#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;
        vector<int> v;

        for (int i = 0; i < m; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }
        int s1 = accumulate(v.begin(), v.end(), 0);
        int max = *max_element(v.begin(), v.end());
        int s2 = max * (max + 1) / 2;
        int s3 = s2 - s1;
        int s4 = s - s3;
        bool flag = 0;
        if (s4 == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            int i = 1;
            int q = 0;
            while (q < s4)
            {
                q += max + i;
                if (s4 == q)
                {
                    cout << "yes" << endl;
                    flag = 1;
                    break;
                }
                i++;
            }
            if (flag == 0)
                cout << "no" << endl;
        }
    }
}
