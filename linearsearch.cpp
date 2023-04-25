#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int att[x],key,i;
    for (i = 0; i < x;i++)
    {
        cin >> att[i];
    }
    cin >> key;
    for (i = 0; i < x;i++)
    {
        if(att[i]==key)
        {
            cout << "element found";
           break;
        }
    }
    
    if(i==x)
    {
        cout << "element not found";
    }
    return 0;
}