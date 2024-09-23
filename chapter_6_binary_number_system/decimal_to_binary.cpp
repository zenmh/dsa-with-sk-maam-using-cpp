#include <bits/stdc++.h>
using namespace std;

long long decimalToBinary(int x)
{

      long long ans = 0, power = 1;

      while (x > 0)
      {
            int reminder = x % 2;

            x /= 2;

            ans += (reminder * power);
            power *= 10;
      }

      return ans;
}

int main()
{
      int x;

      cin >> x;

      cout << decimalToBinary(x) << endl;

      return 0;
}