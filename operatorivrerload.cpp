#include<iostream>
using namespace std;
class complex {
    int a, b;

public:
void get(int x, int y)
{
    a = x;
    b = y;
}
complex operator+(complex x)
{
    complex temp;
    temp.a = a + x.a;
    temp.b = b + x.b;
    return temp;
}

void display()
{
    cout << a << " + " << b << "i";
}
};
int main()
{
    complex a, b, c;
    a.get(11, 11);
    b.get(11, 10);
    c = a + b;
    c.display();
}