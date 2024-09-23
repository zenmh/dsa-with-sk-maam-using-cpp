#include <bits/stdc++.h>
using namespace std;

int main()
{
      int x, sum = 0;

      cin >> x;

      while (x > 0)
      {
            int lastDigit = x % 10;

            x = x / 10;

            sum += lastDigit;
      }

      cout << sum;

      return 0;
}