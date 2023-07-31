#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v.push_back(z);
        }
        priority_queue<int> mx;
        priority_queue<int, vector<int>, greater<int>> mn;
        for (int i = 0; i < n; i++)
        {
            mx.push(v[i]);
            mn.push(v[i]);
        }
        bool flag = 0;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (mx.top() != max(v[i], v[j]) && mn.top() != min(v[i], v[j]))
            {
                flag = 1;
                break;
            }
            if (mx.top() == max(v[i], v[j]))
            {
                mx.pop();
                if (v[j] > v[i])
                    j--;
                else
                    i++;
            }
            if (mn.top() == min(v[i], v[j]))
            {
                mn.pop();
                if (v[j] > v[i])
                    i++;
                else
                    j--;
            }
        }
        if (flag)
            cout << i + 1 << " " << j + 1 << endl;
        else
            cout << -1 << endl;
    }
}