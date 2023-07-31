#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &v, int k, int sum, int ind, vector<int> &arr, int n)
{
    if (ind == n)
    {
        if (sum == k)
        {
            return 1;
        }

        else
            return 0;
    }
    v.push_back(arr[ind]);
    sum += arr[ind];
    int l = f(v, k, sum, ind + 1, arr, n);

    v.pop_back();
    sum -= arr[ind];
    int r = f(v, k, sum, ind + 1, arr, n);

    return r + l;
}
int main()
{
    vector<int> v;
    vector<int> arr = {1, 2, 1};
    cout << f(v, 2, 0, 0, arr, 3) << endl;
}