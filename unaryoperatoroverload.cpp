#include<iostream>
using namespace std;
class unaryover{
    int a, b, c;
    public:
    void getdata(int s, int e, int t)
    {
        a = s;
        b = e;
        c = t;
    }
    unaryover operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
    void show()
    {
        cout <<"a= "<< a<<" b= " << b<<" c= " << c;
    }
};
int main()
{
    unaryover Y;
    Y.getdata(11, -11, 10);
    -Y;
    Y.show();
}