#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
int lcm(int a, int b)
{
  return (a * b) / gcd(a, b);
}

int main(int args, char **argn)
{
  int n = 0, m = 0;
  cin >> n >> m;
  cout << gcd(n, m);
  cout << " " << lcm(n, m);
}