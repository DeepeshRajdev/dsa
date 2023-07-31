#include <bits/stdc++.h>
using namespace std;
void f(vector<int> &ds, vector<int> &map, vector<int> arr, int n)
{
    if (ds.size() == n)
    {
        for (auto x : ds)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (map[i] == 0)
        {
            ds.push_back(arr[i]);
            map[i] = 1;
            f(ds, map, arr, n);
            map[i] = 0;
            ds.pop_back();
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> map(arr.size(), 0);
    vector<int> ds;
    f(ds, map, arr, arr.size());
}