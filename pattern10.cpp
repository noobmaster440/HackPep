#include <iostream>
using namespace std;

void print(int n)
{
  int nst = 1, nsp = 2 * n - 3;
  int value = 1;
  for (int r = 0; r < n - 1; r++)
  {
    value = 1;
    for (int cst = 1; cst <= nst; cst++)
    {
      cout << value;
      value++;
    }
    for (int csp = 1; csp <= nsp; csp++)
    {
      cout << " ";
    }
    value--;
    for (int cst = 1; cst <= nst; cst++)
    {
      cout << value;
      value--;
    }
    nsp -= 2;
    nst++;
    cout << endl;
  }
  value = 1;
  for (int i = 0; i < 2 * n - 1; i++)
  {
    if (i < n - 1)
    {
      cout << value;
      value++;
    }
    else
    {
      cout << value;
      value--;
    }
  }
}

int main(int args, char **argn)
{
  int n = 0;
  cin >> n;
  print(n);
}