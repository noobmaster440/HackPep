
#include <iostream>
using namespace std;

void print(int n)
{
  int nst = 1, nsp = n / 2;
  for (int i = 0; i < n; i++)
  {
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
      nst += 2;
      nsp--;
    }
    else
    {
      nst -= 2;
      nsp++;
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