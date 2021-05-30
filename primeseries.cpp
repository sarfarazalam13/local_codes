#include<iostream>
using namespace std;
int main()
{
int num,count;
cout<<"enter the limit of prime no.";
cin>>num;
for (int i=1;i<=num; i++)
{
 count=0;
    for (int j=1;j<=num;j++)
    {
     if(i%j==0)
     count++;
    }
if(count==2)
cout<<i<<endl;
}
return 0 ;
}