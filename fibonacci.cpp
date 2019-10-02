#include <iostream>
using namespace std;

int printFib(int n)
{
  int prev = 0;
  int curr = 1;
  for (int i = 0; i < n; i++)
  {
    int next = prev + curr;
    prev = curr;
    curr = next;
  }
  return prev;
}

int main(int args, char **argn)
{
  int n = 0;
  cin >> n;
  cout << printFib(n);
}