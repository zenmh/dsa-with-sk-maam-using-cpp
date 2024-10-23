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

      int freq = 0, ans;

      for (int i = 0; i < n; i++)
      {
            if (freq == 0)
            {
                  ans = arr[i];
            }

            if (arr[i] == ans)
            {
                  freq++;
            }
            else
            {
                  freq--;
            }
      }
      // When the majority element not more than 1/2
      // int count = 0;

      // for (int i = 0; i < n; i++)
      // {
      //       if (arr[i] == ans)
      //       {
      //             count++;
      //       }
      // }

      // if (count > n / 2)
      // {
      //       ans = count;
      // }
      // else
      // {
      //       ans = -1;
      // }

      cout << ans;

      return 0;
}