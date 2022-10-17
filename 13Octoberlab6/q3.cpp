// WAP to demonstrate a copy constructor 

#include <iostream>
using namespace std;
class test{
    int p;
    int q;
    public:
        test(){
            cout<<"Default Constructor Executed ";
        }
        test(int m,int n){
            p=m;
            q=n;
            cout<<"\nParameterized Constructor Executed\n The values are : ";
            cout<<p<<q;
            cout<<"\n";
        }
        ~test(){
            cout<<"Destroyed\n";
        }
};
 
 int main(){
 test obj;
 test obj1(9,5);
 }

