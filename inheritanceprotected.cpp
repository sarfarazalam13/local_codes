#include<iostream>
class A
{
    protected:
    void a()
    {
        std::cout<<"This is the content of protected class a";
    }
};
class B:protected A
{
    public:
    void a();
    void b()
    {
        std::cout<<"this is b\n";
    }
};
int main()
{
B v;
v.b();
}