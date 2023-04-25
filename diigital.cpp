#include<iostream>
using namespace std;
void increaseall(int r,int g,int b,int x)
{
 cout<<"red "<<r-x;
 cout<<"blue "<<g-x;
 cout<<"green"<<b-x;
}
void increase(int r,int g,int b,int x,int y,int z)
{

 cout<<"red "<<r+x;
 cout<<"blue "<<g+y;
 cout<<"green "<<b+z;
}
int main()
{
int r,g,b;
cout<<"enter values for initial colours";
cin>>r>>g>>b;
cout<<"enter value to increse brightness ";
int x;
cin>>x;
increaseall(r,g,b,x);
cout<<"\nenter values to increase r,g,b differently";
int t,e,s;
cin>>t>>e>>s;
increase(r,g,b,t,e,s);
}