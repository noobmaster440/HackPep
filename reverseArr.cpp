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

void swap(vector<int> &arr, int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void reverse(vector<int> &arr)
{
  int si = 0, ei = arr.size() - 1;
  while (si < ei)
  {
    swap(arr, si, ei);
    si++;
    ei--;
  }
}
int main(int args, char **argn)
{
  int size = 0, data = 0;
  cin >> size;
  vector<int> arr(size, 0);
  input(arr);
  reverse(arr);
  display(arr);
  return 0;
}