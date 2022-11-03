// Write a program to convert class to class type.
#include <iostream>
using namespace std;

class test1
{
	public:
    int a;
		test1()
		{
			cout<<"\n Object Created";
		}
        test1(int n)
		{
		    a=n;
		}
		void display()
		{
			cout<<a<<endl;
}
};
class test2
{
	int b;
	public:
	
	void operator=(test1 t)
	{
		b=t.a;
	}
	void display()
	{
		cout<<b<<endl;
	}
};
int main()
{
	
	test1 t1(8);
	test2 t2;
    t2=t1;
	t1.display();
	t2.display();
}
