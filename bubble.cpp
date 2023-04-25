#include<iostream>
using namespace std;
int main()
{
    float arr[5];
    for (int i = 0; i < 5;i++)
    {
        cin >> arr[i];
    }
    int counter = 0;
    while(counter<5)
    {
        for (int i = 0; i < 5;i++)
        {
            if(arr[i]>arr[i+1])
            {
                float temp;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < 5;i++)
    {
        cout << arr[i] << endl;
    }
}