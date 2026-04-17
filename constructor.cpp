#include <iostream>
using namespace std;

class student
{
public:
  int roll;
  string name;

  student(int roll = 101, string name = "Anurag") // parameterised constructor
  {
    this->roll = roll;
    this->name = name;
  }

  
  void display()
  {
    cout << "roll is : " << this->roll << endl;
    cout << "name is : " << this->name << endl;
  }
};

int main()
{
  student s1;

  // s1.getdata();
  s1.display();
}
