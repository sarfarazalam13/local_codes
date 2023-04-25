#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void playersInfo(int nplayers)
{
  int name[nplayers];
  for (int  i = 0; i < nplayers; i++)
  {
   cout<<"Enter the name of players";
   cin>>name[i];
  }
  
}
void playCompter()
{
   srand(time(0));
   char cho;
   cout<<"For"<<name 
   cin>>cho;
   switch(cho)
   {
      case
   }
}
void playSelf()
{

}

int main()
{
   int nplayers;
   cout<<"Enter number of players :";
   cin>>nplayers;
   playersInfo(nplayers);
   playCompter();
   playSelf();

}