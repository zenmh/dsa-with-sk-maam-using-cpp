#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;

      cin >> n;

      int arr[n];

      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }

      int smallestNumber = INT_MAX, smallestNumberIndex = 0;

      for (int i = 0; i < n; i++)
      {
            if (arr[i] < smallestNumber)
            {
                  smallestNumber = arr[i];
                  smallestNumberIndex = i;
            }
      }

      cout << smallestNumberIndex;

      return 0;
}