#include <iostream>
using namespace std;

float power(float a, float n)
{
    float sum = 1;
    while (n > 0)
    {
        sum = sum * a;
        n--;
    }
    return sum;
}

float factorial(float n)
{
    float sum = 1;
    for (float i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    return sum;
}

int main()
{
    float n;
    float a, sum;
    cout<<"The given expression is : ";
     cout<<"1+a^2/2!+.......a^n/n! "<<endl;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of a : ";
    cin >> a;
    sum = 0;
    for (float i = 2; i <= n; i++)
    {
        sum = sum + power(a, i) / factorial(i);
    }
    sum = sum + 1;
    cout << "Sum of expressions is : " << sum;
    return 0;
}