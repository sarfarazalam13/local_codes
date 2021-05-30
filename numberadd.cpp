#include<iostream>
using namespace std;
class summ{
public:
int a,b,sum;
void summm()
{
    sum=a+b;
    cout<<sum;
}
};
int main()
{
summ s;
cout<<"enter 1st number ";
cin>>s.a;
cout<<"enter 2nd number";
cin>>s.b;
cout<<"sum is";
s.summm();
    
}