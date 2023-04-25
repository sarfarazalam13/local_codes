#include<iostream>
using namespace std;
class complex {
    int a,b;
    public:
    void getval(int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {cout<<a<<"+"<<b<<"i";}
complex operator +(complex c)
{
    complex temp;
    temp.a=a+ c.a;
    temp.b=b+ c.b;
    return temp;
}
};
int main()
{
 complex c1,c2,c3;
 c1.getval(5,10);
 c2.getval(3,4);
 c3=c1+(c2);
 c3.show();
}