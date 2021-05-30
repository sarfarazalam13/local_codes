#include<iostream>
using namespace std;
class student{
    long int phone;
    string address;
    float marks;
    public:
    string name;
    void passInfo();
    void displayInfo();
};
void student::  passInfo()
{
    cout<<"enter name";
    cin>>name;
    cout<<"enter phone number";
    cin>>phone;
    cout<<"enter address";
    cin>>address;
}
void student::displayInfo()
{
    cout<<name<<endl;
    cout<<phone<<endl;
    cout<<address;
}
int main()
{
student s;
s.passInfo();
s.displayInfo();
return 0;
}