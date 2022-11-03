/* Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area
of each shape and display it, using virtual function.*/

#include <iostream>
#include <conio.h>
using namespace std;

class shape
{
protected:
    float area;

public:
    virtual void get_area() = 0;
    virtual void display() = 0;
};

class circle : public shape
{
    float r;

public:
    void get_area()
    {
        cout << "Enter circle radius: ";
        cin >> r;
        area = 3.14 * r * r;
    }
    void display()
    {
        cout << "Circle area is : " << area << endl;
    }
};

class square : public shape
{
    float l;

public:
    void get_area()
    {
        cout << "Enter side of square: ";
        cin >> l;
        area = l * l;
    }
    void display()
    {
        cout << "Square area is: " << area << endl;
    }
};

class triangle : public shape
{
    float b, h;

public:
    void get_area()
    {
        cout << "Enter base and height of triangle: ";
        cin >> b >> h;
        area = 0.5 * b * h;
    }
    void display()
    {
        cout << "Triangle area is: " << area << endl;
    }
};

int main()
{
    shape *s;
    circle c;
    square sq;
    triangle t;
    s = &c;
    s->get_area();
    s->display();
    s = &sq;
    s->get_area();
    s->display();
    s = &t;
    s->get_area();
    s->display();
    getch();
    return 0;
}
