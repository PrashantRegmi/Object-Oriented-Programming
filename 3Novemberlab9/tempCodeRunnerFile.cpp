// Using switch case statement perform unary operator overloading and binary operator overloading
#include <iostream>
using namespace std;
class test{
    int a,b,c;
    public:
    void read_data();
    void display(){
        cout<<"The values are a="<<a<<" b="<<b<<" c="<<c;
    }
    void operator -(){
        a=-a;
        b=-b;
        c=-c;
    }
    test operator +(test obj1){
        test ans;
        ans.a=a+obj1.a;
        ans.b=b+obj1.b;
        ans.c=c+obj1.c;
        return ans;
    }
};
void test:: read_data(){
    cout<<"Enter any 3 values :";
    cin>>a>>b>>c;
}
int main(){
    test obj,obj1,obj2;
    int a=0;
    while(a!=3){
    cout<<"\nInput\n1.Unary overloading\n2.binary operation\n3.exit\n";
    cin>>a;
    switch (a)
    {
    case 1:
        obj.read_data();
        -obj;
        obj.display();
        break;
    
    case 2:
        cout<<"For binary overloading: \n";
        obj.read_data();
        obj1.read_data();
        obj2=obj+obj1;
        obj2.display();
        break;
    
    case 3:
        return 0;
        break;

    }
    }
}