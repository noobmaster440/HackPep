#include <iostream>
using namespace std;

bool isPrime(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {

      return false;
    }
  }
  return true;
}

void printSeries(int n)
{
  for (int num = 2; num <= n; num++)
  {
    if (isPrime(num))
    {
      cout << num << " ";
    }
  }
}

int main(int args, char **argn)
{
  int n = 0;
  cin >> n;
  printSeries(n);
}