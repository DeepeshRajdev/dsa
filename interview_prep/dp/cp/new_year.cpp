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
        if (n < 2020)
            cout << "NO" << endl;
        else if (n % 2020 == 0 || n % 2021 == 0)
            cout << "YES" << endl;
        else
        {
            int x = n / 2020;
            int y = n / 2021;
            if (n % 2020 <= x)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}