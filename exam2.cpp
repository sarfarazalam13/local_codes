#include<iostream>
using namespace std;
class furniture{
int productid;
string furniturename;
string basematerial;
int cost;
public:
void input();
void output();
};
void furniture::input()
{
    cin>>productid;
    cin>>furniturename;
    cin>>basematerial;
    cin>>cost;
}
void furniture::output()
{
    cout<<productid<<endl<<furniturename<<endl<<basematerial<<endl<<cost;
}
int main()
{
  furniture f[4];
  for (int i=0;i<4;i++)
  {
    f[i].input();
  }
  for(int j=0;j<4;j++)
  {
    f[j].output();
  }
}