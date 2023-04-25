#include<iostream>
using namespace std;
class complex{
    int i, r;
    public:
        complex(){}
        complex(float a) { i = r = a; }
        complex(float a, float b)
        {
            i = a;
            r = b;
        }
        friend complex sum(complex, complex);
        friend void show(complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.r = c1.r + c2.r;
    c3.i = c1.i + c2.i;
    return (c3);
}
void show(complex c)
{
    cout << c.r << " + " << c.i<<"\n";
}
int main()
{
    complex A(11.2, 22.1),C;
    complex B(1.5);
    C= sum(A, B);
    show(A);
    show(B);
    show(C);
}