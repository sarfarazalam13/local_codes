#include<iostream>
using namespace std;
class employee
{
    long empid;
    string name;
    int age;
    public:
    float salary;
    public:
    void passInfo();
    void printInfo();
    friend void MaxSalary();
};
void employee::passInfo()
{   cout<<"enter empid number";
    cin>>empid;
    cout<<"enter name ";
    cin>>name;
    cout<<"enter salary ";
    cin>>salary;
    cout<<"enter age ";
    cin>>age;
}
void employee::printInfo()
{cout<<"\n"<<empid<<"\n"<<name<<"\n"<<salary<<"\n"<<age;}
void MaxSalary(employee a[],int z)
{
long int max;
for (int i =0; i<z; i++)
    {if(a[i].salary>a[i+1].salary)
       max=a[i].salary;
    }
    cout<<max<<" max salary"<<endl;
}
int main()
{
    cout<<"enter number of employees";
    int x,i;
    cin>>x;
    employee e[x];
    for(i=0;i<x;i++)
    {cout<<"for employee number"<<i+1<<endl;
     e[i].passInfo();
    }
for(i=0;i<x;i++)
{
e[i].printInfo();
cout<<"\t";
}
MaxSalary(e,x);
return 0;
}