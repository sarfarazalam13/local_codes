#include<iostream>
using namespace std;
class company{
    public:
string name;
int age;
float salary;

};
int main()
{
    company c1;
    cout<<"enter name  ";
    cin>>c1.name;
    cout<<"enter age ";
    cin>>c1.age;
    cout<<"enter salary ";
   cin>>c1.salary;

   cout<<c1.name<<endl<<c1.age<<endl<<c1.salary;
}