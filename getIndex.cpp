#include <iostream>
#include <vector>
using namespace std;

int getIdx(vector<int> &arr, int data)
{
  for (int i = 0; i < arr.size(); i++)
  {
    if (data == arr[i])
    {
      return i;
    }
  }
  return -1;
}
int main(int args, char **argn)
{
  int size = 0, data = 0;
  cin >> size;
  if (size < 1)
  {
    cout << "Invalid Input";
    return 0;
  }
  vector<int> arr(size, 0);
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
    if (arr[i] <= 0)
    {
      cout << "Invalid Input";
      return 0;
    }
  }

  cin >> data;
  cout << getIdx(arr, data);
  return 0;
}