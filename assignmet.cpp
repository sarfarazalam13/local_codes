#include<iostream>
using namespace std;
class shape{
private:
    float radius;
public:
    float area();
    float perimeter();
};
float shape::area()
{
    cout<<"enter the radius";
    cin>>radius;
    return 3.14*radius*radius;
}
float shape::perimeter()
{
return 2*3.14*radius;
}

int main()
{
    shape c;
    cout<<"area of circle= "<<c.area()<<endl;
    cout<<"perimeter of circle= "<<c.perimeter();
}