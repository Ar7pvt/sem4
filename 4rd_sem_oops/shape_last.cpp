#include<iostream>
#include<math.h>
using namespace std;

class shape
{
    public:
    float x,y;
    void getdata(float a,float b)
    {
        x=a;
        y=b;
        cout<<"The value of x = "<<x<<" y= "<<y<<endl;
    }
    virtual void displayarea()
    {
        cout<<"virtual display area is called "<<endl;
    }

};

class Triangle:public shape
{
    int area;
    public:
    void displayarea()
    {
        area=(0.5*x*y);
        cout<<"Area of triangle "<<area<<endl;
    }

};

class Rectangle:public shape
{
    public:
    void displayarea()
    {
        cout<<"The area of rectangle "<<(x*y)<<endl;
    }
};

int main()
{
    
    Triangle tri;
    Rectangle rec;


    tri.getdata(2.1,3.5);
    tri.displayarea();

    
    rec.getdata(4.1,3.5);
    rec.displayarea();
}