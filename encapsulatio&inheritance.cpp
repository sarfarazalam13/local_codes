#include<iostream>
using namespace std;
class data{
public:
char name;
int age;
protected:
float salary;
private:
string adress;
public:
void printinfo()
{
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<salary<<endl;
    cout<<adress;
}
};
class b:public data{

};
int main()
{
        b a;
        a.printinfo();
    
}