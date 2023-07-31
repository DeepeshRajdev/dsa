#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    if (x == 1 || x == 0)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
bool f(int x)
{
    vector<int> v;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0 && isPrime(i))
            v.push_back(i);
    }
    return v.size() == 2;
}
int main()
{

    int n, cnt = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (f(i))
            cnt++;
    }
    cout << cnt << endl;
}
