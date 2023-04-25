#include<iostream>
using namespace std;
int fact(int z)
{
    if(z==1)
    return 1;
    else 
    return z*fact(z-1);//1*2
    
}
int main()
{
    int z,r;
    cin>>z;
     r=fact(z);
     cout<<r;
}