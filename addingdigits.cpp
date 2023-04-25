#include<iostream>
using namespace std;
int main()
{
  int x,sumdig=0,r=0;
  cout<<"enter a number";
  cin>>x;
  while(x>0)
  {
  r=x%10;
  x=x/10;
  sumdig+=r;
}
  cout<<"sum of digits = "<<sumdig;
}