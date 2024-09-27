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

      sort(arr, arr + n); // O(NlogN)

      int freq = 0, ans = arr[0];

      for (int i = 0; i < n; i++) // O(N) + O(NlogN) = O(NlogN)
      {
            if (arr[i] == ans)
            {
                  freq++;
            }
            else
            {
                  freq = 0;
                  ans = arr[i];
            }
      }

      cout << ans;

      return 0;
}