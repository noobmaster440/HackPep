#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void addH(vector<int> &arr1, vector<int> &arr2)
{
  int carry = 0;
  vector<int> ans(arr1.size() + 1);
  int i = arr1.size() - 1, j = arr2.size() - 1, k = ans.size() - 1;
  while (j >= 0)
  {
    ans[k] = arr1[i] + arr2[j] + carry;
    carry = ans[k] / 10;
    ans[k] = ans[k] % 10;
    i--;
    j--;
    k--;
  }
  if (carry == 0 && i == j)
  {
    for (int i = 1; i < ans.size(); i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
    return;
  }
  else
  {
    while (i >= 0)
    {
      ans[k] = arr1[i] + carry;
      carry = ans[k] / 10;
      ans[k] = ans[k] % 10;
      k--;
      i--;
    }
  }
  if (carry == 1)
  {
    ans[0] = 1;
    cout << ans[0] << " ";
  }
  for (int i = 1; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}
void add(vector<int> &arr1, vector<int> &arr2)
{
  if (arr1.size() > arr2.size())
  {
    addH(arr1, arr2);
  }
  else
  {
    addH(arr2, arr1);
  }
}

void input(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }
}
int main()
{
  int size1 = 0, size2 = 0;

  cin >> size1;
  vector<int> arr1(size1, 0);
  input(arr1);

  cin >> size2;
  vector<int> arr2(size2, 0);
  input(arr2);
  add(arr1, arr2);
}