#include<iostream>
using namespace std;
int swap(int Arr[],int n)
{
    for(int i=0;i<=n;i=i+2)
    {

        int temp=Arr[i];
        Arr[i]=Arr[i+1];
        Arr[i+1]=temp;
    }
}
int print(int Arr[],int n)
{
  for(int i=0;i<n;i++){
      cout<<Arr[i]<<" ";

  }cout<<endl;

}
int main()
{
    int Arr[]={1,3,2,7,8,11};
    swap(Arr,6);
    print(Arr,6);
   return 0;
}