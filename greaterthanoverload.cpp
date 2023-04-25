#include<iostream>
using namespace std;
class student{
    int a;
    public:
    void getdata(int p)
    {
        a = p;
    }
    int operator>(student s)
    {
        if(a>s.a)
            return 1;
        else if(a<s.a)  //no need of else if only else condition will work just for testing
            return 0;
    }
    void show()
    {
        cout << "higher =" << a;
    }
};
int main()
{
student s1, s2;
s1.getdata(85);
s2.getdata(90);
if(s1>s2)
    s1.show();
    else
        s2.show();
}
