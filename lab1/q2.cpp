#include <iostream>

int main()
{

    int a;
    std::cout<<"enter a number : ";
    std::cin>>a;

    if(a<0){
        std::cout<<a<<" is negetive."<<std::endl;
    }
    else{
        std::cout<<a<<" is positive."<<std::endl;
    }
    return 0;
}