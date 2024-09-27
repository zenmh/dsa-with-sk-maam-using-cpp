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

      int ans;

      for (int i = 0; i < n; i++) // O(n*n)
      {
            int freq = 0;

            for (int j = 0; j < n; j++)
            {
                  if (arr[i] == arr[j])
                  {
                        freq++;
                  }
            }

            if (freq > (n / 2))
            {
                  ans = arr[i];
            }
      }

      cout << ans;

      return 0;
}