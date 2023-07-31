#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = 0, sum = 0;
        vector<vector<int>> board;
        for (int i = 1; i <= n; i++)
        {
            vector<int> v;
            for (int j = 1; j <= m; j++)
            {
                int z;
                cin >> z;
                v.push_back(z);
            }
            board.push_back(v);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int p = 0, q = 0, r = 0, s = 0, x = board[i][j];
                int row = i, col = j;
                while (row >= 0 && col >= 0)
                {

                    p += board[row][col];
                    row--;
                    col--;
                }
                row = i;
                col = j;
                while (row < n && col >= 0)
                {

                    q += board[row][col];
                    row++;
                    col--;
                }
                row = i;
                col = j;
                while (row >= 0 && col < m)
                {
                    r += board[row][col];

                    row--;
                    col++;
                }
                row = i;
                col = j;
                while (row < n && col < m)
                {
                    s += board[row][col];

                    row++;
                    col++;
                }
                sum = p + q + r + s - 3 * x;

                ans = max(ans, sum);
            }
        }
        cout << ans << endl;
    }
}