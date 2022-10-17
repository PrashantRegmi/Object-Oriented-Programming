// Static

#include <iostream>
using namespace std;

class book
{
    int code;
    float price;
    static int count;
    public:
    void get_book(int x, float y)
    {
        code=x;
        price=y;
        count++;
    }
    void display()
    {
        cout<<"\nCode "<<code;
        cout<<"\nPrice "<<price;
    }
    static void disp_count()
    {
        cout<<"\nThe value of count "<<count;
    }
};

int book::count=0;

int main()
{
    book bk;
    bk.get_book(213,112);
    bk.display();
    bk.disp_count();
    
    book bk1;
    bk1.get_book(141,871);
    bk1.display();
    book::disp_count();
    
    book bk2;
    bk2.get_book(200,430);
    bk2.display();
    book::disp_count();
    return 0;
}