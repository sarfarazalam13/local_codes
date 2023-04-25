#include<iostream>
using namespace std;
main()
{
    int x,count=0;
    cout<<"enter the size of the list";
    cin>>x;
    int arr[x];
    for (int i = 0; i <x; i++)
    {
      cin>>arr[i];
    }
   
    while(count<x)
    {
    for(int i=0;i<x;i++)
    {
      if(arr[i]>arr[i+1])
      {
          int temp= arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=temp;
      }
    }
      count++;

    }

    for (int i =0; i<x; i++)
    {
      cout<<arr[i]<<"\n";
    }
}