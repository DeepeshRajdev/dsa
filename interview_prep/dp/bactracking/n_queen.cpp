#include <bits/stdc++.h>
using namespace std;
bool isSafe(int row, int col, int n, vector<string> board)
{
    int r = row;
    int c = col;
    /* Check upper diagonal on left side */
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row--;
        col--;
    }
    row = r;
    col = c;
    /* Check this row on left side */
    while (col >= 0)
    {
        if (board[row][col] == 'Q')

            return false;
        col--;
    }
    row = r;
    col = c;
    /* Check lower diagonal on left side */
    while (row <= n && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row++;
        col--;
        return true;
    }
}
void solve(int col, vector<string> &board, int n)
{
    if (col == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << board[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int row = 0; row < n; row++) /* Consider this column and try placing
      this queen in all rows one by one */
    {
        if (isSafe(row, col, n, board))
        {
            board[row][col] = 'Q';
            solve(col + 1, board, n);
            board[row][col] = '.'; /*  If placing queen in board[i][col]
               doesn't lead to a solution, then
              remove queen from board[i][col]
               board[i][col] = 0; BACKTRACK*/
        }
    }
}
int main()
{
    int n = 4;
    vector<string> board;
    string s(n, '.');
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    solve(0, board, n);
}