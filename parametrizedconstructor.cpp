#include<iostream>
using namespace std;
class complex{
    int r, i;
    public:
    complex(int a,int b)
    {
        r = a;
        i = b;
    }
    void display()
    {
        cout << r << "," << i;
    }
};
int main()
{
    complex p(11, 120), q(13, 02);
    cout << "P= ";
    p.display();
    cout <<"\n"<< "Q= ";
    q.display();
}