// WAP to find sum of n natural numbers using parameterized constructor
#include <iostream>
using namespace std;
class test1{
        int n;
        int s;
    public:
        test1();
        test1(int k){
            s=k;
        }
        void read_data(){
            cout<<"Enter the last number:";
            cin>>n;
        }
        void display(){
            cout<<"The sum is "<<s;
        }
        void calc();
};
void test1:: calc(){
    for(int i=1;i<=n;i++){
        s+=i;
    }
}
int main(){
    int p;
    cout<<"Enter the default number:";
    cin>>p;
    test1 obj(p);
    obj.read_data();
    obj.calc();
    obj.display();
    return 0;
}