#include <iostream>
#include <vector>
using namespace std;
void input(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }
}

bool isInv(vector<int> &arr1, vector<int> &arr2)
{
  for (int i = 0; i < arr1.size(); i++)
  {
    if (arr2[arr1[i]] != i)
      return false;
  }
  return true;
}

int main(int args, char **argn)
{
  int size = 0, data = 0;
  cin >> size;

  vector<int> arr1(size, 0);
  vector<int> arr2(size, 0);

  input(arr1);
  input(arr2);

  cout << (boolalpha) << isInv(arr1, arr2);
  return 0;
}