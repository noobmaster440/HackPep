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
int getMax(vector<int> &arr)
{
  int max = arr[0];
  for (int i = 1; i < arr.size(); i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
  }
  return max;
}
int main(int args, char **argn)
{
  int size = 0;
  cin >> size;
  vector<int> arr(size, 0);
  input(arr);
  cout << getMax(arr);
}