#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the length of array--";
    cin>>x;
    int arr[x];
    for (int i=0;i<x;i++)
    {
        cout<<"enter element"<< i + 1<<" -- ";
        cin >> arr[i];
    }
    cout << "\n"
         << "sorted array is =";
    for(int j=0;j<x;j++)
    {
        for (int i = 0; i < x - j;i++)
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
    }
for(int i=0;i<x;i++)
{
    cout<<arr[i]<<" ";
}
}