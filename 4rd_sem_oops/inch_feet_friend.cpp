#include<iostream>
using namespace std;

class dm;
class df
{
 public:
   float feet;
   float inch;
  
   void getdata(float a,float b)
   {
      feet=a;
      inch=b;
   }
   friend float sum(dm ,df);
   
};

class dm
{
public:
   float cm;
   float m;
   
   void setval(float a,float b)
   {
      m=a;
      cm=b;
   }
   friend float sum(dm ,df);
   
};

float sum(df x,dm y)
{
   float p=x.feet*12+x.inch;
   float q=y.m*100+y.cm;
   return p*2.54+q;
}

int main()
{
   df t1;
   dm t2;
   
   t1.getdata(5,10);
   t2.setval(5,10);
   
   float mes=sum(t1,t2);
   
   
   
   cout<<"The output is "<<mes<<" cm";
}
