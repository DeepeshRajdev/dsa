#include <bits/stdc++.h>
using namespace std;
long long lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (isPrime(n))
            cout << 1 << " " << n - 1 << endl;
        else
        {
            vector<int> v;
            v.push_back(0);
            for (int i = 1; i < n; i++)
            {
                v.push_back(i);
            }
            int p = 1;
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    p = i;
                    break;
                }
            }
            if (lcm(p, n - p) > lcm(n / p, n - n / p))
            {
                cout << n / p << " " << n - n / p << endl;
            }
            else
                cout << p << " " << n - p << endl;
        }
    }
}
