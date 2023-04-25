#include<iostream>
class A{
    int a;
    public:
    void avalue()
    {
        std::cout<<"enter the value of a";
        std::cin>>a;
    }
    friend class mul;
};
class B
{
int b;
public:
void bvalue()
{
    std::cout<<"enter the value of b";
    std::cin>>b;
}
friend class mul;
};
class mul
{
int prod;
public:
void product(A &x,B &b)
{
    prod=x.a*b.b;
    std::cout<<prod;
}
};
int main()
{
    A a;
    a.avalue();
    B b;
    b.bvalue();
    mul z;
    z.product(a,b);
}