#include <iostream>
using namespace std;

void printFib(int n)
{
  int prev = 0;
  int curr = 1;
  while (prev <= n)
  {
    int next = prev + curr;
    cout << prev << " ";
    prev = curr;
    curr = next;
  }
}

int main(int args, char **argn)
{
  int n = 0;
  cin >> n;
  printFib(n);
}