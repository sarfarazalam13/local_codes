#include<iostream>
using namespace std;
class A{
    char firstname[20];
    public:
    friend void print();
    void getfname()
    {
        cout<<"Enter first name";
        cin>>firstname;
    }
    friend class C;
};
class B{
    char lastname[20];
    public:
    friend void print();
    void getlname()
    {
        cout<<"enter last name";
        cin>>lastname;
    }
    friend class C;
};

class C{
    public:

    void show(A &x,B &y)
    {
    cout<<x.firstname<<" "<<y.lastname;
    }
};
int main()
{
    A a;
    a.getfname();
    B b;
    b.getlname();
    C c;
    c.show(a,b);

    return 0;
}