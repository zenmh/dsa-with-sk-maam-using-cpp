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

      int target;

      cin >> target;

      vector<int> v;

      int i = 0, j = n - 1;

      while (i < j)
      {
            int pairSum = arr[i] + arr[j];

            if (pairSum > target)
            {
                  j--;
            }
            else if (pairSum < target)
            {
                  i++;
            }
            else
            {
                  v.push_back(i);
                  v.push_back(j);
                  break;
            }
      }

      cout << v[0] << ' ' << v[1];

      return 0;
}