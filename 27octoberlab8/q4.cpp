// WAP to demonstrate use of pure virtual function and abstract base class.

#include<iostream>
#include<conio.h>
using namespace std;

class Test{
    public:
    int a,b; 
    virtual void diff()=0;
    virtual void display()=0;
};

class Result:public Test{
    public:
    int c;
    void diff(){
        c=a-b;
    }
    void display(){
        cout<<"Difference is: "<<c<<endl;
    }
};

int main(){
    Result r;
    r.a=17;
    r.b=3;
    r.diff();
    r.display();
    return 0;
}
