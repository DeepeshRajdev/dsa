#include <bits/stdc++.h>
using namespace std;

int f(int ind1, int ind2, string a, string b)
{
    if (ind1 < 0 || ind2 < 0)
        return 0;
    if (a[ind1] == b[ind2])
    {
        return 1 + f(ind1 - 1, ind2 - 1, a, b);
    }
    return max(f(ind1 - 1, ind2, a, b), f(ind1, ind2 - 1, a, b));
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << "lcs :" << f(a.size() - 1, b.size() - 1, a, b) << endl;
}
