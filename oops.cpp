#include<iostream>
using namespace std;
class pinfo{
    /*if not done public inherited class wont be able to access it*/
    char name[20];
    int rank;
    public:
    void info();
    void printinfo()
    {
        cout<<"informatioon---"<<name<<endl;
        cout<<"rank---"<<rank<<endl;
    }
};

void pinfo::info()
{
    cout<<"enter info";
    cin>>name;
    cin>>rank;

}
int main()
{
    pinfo p;
    p.info();
    p.printinfo();
    return 0;
}
