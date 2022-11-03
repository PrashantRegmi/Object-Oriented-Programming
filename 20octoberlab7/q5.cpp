// WAP to demonstrate binary operator (/) overloading.
#include <iostream>
using namespace std;

class test
{
private:
    int a, b,n;
public:
    void getdata();
    void operator/(test);
    void display();
};

void test::getdata()
{
    cout << "Enter two numbers: ";
    cin >> a >> b;
}
void test::operator/(test t)
{
    a = a / t.a;
    b = b / t.b;
}
void test::display()
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
int main()
{
    test t,t1;
    t.getdata();
    t1.getdata();
    t / t1;
    t.display();
    return 0;
}