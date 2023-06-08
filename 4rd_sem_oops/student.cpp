#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;
    int id;

public:
    void st()
    {
        cout << "Enter name";
        cin >> name;
        cout << "Enter id";
        cin >> id;
        
    }
    void disp()
    {
        cout << "Name is=" << name <<endl<< "id is=" << id<<endl;
    }
};
int main()
{

    student a[3];
    for (int i = 0; i < 3; i++)
        a[i].st();

    for (int i = 0; i < 3; i++)
        a[i].disp();

    return 0;
}
