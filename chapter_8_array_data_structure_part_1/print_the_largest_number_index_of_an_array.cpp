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

      int largestNumber = INT_MIN, largestNumberIndex = 0;

      for (int i = 0; i < n; i++)
      {
            if (arr[i] > largestNumber)
            {
                  largestNumber = arr[i];
                  largestNumberIndex = i;
            }
      }

      cout << largestNumberIndex;

      return 0;
}