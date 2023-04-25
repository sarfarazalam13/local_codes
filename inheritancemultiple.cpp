#include<iostream>
using namespace std;

class A{
    public:
    void print()
    {
        cout<<"here in class A \n";
    }
};
class B{
    public:
    void display()
    {
        cout<<"here in class B\b";
    }
};
class C:public A,public B{
};
int main()
{
    C o;
    o.display();
    o.print();
}