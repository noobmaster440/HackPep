#include <iostream>
using namespace std;

void print(int n)
{
  int nst = 1;
  int prev = 0, curr = 1;
  int next = prev + curr;
  for (int i = 0; i < n; i++)
  {
    for (int cst = 0; cst < nst; cst++)
    {
      cout << prev << " ";
      prev = curr;
      curr = next;
      next = prev + curr;
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