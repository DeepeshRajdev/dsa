#include <bits/stdc++.h>
using namespace std;

bool f(int ind, vector<int> &v, vector<int> arr, int n)
{
    if (ind >= n)
    {
        for (int x : v)
            cout << x << " ";
        cout << endl;
        return true;
    }

    v.push_back(arr[ind]); // take it
    if (f(ind + 1, v, arr, n))
        return true;
    v.pop_back();

    if (f(ind + 1, v, arr, n))
        return true; // don't take it

    return false;
}
int main()
{
    vector<int> arr = {3, 1, 2};
    vector<int> v;
    f(0, v, arr, arr.size());
}