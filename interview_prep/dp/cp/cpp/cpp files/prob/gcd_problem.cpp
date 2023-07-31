#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 2;
        while (__gcd(a, n - a - 1) != 1)
        {
            a++;
        }
        cout << a << " " << n - a - 1 << " " << 1 << endl;
    }
}
