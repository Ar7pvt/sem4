#include <iostream>
using namespace std;
class swap1
{
public:
  void swapping(int &c, int &d)
  {
    int t;
    t = c;
    c = d;
    d = t;
  }
};
int main()
{
  swap1 ob;
  int a, b;
  cout << "Enter 2 numbers : ";
  cin >> a >> b;
  ob.swapping(a, b);
  cout << a << endl
       << b;
  return 0;
}
