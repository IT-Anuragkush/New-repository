#include <iostream>
using namespace std;

class addition // class
{
public:
  int num1;
  int num2;
  int sum;

  void display()
  {
    sum = num1 + num2;
    cout << "addtion is : " << sum << endl;
  }
};
int main()
{
  addition s1, s2; // object
  s1.num1 = 20;
  s1.num2 = 30;

  s1.display();
}