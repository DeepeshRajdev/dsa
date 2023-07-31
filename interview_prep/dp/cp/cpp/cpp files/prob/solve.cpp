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
      vector<int> v;
      for (int i = 0; i < n; i++)
      {
         int z;
         cin >> z;
         if (i == 0 || z != v.back())
            v.push_back(z);
      }
      int i = 0, j = i, c = 0;
      if (n == 1)
      {
         cout << "yes" << endl;
      }
      else
      {
         while (j < n)
         {
            if (v[j] == v[i])
               j++;
            else
            {

               if (i == 0 && v[j] > v[j - 1])
                  c++;
               else if (j == n - 1 && v[i - 1] > v[i])
                  c++;
               else if (v[j] > v[j - 1] && v[i - 1] > v[i])
                  c++;

               i = j;
               j = i;
            }
         }
         if (c == 1)
            cout << "yes" << endl;
         else
            cout << "no" << endl;
      }
   }
}
