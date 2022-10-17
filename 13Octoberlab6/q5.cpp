// WAP to demonstrate a copy constructor

#include <iostream>
using namespace std;
class test2{
    int p;
    int q;
    public:
        test2(){
            cout<<"Default constructor executed ";
        }
        test2(int m,int n){
            p=m;
            q=n;
            cout<<"\nParameterized const executed\nValues are: ";
            cout<<p<<" "<<q<<"\n";
        }
        test2(test2 &obj){
            p=obj.p;
            q=obj.q;
            cout<<"The values are "<<p<<" "<<q;
        }
        ~test2(){
            cout<<"\nDestroyed";
        }
};
int main(){
    test2 obj;
    test2 obj1(9,5);
    test2 obj3(obj1);
    cout<<"\n";
    return 0;
}