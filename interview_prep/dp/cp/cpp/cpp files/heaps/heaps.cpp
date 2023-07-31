#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int n)
{
    int i = n;
    int temp = v[n];
    while (i > 1 && temp > v[i / 2])
    {
        v[i] = v[i / 2];
        i = i / 2;
    }
    v[i] = temp;
}

void heapsort(vector<int> &v, int n)
{
    int x = v[1];
    v[1] = v[n];
    v[n] = x;
    int i = 1, j = 2 * i;
    while (j < n - 1)
    {
        if (v[j + 1] > v[j])
            j++;
        if (v[i] < v[j])
        {
            swap(v[i], v[j]);
            i = j;
            j = 2 * i;
        }
        else
            break;
    }
}

int main()
{
    vector<int> v = {0, 4, 5, 6, 7, 1, 2};
    for (int i = 2; i <= v.size() - 1; i++)
    {
        insert(v, i);
    }
    for (auto x : v)
        cout << x << " ";

    cout << endl;

    for (int i = v.size() - 1; i >= 2; i--)
    {
        heapsort(v, i);
    }
    for (auto x : v)
        cout << x << " ";
}