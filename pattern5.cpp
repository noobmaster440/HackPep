#include <iostream>
using namespace std;

void print(int n)
{
  int nst = 1;
  int value = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int cst = 0; cst < nst; cst++)
    {
      cout << value;
      value++;
    }
    nst++;
    cout << endl;
  }
}

int main(int args, char **argn)
{
  int n = 0;
  cin >> n;
  print(n);
}