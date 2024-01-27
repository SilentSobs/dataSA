#include <iostream>
using namespace std;


int Sum(int a, int b)
{

  if (a == 0)
    return b;

  else if (b == 0)
    return a;


  else
    return a + b;
}

int main()
{

  int x, y, Result;


  cout << "\n2 Enter A number";
  cin >> x >> y;

 
  Result = Sum(x, y);
  cout << "\Addition  = " << Result;

  return 0;
}
