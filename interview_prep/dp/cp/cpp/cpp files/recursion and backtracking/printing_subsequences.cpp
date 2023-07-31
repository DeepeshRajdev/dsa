#include <bits/stdc++.h>
using namespace std;

void f(int ind, vector<int> &v, vector<int> arr, int n)
{
    if (ind >= n)
    {
        for (int x : v)
            cout << x << " ";
        cout << endl;
        return;
    }
    v.push_back(arr[ind]); // take it
    f(ind + 1, v, arr, n);
    v.pop_back();

    f(ind + 1, v, arr, n); // don't take it
}
int main()
{
    vector<int> arr = {3, 1, 2};
    vector<int> v;
    f(0, v, arr, arr.size());
}