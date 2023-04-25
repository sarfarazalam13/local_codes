#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
char ch='y';
int diff;
while(ch=='y')
{
int user=0;
srand(time(0));
int random=(rand() % 3) ; 
cout<<"WELCOME TO THE GAME"<<endl;
cout<<"Your Choice?"<<endl;
cout<<"0-PAPER"<<endl<<"1-STONE"<<endl<<"2-SCISSORS"<<endl;
cin>>user;

cout<<random<<endl;
switch(user)
{
case 0:
{
string pa[3]={"Paper","Stone","SCISSORS"};
cout<<"USER "<<"  "<<"    COMPUTER\n "" "<<pa[user]<<"     |   "<<pa[random]<<endl;
diff=user-random;
if(user==random)
{
   cout<<"it's a draw"<<endl;
}
else if(diff==-2)
{
    cout<<"computer wins"<<endl;
}
else if(diff==-1)
{
    cout<<"user wins"<<endl;
}
break;}




case 1:
{string st[3]={"Scissors","Stone","PAPER"};
cout<<"USER "<<"  "<<"    COMPUTER\n"" "<<st[user]<<"     |   "<<st[random]<<endl;
diff=user-random;
if(user==random)
{
   cout<<"it's a draw"<<endl;
}
else if(diff==-1)
{
    cout<<"computer wins"<<endl;
}
else if(diff==1)
{
    cout<<"user wins"<<endl;
}
break;}




case 2:
{string sc[3]={"stone","paper","SCISSORS"};
diff=user-random;
cout<<"USER "<<"  "<<"    COMPUTER\n"" "<<sc[user]<<"     |   "<<sc[random]<<endl;
if(user==random)
{
   cout<<"it's a draw"<<endl;
}
else if(diff==2)
{
    cout<<"computer wins"<<endl;
}
else if(diff==1)
{
    cout<<"user wins"<<endl;
}
break;
}
default:
cout<<"enter something valid";
break;
}

}
}