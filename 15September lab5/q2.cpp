
// Pointer to class
#include <iostream>

using namespace std;

class pc
{
    int roll;
    char name[25];
    float marks;
    public:
    void read_data()
    {  
    cout<<"Enter rollno: ";
    cin>>roll;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter marks: ";
    cin>>marks;
    }
    void display()
    {
        cout<<"\n"<<roll<<name<<marks;
    }  
};

int main()
{
    
    pc obj;
    pc *ptr;
    ptr=&obj;
    ptr->read_data();
    ptr->display();
    return 0;
}