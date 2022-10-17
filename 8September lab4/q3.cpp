// WAP in C++ using inline to add and multiply two numbers

#include <iostream>
using namespace std;

class test
{
    int a, b, s, p;

public:
    inline void get()
    {
        cout << "\nEnter two numbers\n";
        cin >> a;
        cin >> b;
    }
    inline void add()
    {
        s = a + b;
    }

    inline void mul()
    {
        p = a * b;
    }

    inline void display()
    {
        cout << "\nSum is: " << s << endl;
        cout << "Product is: " << p << endl;
    }
};

int main()
{
    test t;
    t.get();
    t.add();
    t.mul();
    t.display();
    return 0;
}
