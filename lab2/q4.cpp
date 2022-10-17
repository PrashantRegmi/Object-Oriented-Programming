#include <iostream>
using namespace std;

struct student
{
    char name[20];
    int roll;
    int age;
    float marks;
};

void display(student s)
{

    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Age: " << s.age << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    student s;
    cout << "Enter the name of student: ";
    cin >> s.name;
    cout << "Enter the roll number: ";
    cin >> s.roll;
    cout << "Enter the age: ";
    cin >> s.age;
    cout << "Enter the marks: ";
    cin >> s.marks;
     display(s);

    return 0;
}
