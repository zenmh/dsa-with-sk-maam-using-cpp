#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;

      cin >> n;

      char c = 'A';

      for (int i = 1; i <= n; i++)
      {
            for (int j = 1; j < i; j++)
            {
                  cout << "  ";
            }

            for (int j = 1; j <= n - i; j++)
            {
                  cout << c << ' ';
            }

            cout << endl;
            c++;
      }

      return 0;
}