//WAP in C++ to read roll,name and 3 mark of a student

#include <iostream>
using namespace std;

int main()
{
    int roll;
    float mark1, mark2, mark3;
    char name[40];
    cout << "Enter the roll number of student: ";
    cin >> roll;
    cout << "Enter the name of student : ";
    cin >> name;
    cout << "Enter mark1: ";
    cin >> mark1;
    cout << "Enter mark2: ";
    cin >> mark2;
    cout << "Enter mark3: ";
    cin >> mark3;
    cout << "The roll number of student is: " << roll << endl;
    cout << "The Name of student is: " << name << endl;
    cout << "The mark1 is: " << mark1 << endl;
    cout << "The mark2 is: " << mark2 << endl;
    cout << "The mark3 is: " << mark3 << endl;
    return 0;
}
