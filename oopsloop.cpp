#include<iostream>
using namespace std;
class frnd{
    public:
    int age;
    string name;
    float years;
void displayinfo()
{
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<years<<endl;
}
};
int main()
{   int x,y=1;
    cout<<"enter the total range ";
    cin>>x;
    frnd frienda[x];
    for(int i=0;i<x;i++)
    {
    cout<<"enter the name of friend"<<y<<endl;
    cin>>frienda[i].name;
    cout<<"enter age for friend"<<y<<endl;
    cin>>frienda[i].age;
    cout<<"enter years of friendship for friend"<<y<<endl;
    cin>>frienda[i].years;
    y++;
    }for(int i=0;i<x;i++)
   {frienda[i].displayinfo();}
}