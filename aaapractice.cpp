#include<iostream>
using namespace std;
/*int main()

//selection sort
{
    int x;
    cout<<"enter the size of array to do selection sort";
    cin>>x;
    int arr[x];
    cout<<"enter the elemets";
    for(int i=0;i<x;i++)
    {
     cin>>arr[i];
    }
    for(int i=0;i<x-1;i++)
    {
        for(int s=i+1;s<x;s++)
        {
            if(arr[i]>arr[s])
            {
                int temp= arr[i];
                arr[i]=arr[s];
                arr[s]=temp;
            }
        }
    }
 for(int i=0;i<x;i++)
    {
     cout<<arr[i];
    }
}*/


/*bubble sort*/
/*{
    int x,count=0;
    cout<<"enter the size of array to bubble sort";
    cin>>x;
    int arr[x];
    cout<<"enter the elements";
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    while(count<x)
    {
    for(int i=0;i<x;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
        count++;
    }
    for(int i=0;i<x;i++)
    {
        cout<<arr[i];
    }
}*/

/*scope resolution operator*/

    class student{
        float marks;
        char address[100];
        long int phone;
        public:
        string name[41];
        int age;

        void passInfo();
        void displayinfo();

    }
    void displayinfo()
    {
     cout<<name;
     cout<<age;
     cout<<marks;
     cout<<address;
     cout<<phone;
    }
    void passInfo()
    {
        cin>>name;
        cin>>age;
        cin>>marks;
        cin>>address;

    }
    int main()
    {
        student a;
        a.passInfo();
        a.displayinfo();
    }