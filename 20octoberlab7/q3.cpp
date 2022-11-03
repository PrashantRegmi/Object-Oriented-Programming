// WAP to demonstrate hybrid inheritance.

#include <iostream>
using namespace std;

class test
{
    public:
        int a;
};

class test1 : virtual public test
{
    public:
        int b;
};

class test2 : virtual public test
{
    public:
        int c;
};

class test3 :public test2, public test1
{
    public:
        int total;
};

int main()
{
    test3 obj;
    obj.a = 20;
    obj.b = 60;
    obj.c = 70;
    obj.total = obj.a + obj.b + obj.c;
    cout << "Total = " << obj.total << endl;
    return 0;
}
