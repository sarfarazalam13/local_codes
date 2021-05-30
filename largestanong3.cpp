#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    cout<<a<<"is greatest";
    else if(c>a&&c>b)
    cout<<c<<"is greatest";
    else if(b>a&&b>c)
    cout<<c<<"is greatest";
    return 0;
}