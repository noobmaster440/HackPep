#include <iostream>
using namespace std;

void print(int n)
{
  int nst = n;
  for (int i = 1; i <= n; i++)
  {
    for (int cst = 1; cst <= nst; cst++)
    {
      if (cst == i || (n - cst + 1) == i)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}

int main(int args, char **argn)
{
  int n = 0;
  // cin >> n;
  print(7);
}