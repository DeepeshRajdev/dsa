#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        deque<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int count = 0;
        int sum = accumulate(v.begin(), v.end(), 0);
        int temp = sum;
        if (sum < s)
            cout << -1 << endl;
        else if (sum == s)
            cout << 0 << endl;
        else
        {
            int i = 0, j = n - 1;
            while (s < sum)
            {
                if (v[i] == 1 && v[j] == 0)
                {
                    v.pop_front();
                    count++;
                    sum -= 1;
                }
                else if (v[j] == 1 && s < sum && v[0] == 0)
                {
                    v.pop_back();
                    count++;
                    sum -= 1;
                    j--;
                }

                else
                {
                    int p = i + 1;
                    int q = j - 1;
                    while (v[p] == 0)
                        p++;
                    while (v[q] == 0)
                        q--;
                    if (p - i > j - q && s < sum)
                    {
                        v.pop_back();
                        count++;
                        sum -= 1;
                        j--;
                    }
                    else if (p - i <= j - q && s < sum)
                    {
                        v.pop_front();
                        sum -= 1;
                        count++;
                    }
                }
            }
            cout << j << endl;
        }
    }
}
