#include<iostream>
using namespace std;
class bank{

long int cardno,balance;

public:
string accounthoder;
string accounttype;

void passifo();
void displayinfo();
};
void bank::passifo(){
cout<<"name";
cin>>accounthoder;
cout<<"enter accout type";
cin>>accounttype;
cout<<"enter card no";
cin>>cardno;
cout<<"enter balance";
cin>>balance;
}
void bank::displayinfo(){
cout<<accounthoder<<"\t"<<accounttype<<"\t"<<cardno<<"\t"<<balance<<endl;/*caskedding*/
}
int main()
{
    bank a;
    a.passifo();
    a.displayinfo();
}