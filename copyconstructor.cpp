#include<iostream>
using namespace std;
class codec{
    int id;
    public:
    codec(){}
    codec(int a)
    {
        id = a;
    }
    codec(codec &x)
    {
        id = x.id;
    }
    void display()
    {
        cout << id;
    }
};
int main()
{
    codec A(100);
    codec B(A);
    codec C = A;
    codec D;
    D = A;

    cout << "\n id of A :";
    A.display();
    
    cout << "\n id of B :";
    B.display();
    
    cout << "\n id of C :";
    C.display();
    cout << "\n id of D:";
    D.display();
}