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

void display(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}

void printInv(vector<int> &arr)
{
  vector<int> inv(arr.size(), 0);
  for (int i = 0; i < arr.size(); i++)
  {
    inv[arr[i]] = i;
  }
  display(inv);
}

bool isInv(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[arr[i]] != i)
      return false;
  }
  return true;
}

int main(int args, char **argn)
{
  int size = 0, data = 0;
  cin >> size;

  vector<int> arr(size, 0);
  input(arr);
  printInv(arr);
  cout << (boolalpha) << isInv(arr);
  return 0;
}