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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << n - i + 1 << " " << i << " ";
            }
            cout << n / 2 + 1 << " ";
        }
        else
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << n - i + 1 << " " << i << " ";
            }
        }
        cout << endl;
    }
}
