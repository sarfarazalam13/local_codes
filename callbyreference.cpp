#include<iostream>
using namespace std;
void swap(int* s,int* e)
{
int temp=*s;
*s=*e;
*e=temp;
}
int main()
{
    int x,y , after;
    cin>>x;
    cin>>y;
    cout<<"bfore swap \n"<<"x="<<x<<"y= "<<y;
    swap(&x,&y);
    cout<<"after swap\n";
    cout<<"after swap "<<"x="<<x<<"y= "<<y;
}