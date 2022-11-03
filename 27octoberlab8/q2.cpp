/* Create a class which stores employee name,id and salary. Derive two classes from ‘Employee’ class: ‘Regular’
 and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. The ‘Part-Time’ class stores the 
 number of hours and pay per hour. Calculate the salary of a regular employee and a part-time employee, using virtual
function */

#include <iostream>
#include <conio.h>
using namespace std;

class Employee
{
protected:
    char name[20];
    int id;
    float salary;

public:
    void get_data()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
    }
    virtual void display() = 0;
};

class Regular : public Employee
{
    float DA, HRA, basic;

public:
    void get_data()
    {
        Employee::get_data();
        cout << "Enter DA: ";
        cin >> DA;
        cout << "Enter HRA: ";
        cin >> HRA;
        cout << "Enter basic salary: ";
        cin >> basic;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary + DA + HRA + basic << endl;
    }
};

class PartTime : public Employee
{
    int hours;
    float pay;

public:
    void get_data()
    {
        Employee::get_data();
        cout << "Enter number of hours: ";
        cin >> hours;
        cout << "Enter pay per hour: ";
        cin >> pay;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary + hours * pay << endl;
    }
};

int main()
{
    Regular r;
    PartTime p;
    r.get_data();
    p.get_data();
    r.display();
    p.display();
    return 0;
}
