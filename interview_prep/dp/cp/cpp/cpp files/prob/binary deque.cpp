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
                if (a[i] == 1)
                {
                    v.pop_front();
                    count++;
                    sum -= 1;
                }
                else if (a[j] == 1)
                {
                    v.pop_back();
                    count++;
                    sum -= 1;
                }
            }
            else
            {
                if (!v.empty())
                    v.pop_front();
                if (!v.empty())
                    v.pop_back();
            }
        }
        cout << count << endl;
    }
}
