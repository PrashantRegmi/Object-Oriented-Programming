// WAP to find factorial of a n natural number using default constructor

#include <iostream>
using namespace std;
class test{
        int n;
        int f;
    public:
        test(){
            f=1;
        }
        void read_data(){
            cout<<"\n Enter a number :";
            cin>>n;
        }
        void display(){
            cout<<"The factorial of the given number is "<<f;
        }

        void calc();
};
void test:: calc(){
    for(int i=1;i<=n;i++){
        f=f*i;
    }
}
int main(){
    test obj;
    obj.read_data();
    obj.calc();
    obj.display();
    return 0;
}
