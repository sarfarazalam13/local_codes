#include<iostream>
class A
{
    public:
    void print()
    {
    std::cout<<"this is A class ";
    }
};
class B:public A
{
public:
void put()
{
std::cout<<"this is second class";
}
};
class C:public A{
public:
    void printb()
    {
        std::cout<<"this is class C inheriting class A";
    }
};
class D:public C{ //adding public B wont allow a.print because both class c amd B have it
};
int main()
{
    D a;
    a.print();
    a.printb();

}