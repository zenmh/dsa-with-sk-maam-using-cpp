#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int num)
{
      int ans = 0, power = 1;

      while (num > 0)
      {
            int remainder = num % 10;

            ans += remainder * power;

            num /= 10;
            power += 2;
      }

      return ans;
}

int main()
{
      int num;

      cin >> num;

      cout << binaryToDecimal(num) << endl;

      return 0;
}