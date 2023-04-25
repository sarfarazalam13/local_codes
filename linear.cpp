#include<iostream>
using namespace std;
int main()
{
int i,sea,n=6;
int arr[] = {11, 1, 2, 3, 1, 6, 7};
sea = 6;
for (i = 0; i < n; i++)
{
    if(arr[i]=sea)
    {
    cout << arr[i];
    break;
    }
    else
        cout << "not found;";
}
return 0;
}