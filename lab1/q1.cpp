#include <iostream>

int main()
{

    int a;
    std::cout<<"enter a number : ";
    std::cin>>a;
    int b=a%2;
    if(b==0){
        std::cout<<a<<" is even."<<std::endl;
    }
    else{
        std::cout<<a<<" is odd."<<std::endl;
    }
    return 0;
}