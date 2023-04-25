#include<iostream>
using namespace std;

int main()
{
    int s;
    cout<<"enter the size of your Di_k, no just kidding dont enter such a small number,\nenter the  size of array ";
    cin>>s;
    int e[s],y=0;
    cout<<"enter the elemnts";
    for(int i=0;i<s;i++)
    {
        cin>>e[i];
    }
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
        if(e[i]==e[j])
         {cout<<i+1<<" is the 1st repeated number's position and the repeated number is: "<<e[i];
         return 0;}
        
        }

    }
cout<<"no repetation";
    return 0;
}