// WAP in C++ to read roll,name and mark of a student

#include <iostream>
using namespace std;

int main()
{
    int roll;
    float mark;
    char name[20];
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter mark: ";
    cin >> mark;
    cout << "The roll number is: " << roll << endl;
    cout << "The Name is: " << name << endl;
    cout << "The marks is: " << mark << endl;
    return 0;
}
