#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the length of array";
    cin>>x;
    int arr[x];
    for (int i=0;i<x;i++)
    {
    cin>>arr[i];
    }
    int count=0;
    while(count<x)
    {
    for(int i=0;i<x-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    count++;
    }
for(int i=0;i<x;i++)
{
    cout<<arr[i]<<" ";
}
}