#include<iostream>
using namespace std;
class complex{
    int r, i;
   public:
       void getnum(int a, int b)
       {
           r = a;
           i = b;
       }
       friend complex sumcomp(complex o1, complex o2);
       void show()
       {
           cout << "your number is " << r << "+" << i << " i";
       }
       };
complex sumcomp(complex o1,complex o2)
{
    complex o3;
    o3.getnum(o1.r + o2.r,o1.i + o2.i);
    return o3;
}

int main()
{
    complex a, b,sum;
    b.getnum(11, 12);
    a.getnum(11, 12);
    sum = sumcomp(a, b);
    sum.show();
}