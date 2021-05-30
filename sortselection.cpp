#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the size of array";
    cin>>x;
    int array[x];
    for(int i=0;i<x;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<x-1;i++)
    {
        for(int j=i+1;j<x;j++)
        {
           if(array[j]<array[i])
           {
            int temp=array[j];
            array[j]=array[i];
            array[i]=temp;
           }
        }
    }
for(int i=0;i<x;i++)
{
cout<<array[i]<<"\t";
}
}