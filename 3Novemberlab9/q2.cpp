// Write a program to convert class to basic type.

#include <iostream>
using namespace std;
class test{
    int a;
    public:
    test(){
        a=17;
    }
    operator int(){
        int num;
        num=a;
        return num;
    }

};
int main(){
    int a;
    test t1;
    a=t1;
    cout<<"conversion/Type casted from class to basic type a="<<a;
}