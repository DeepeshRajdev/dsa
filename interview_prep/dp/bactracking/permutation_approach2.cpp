#include <bits/stdc++.h>
using namespace std;
void f(int ind, vector<int> arr, int n)
{
    if (ind == n)
    {
        for (int x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    for (int i = ind; i < n; i++)
    {
        swap(arr[i], arr[ind]); // considering all combinations as we are
        f(ind + 1, arr, n);     // swapping every element with index element
        swap(arr[i], arr[ind]); // backtrack
    }
}
int main()
{
    vector<int> arr = {2, 3, 4};
    f(0, arr, arr.size());
}