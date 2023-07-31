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
        if (n % 2 == 0)
        {
            cout << "yes" << endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << 1 << " " << -1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (n == 3)
                cout << "no" << endl;
            else
            {
                cout << "yes" << endl;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << (n - 3) / 2 << " " << (1 - n) / 2 << " ";
                }
                cout << (n - 3) / 2 << " ";
                cout << endl;
            }
        }
    }
}