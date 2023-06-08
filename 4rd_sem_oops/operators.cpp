#include <iostream>
using namespace std;

class Float
{
  float x;

public:
  void setdata(float a)
  {
    x = a;
  }
  void getdata()
  {
    cout << x << endl;
  }
  Float operator+(Float c)
  {
    Float temp;
    temp.x = x + c.x;
    return temp;
  }
  Float operator-(Float c)
  {
    Float temp;
    temp.x = x - c.x;
    return temp;
  }
  Float operator*(Float c)
  {
    Float temp;
    temp.x = x * c.x;
    return temp;
  }
  Float operator/(Float c)
  {
    Float temp;
    temp.x = x / c.x;
    return temp;
  }
};
int main()
{
  Float f1, f2, f3, f4, f5, f6;
  f1.setdata(20);
  f2.setdata(10);
  f3 = f1 + f2;
  f3.getdata();
  f4 = f1 - f2;
  f4.getdata();
  f5 = f1 * f2;
  f5.getdata();
  f6 = f1 / f2;
  f6.getdata();
}