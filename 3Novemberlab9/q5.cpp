// WAP using exception handling to test division by zero.
#include <iostream>
using namespace std;

int main(){
    float a, b;
    float c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try{
        if(b == 0){
            throw b;
        }
        else{
            c = a / b;
            cout << "a / b = " << c << endl;
        }
    }
    catch(float x){
        cout << "Division by 0:Error" << endl;
    }
    return 0;
}