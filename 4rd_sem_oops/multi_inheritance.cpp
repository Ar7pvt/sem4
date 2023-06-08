#include <iostream>
using namespace std;
class X
{
public:
    int roll;
    void get()
    {
        cout << "Enter roll number";
        cin >> roll;
    }
};

class Y : public X
{
protected:
    int marks, mark;

public:
    void get_marks()
    {
        cout << "Enter marks of two subject :" << endl;
        cin >> marks >> mark;
    }
    void display()
    {
        cout << "Roll:" << roll << endl;
        cout << "marks of first subject:" << marks << endl;
        cout << "marks of second subject:" << mark << endl;
    }
};

class Z : public Y
{
    int total;

public:
    void display_result()
    {
        total = marks + mark;
        cout << "The total marks is :" << total;
    }
};

int main()
{
    Z z;
    X x;
    x.get();
    z.get_marks();
    z.display();
    z.display_result();
    return 0;
}
