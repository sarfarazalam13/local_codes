#include<iostream>
using namespace std;
main()
{
    int i,x,c;
    cout<<"enter the first term of the series";
    cin>>i;
    cout<<"enter the nth term of the series";
    cin>>x;
    cout<<"enter the common difference ";
    cin>>c;
    while(i<=x)
    { 
        cout<<i<<"\t";
        i+=c;
    }

}