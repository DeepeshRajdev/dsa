#include <bits/stdc++.h>
using namespace std;
void f(vector<int> &v, int k, int sum, int ind, vector<int> &arr, int n)
{
    if (ind == n)
    {
        if (sum == k)
        {
            for (int x : v)
            {
                cout << x << " ";
            }

            cout << endl;
        }

        return;
    }
    v.push_back(arr[ind]);
    sum += arr[ind];
    f(v, k, sum, ind + 1, arr, n);

    v.pop_back();
    sum -= arr[ind];
    f(v, k, sum, ind + 1, arr, n);
}
int main()
{
    vector<int> v;
    vector<int> arr = {1, 2, 1};
    f(v, 2, 0, 0, arr, 3);
}