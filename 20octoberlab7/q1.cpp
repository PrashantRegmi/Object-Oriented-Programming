// Write a program to demonstrate multiple inheritance.

#include <iostream>
using namespace std;

class test1
{
public:
  int a;
};

class test2
{
public:
  int b;
};

class test : public test1, public test2
{
public:
  int total;
};

int main()
{
  test obj;
  obj.a = 10;
  obj.b = 20;
  obj.total = obj.a + obj.b;
  cout << "Total = " << obj.total << endl;
  return 0;
}
