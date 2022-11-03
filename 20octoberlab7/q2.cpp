// WAP to demonstrate multilevel inheritance
#include <iostream>
using namespace std;

class test
{
    public:
        int a;
};

class test1 : public test
{
    public:
        int b;
};

class test2 : public test1
{
    public:
        int total;
};

int main()
{
    test2 obj;
    obj.a = 10;
    obj.b = 20;
    cout << "a = " << obj.a << endl;
    cout << "b = " << obj.b << endl;
    obj.total = obj.a + obj.b;
    cout << "Total = " << obj.total << endl;
    return 0;
}
