// Write a program to convert basic to class type.
#include <iostream>
using namespace std;
class test{
    int a;
    public:
    test(){};
    test(int x){
        a=x;
    }
    void display(){
        cout<<"Converted from basic to class type a="<<a;
    }
};
int main(){
    test t1;
    int num=7;
    t1=7;
    t1.display();
}