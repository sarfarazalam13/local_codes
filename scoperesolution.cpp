#include<iostream>
using namespace std;
class area{
float length;
public:
float calcArea();
};
float area::calcArea()
{
   cout<<"enter length";
    cin>>length;
    return length*length;
}
int main()
{
    area a;
    cout<<a.calcArea();
}