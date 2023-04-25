#include<iostream>
using namespace std;
class bank{
long int balance,accountnumber,deposit=0,withdraw=0;
public:
string accounthoder;
string accounttype;
void passifo();
void transaction();
void displayinfo();
};
void bank::passifo(){
cout<<" name ";
cin>>accounthoder;
cout<<"enter accout number ";
cin>>accountnumber;
cout<<"enter account type ";
cin>>accounttype;
cout<<"enter balance ";
cin>>balance;
}
void bank::displayinfo(){
cout<<accounthoder<<"\t"<<accounttype<<"\t"<<"\t"<<balance<<endl;
}
void bank::transaction()
{
cout<<"withdraw or dep: ";
char choi;
cin>>choi;
switch(choi)
{
case 'd':
cout<<"enter deposit amount";
cin>>deposit;
balance+=deposit;
cout<<"final balance"<<balance;
case 'w':
int pin;
cout<<"enter pin ";
cin>>pin;
if(pin==1234)
{
cout<<"enter withdrawn amount";
cin>>withdraw;
balance-=withdraw;
if(balance>0)
cout<<"final balance"<<balance;
else
cout<<"Insufficient balance";
}
else 
cout<<"Transaction failed You entered the wrong pin";
}
}
void changepin()
{
    
}
int main()
{
    bank a;
    a.passifo();
    a.displayinfo();
    char choice='y';
    cout<<"do you want to transact";
    cin>>choice;
    if(choice=='y')
    {
    a.transaction();
    }
}