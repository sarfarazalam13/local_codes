#include<iostream>
using namespace std;
int main()
{
    int x,counter=0;
    cout<<"enter the length of array--";
    cin>>x;
    int arr[x],art[x],are[x];
    for (int i=0;i<x;i++)
    {
        cout << "enter element " << i + 1<<"--";
        cin >> arr[i];
        
    }
    for (int i = 0; i < x;i++)
    {
        for (int j = i; j < x;j++)
        {
            if (arr[i] == arr[j]);
            counter++;
            art[i] = counter;
        }    
    }
    for (int i = 0; i < x;i++)
    {
        are[i];
    }