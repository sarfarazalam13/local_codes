#include<iostream>
using namespace std;

int retur(int x)
{
   if(x<1)
   {
   return 0;
   }
   else
   cout<< x; 
   return retur(x-1);
}

int main()
{
    int x,result;
    cin>>x;
    retur(x);
   
}
