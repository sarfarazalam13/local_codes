/*sum of series a pow a*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,x=0,sum=0;
    cout<<"enter the end of series";
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        x=pow(i,i);
        sum=sum+x;
    }   
        cout<<sum<<endl;
}
