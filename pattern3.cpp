#include <iostream>
using namespace std;

void print(int n)
{
  int nst = (n / 2) + 1, nsp = 1;
  for (int i = 0; i < n; i++)
  {
    for (int cst = 0; cst < nst; cst++)
    {
      cout << "*";
    }

    for (int csp = 0; csp < nsp; csp++)
    {
      cout << " ";
    }

    for (int cst = 0; cst < nst; cst++)
    {
      cout << "*";
    }

    if (i < n / 2)
    {
      nsp += 2;
      nst--;
    }
    else
    {
      nsp -= 2;
      nst++;
    }
    cout << endl;
  }
}

int main(int args, char **argn)
{
  int n = 0;
  cin >> n;
  print(n);
}