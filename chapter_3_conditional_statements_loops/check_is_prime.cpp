#include <bits/stdc++.h>
using namespace std;

int main()
{
      int x;
      bool flag = true;

      cin >> x;

      for (int i = 2; i * i <= x; i++)
      {
            if (x % i == 0)
            {
                  flag = false;
                  break;
            }
      }

      if (flag)
      {
            cout << "Prime\n";
      }
      else
      {
            cout << "Non prime\n";
      }

      return 0;
}