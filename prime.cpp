#include <iostream>
using namespace std;

void isPrime(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << "Not Prime";
      return;
    }
  }
  cout << "Prime";
}

int main(int args, char **argn)
{
  int n = 0;
  cin >> n;
  isPrime(n);
}