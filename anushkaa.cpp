#include<iostream>
using namespace std;
void mergesort(int arr[],int,int);
void merge(int b[],int,int,int);
int main()
{
 int n;
 cout<<"enter the number of elements:"<<endl;
 cin>>n;
 int arr[n];
 cout<<"enter the elements in the array:"<<endl;
 
     for(int i=0;i<n;i++)
{
     cout<<arr[i]; 
}
mergesort(arr,0,n-1);
cout<<"the array after merge sort is:"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
}
void mergesort(int arr[],int l,int u)
{
    while(l<u)
    {
        int mid;
        mid=(l+u)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,u);
        merge(arr,l,mid+1,u);
}
}
    void merge(int arr[],int l,int mid,int u)
    {
        int k,a1,a2,a3,midd;
        int a[20];
        a1=l;
        a2=midd;
        a3=l;
        while(a1<midd&&a2<=u)
        {
            if(a[a1]<=a[a2])
            {
                a[a3++]=a[a1++];
            }
                else
                {
                 a[a3++]=a[a2++];
                    
                }
        }

        while(a1<midd)
        {
            a[a3++]=a[a1++];
        }
        while(a2<=u)
        {
          a[a3++]=a[a2++];
        }
        for(int k=l;k<a3;k++)
        {
            a[k]=arr[k];
        }
    }