#include <iostream>
using namespace std;
int main() 
{
    int arr1[1000][1000],size[1000];
    int n,q,s,pos1,pos2;
    cout<<"Enter a Number of Array";
    cin>>n>>q; 
    for(int i=0;i<n;i++)
    {
       cout<<"Enter a size of array";
       cin>>s;
       for(int j=0;j<s;j++)
       {
            cin>>arr1[i][j];
       } 
        
    }
    for(int i=0;i<q;i++)
    {
        cout<<"Enter a position";
        cin>>pos1>>pos2;
        cout<<arr1[pos1][pos2]<<"\n";
    }
    return 0;
}