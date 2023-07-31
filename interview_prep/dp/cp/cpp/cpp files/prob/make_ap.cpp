#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x = (a + c) % (2 * b);
        int y = (2 * b - c) % a;
        int z = (2 * b - a) % c;
        if (x && y && z && (2 * b - c) && (2 * b - a))
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
}