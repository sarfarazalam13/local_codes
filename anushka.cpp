#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int ply,c,truth,dare,a=0,b=1;
    char z,cho='y';
    string anu[2]={"dare","truth"};
     cout<<"enter the number of players: "<<endl;
    cin>>ply;
    string arr[ply];
     cout<<"enter the name of the players:"<<endl;
    for(int i=0;i<ply;i++)
   {
    cin>>arr[i];
    }
    cout<<"press y if you want computer to assign T or D"<<endl;
    cin>>cho;
    {
    if(cho=='y')
    {
        srand(time(NULL));
    {
    a=rand()%ply;
    b=rand()%2;
    }
    }
    cout<<"the player  "<<arr[a]<<" will have to take "<<anu[b]<<endl;
    }
   
    if(cho!='y')
    {
    cout<<"Enter Truth or Dare: "<<endl;
    cin>>z;
     switch(z)
     {
         case 't': cout<<"the player has to perform truth"<<endl;
         break;
         case 'd': cout<<"the player has to perform dare"<<endl;
         break;
         default: cout<<"chal nikal yaha se"<<endl;
         break;
     }
    
    }
    return 0;
    }