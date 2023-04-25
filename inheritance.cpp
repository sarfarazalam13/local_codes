#include<iostream>
using namespace std;
class student{
private:
int numberfailed;
public:
void printInfo();  
string name;
int roll;
float mark1,mark2;
private:
int numberfailed=0;


};

class B:public student
{
  public:
  int total; 
void passInfo();
void printInfo();  
};

void B::passInfo()
{
cin>>name;
cin>>roll;
cin>>mark1>>mark2;
}
void student::printInfo()
{
    cout<<"Name "<<name<<"\n"<<"Roll "<<roll<<"\n"<<"Mark 1 & 2"<<mark1<<"\n"<<mark2<<"Num of subjects faild"<<numberfailed;
}
int main()
{
    B S1;
    S1.passInfo();
    S1.printInfo();
}