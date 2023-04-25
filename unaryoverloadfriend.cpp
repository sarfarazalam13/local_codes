#include<iostream>
using namespace std;
class unary {
    int a, b, c;

public:
void getdata(int s,int e, int x)
{
    a = s;
    b = e;
    c = x;
}
friend unary operator-(unary &t);
friend void show(unary &o);
};
unary operator-(unary &s)
{
    s.a = -s.a;
    s.b = -s.b;
    s.c = -s.c;
}
void show(unary &o)
{
    cout<<"a= " <<o.a <<"b= "<< o.b<<"c= " << o.c;
}
int main()
{
    unary T;
    T.getdata(11, 12, -13);
    -T;
    show(T);
}
