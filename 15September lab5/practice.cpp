// swapping with the help of two different classes
#include <iostream>
using namespace std;

class A
{
    int a;
    public:
    void get_data(int x)
    {
        a=x;
    }
    friend void swap(A,B);
};

class B
{
    int b;
    public:
    void get_data(int x)
    {
        b=x;
    }
    friend void swap(A,B);
};

void swap(A x,B y)
{
    int temp;
    temp=x.a;
    x.a=y.b;
    y.b=temp;
    cout<<"\nAfter swapping";
    cout<<"\nA "<<x.a;
    cout<<"\nB "<<y.b;
}

int main()
{
    A a;
    B b;
    a.get_data(5);
    b.get_data(10);
    swap(a,b);
    return 0;
}
