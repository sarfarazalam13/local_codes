#include<iostream>
using namespace std;
int main()
{
    float num;
    cout<<"enter the end of series";
    cin>>num;
    for (int i = 0; i <=num; i++)
    {
        if(i%2==0)
        cout<<i<<"\n";
    }
}