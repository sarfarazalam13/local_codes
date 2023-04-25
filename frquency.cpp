#include<iostream>
using namespace std;
int main(   )
{
    int x;
    cout << "enter the size of array";
    cin >> x;
    int arr[x], arc[x], counter;
    for (int i = 0; i < x; i++)
    {
        cout << "enter element " << i + 1;
        cin >> arr[i];	
    }
for(int i=0;i<x;i++)
{
    counter = 1;
    if (arr[i] != -169)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (arr[i] == arr[j])
            {
                counter++;
                arr[j] = -169;
            }
            arc[i] = counter;
        }
}
}
for(int i=0;i<x;i++)
{
    if(arr[i]!=-169)
        cout << arr[i] << " is " << arc[i] << "times\n";
}
} 
//problems- on entering the size 1 garbage value is printed
//predefined value -169 cant be fed in form of input