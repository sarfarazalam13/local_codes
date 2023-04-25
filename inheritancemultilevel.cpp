#include<iostream>
using namespace std;
class A{
    public:
    void printt()
    {
    cout<<"this is base class \n";
}
};
class B:public A{
    public:
    void printtt()
    {
        cout<<"this is class b inherited class\n";
    }
};
class c:public B{
    public:
void print()
{
    cout<<"class C here\n";
}
};

int main()
{
    c obj;
    obj.print();
    obj.printt();
    obj.printtt();
}