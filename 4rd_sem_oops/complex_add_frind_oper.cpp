#include <iostream>
using namespace std;
class complex
{
  float r, i;

public:
  void setval()
  {
    cout << "Enter real pare and imaginery part";
    cin >> r >> i;
  }
  friend complex operator+(complex c1, complex c2);
  void display()
  {
    cout << r << "+" << i << "i" << endl;
  }
};
complex operator+(complex c1, complex c2)
{
  complex c;
  c.r = c1.r + c2.r;
  c.i = c1.i + c2.i;
  return (c);
}

int main()
{
  complex c1, c2, sum;
  c1.setval();
  c2.setval();
  sum = c1 + c2;

  c1.display();
  c2.display();
  cout << "\nAddition of complex Number:\n";

  sum.display();
  return 0;
}
