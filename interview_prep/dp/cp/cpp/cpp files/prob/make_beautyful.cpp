#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> v;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
            st.insert(z);
        }
        if (st.size() == 1 && v.size() != 1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
            bool flag = 0;
            deque<int> s(n, 0);
            for (int i = 1; i < n; i++)
            {
                s[i] = s[i - 1] + v[i - 1];
                if (s[i] == v[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                for (int x : v)
                    cout << x << " ";
                cout << endl;
            }
            else if (flag == 1)
            {
                sort(v.begin(), v.end(), greater<int>());

                v.push_front(v[n - 1]);
                v.pop_back();
                for (int x : v)
                    cout << x << " ";
                cout << endl;
            }
        }
    }
}