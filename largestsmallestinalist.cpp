#include<iostream>
using namespace std;
main()
{
    int x,largestnum,smallestnum;
    cout<<"enter the length of the list ";
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    largestnum=arr[0];
    smallestnum=arr[1];
    for(int i=0;i<x;i++)
    {
     if(arr[i]>largestnum)
     {
         largestnum=arr[i];
     }
     if(arr[i]<smallestnum)
     {
         smallestnum=arr[i];
     }
    }
    cout<<"largest num= "<<largestnum<<endl;
    cout<<"smallest num= "<<smallestnum;
    
}