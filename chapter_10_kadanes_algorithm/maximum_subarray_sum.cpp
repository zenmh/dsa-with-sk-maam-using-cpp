#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;

      cin >> n;

      int array[n];

      for (int i = 0; i < n; i++)
      {
            cin >> array[i];
      }

      int maximumSum = INT_MIN;

      for (int start = 0; start < n; start++) // O(n*2)
      {
            int currentSum = 0;
            for (int end = start; end < n; end++)
            {
                  currentSum += array[end];
                  maximumSum = max(maximumSum, currentSum);
            }
      }

      cout << maximumSum;

      return 0;
}