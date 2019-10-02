#include <iostream>
using namespace std;

void print(int n)
{
  int nst = 1;
  for (int r = 0; r < n; r++)
  {
    int value = 1;
    for (int cst = 0; cst < nst; cst++)
    {
      cout << value << " ";
      value = ((r - cst) * value) / (cst + 1);
    }
    nst++;
    cout << endl;
  }
}

int main(int args, char **argn)
{
  int n = 0;
  // cin >> n;
  print(5);
}