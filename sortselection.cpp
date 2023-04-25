#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the size of array";
    cin>>x;
    float array[x];
    for(int i=0;i<x;i++)
    {
        cout << "enter element " << i + 1<<" ";
        cin>>array[i];
    }
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
           if(array[j]<array[i])
           {
            float temp=array[j];
            array[j]=array[i];
            array[i]=temp;
           }
        }
    }
    cout << "sorted array"<<"\n";
    for (int i = 0; i < x; i++)
    {
        cout << array[i] << "\t";
}
}