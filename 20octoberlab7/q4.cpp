// WAP to demonstrate unary operator (-) overloading.
#include <iostream>
using namespace std;

class test{
    int a,b;
    public:
    void getdata(){
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }
    void operator -(){
        a=-a;
        b=-b;
    }
    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main(){
    test t;
    t.getdata();
    -t;
    t.display();
    return 0;
}
