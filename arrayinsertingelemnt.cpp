#include<iostream>
using namespace std;

int main()
{
    char choice;
    int y=0;
    string arr[1000];
    for(int i=0;i<1;i++)
    {
        cin>>arr[0];
        cout<<"wanna add more";
        cin>>choice;

            while(choice=='y')
            {
                i=i+1;
                cin>>arr[i];
                cout<<"wanna add more 2";
                y=i;
                cin>>choice;
            }
    }
    for(int i=0;i<=y;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}