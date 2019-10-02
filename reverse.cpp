#include <iostream>
using namespace std;

int reverse(int n)
{
  int rem = 1;
  int ans = 0;
  while (n != 0)
  {
    rem = n % 10;
    n /= 10;
    ans = ans * 10 + rem;
  }
  return ans;
}

int main(int args, char **argn)
{
  int n = 0;
  cin >> n;
  cout << reverse(n);
}