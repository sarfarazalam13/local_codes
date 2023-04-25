#include<iostream>
using namespace std;

class complex{
    int r, i;
    public:
    void getval(int x,int y)
    {
        r = x;
        i = y;
    }
    complex operator+(complex u)
    {
        complex temp;
        temp.i = i + u.i;
        temp.r = r + u.r;
        return temp;
    }
    void show()
    {
        cout << r << " + " << i << "i";
    }
};
int main()
{
    complex a, b, c;
    a.getval(11, 12);
    b.getval(11, 12);
    c = a + b;
    c.show();
}