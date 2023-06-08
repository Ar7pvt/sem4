#include <iostream>
using namespace std;
class Votes
{

public:
  int count[7];

  void votes(int g)
  {
    count[g]++;
  }
};
int main()
{
  Votes count;
  for (int i = 0; i < 7; i++)
  {
    count.count[i] = 0;
  }
  int choice;
start:
  cout<<"Enter 1 for 1st candidate "<<endl;
  cout<<"Enter 2 for 2st candidate "<<endl;
  cout<<"Enter 3 for 3st candidate "<<endl;
  cout<<"Enter 4 for 4st candidate "<<endl;
  cout<<"Enter 5 for 5st candidate "<<endl;
  cout<<"Enter 6 for non "<<endl;
  cout<<"Enter 0 to see result "<<endl;
  cout << "Enter Choice" << endl;
  cin >> choice;
  switch (choice)
  {
  case 1:
    count.votes(1);
    break;
  case 2:
    count.votes(2);
    break;
  case 3:
    count.votes(3);
    break;
  case 4:
    count.votes(4);
    break;
  case 5:
    count.votes(5);
    break;
  case 0:
    cout << "The votes given are:" << endl
         << "Candidate1:" << count.count[1] << endl
         << "Candidate2:" << count.count[2] << endl
         << "Candidate3:" << count.count[3] << endl
         << "Candidate4:" << count.count[4] << endl
         << "Candidate5:" << count.count[5] << endl
         << "Spoilt Votes:" << count.count[6] << endl;
    return 0;
  default:
    count.votes(6);
    break;
  }

  goto start;
return 0;
}
