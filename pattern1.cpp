#include <iostream>
using namespace std;

void print(int n)
{
  int nst = 1;
  for (int i = 0; i < n; i++)
  {
    for (int cst = 0; cst < nst; cst++)
    {
      cout << "* ";
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