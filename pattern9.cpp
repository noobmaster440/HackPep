
#include <iostream>
using namespace std;

void print(int n)
{
  int nst = 1, nsp = n / 2;
  for (int r = 1; r <= n; r++)
  {
    int value = n / 2 + 1 - nsp;
    for (int csp = 1; csp <= nsp; csp++)
    {
      cout << "  ";
    }

    for (int cst = 1; cst <= nst; cst++)
    {
      cout << value << " ";
      if (cst > nst / 2)
      {
        value--;
      }
      else
      {
        value++;
      }
    }
    if (r <= n / 2)
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
  // cin >> n;
  print(5);
}