#include<iostream>
using namespace std;
int main( )
{
    int num,diff,sum=0,i=0;
    cout<<"enter the end of series";
    cin>>num;
    cout<<"enter a common difference";
    cin>>diff;
    while(i<=num) 
    {
       cout<<i<<endl;
       sum=sum+i;
       i=i+diff;
    }
    cout<<sum<<"is the sum with CD"<<diff;
}