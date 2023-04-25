#include<iostream>
class A{
    public:
    int a;
    public:
    void aadd()
    
    {
       std::cout<<"enter the value of A";
       std::cin>>a;
    }
};
class B{
    public:
    int b;
    public:
    void badd()
    {
        std::cout<<"enter the value of b";
        std::cin>>b;
    }
};
class sum:public A,public B{
    public:
int sum;
void summ(A &x,B &y)
{
sum=x.a+y.b;
std::cout<<sum;
}
};
int main()
{
    A a;
    a.aadd();
    B b;
    b.badd();
     sum z;
    z.summ(a,b);
}