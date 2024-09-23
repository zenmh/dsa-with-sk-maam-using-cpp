#include <bits/stdc++.h>
using namespace std;

int factorialOfN(int n)
{
      int fact = 1;

      for (int i = 1; i <= n; i++)
      {
            fact *= i;
      }

      return fact;
}

int nCr(int n, int r)
{
      return factorialOfN(n) / (factorialOfN(r) * factorialOfN(n - r));
}

int main()
{
      int n, r;

      cin >> n >> r;

      cout << nCr(n, r) << endl;

      return 0;
}