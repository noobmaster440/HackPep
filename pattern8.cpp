
#include <iostream>
using namespace std;

void print(int n)
{
  int nst = 1, nsp = n - 1;
  for (int i = 1; i <= n; i++)
  {
    int value = i;
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
    nst += 2;
    nsp--;
    cout << endl;
  }
}

int main(int args, char **argn)
{
  int n = 0;
  // cin >> n;
  print(4);
}