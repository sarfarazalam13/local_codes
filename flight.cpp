#include<iostream>
using namespace std;

class flight{
    private:
    string name;
    int firstclass,businessclass,economyclass,reservedF=0,reservedE=0,reservedB=0,unreservedF,unreservedB,unreservedE;
    public:
    void passInfo();
    void passFrontendinfo();
    void print();
    void ticketBook(int x);
    void cancelTicket(int y,int x);
    void printTicket(int d);
};
//BACK END

string f[1000];
void flight::passInfo()
{
    
    char choice;
    int y;
    for(int i=0;i<1;i++)
    {
        cin>>f[0];
        cout<<"wanna add another Plane ? ";
        cin>>choice;

            while(choice=='y')
            {
                i=i+1;
                cin>>f[i];
                cout<<"wanna add another Plane ? ";
                y=i;
                cin>>choice;
            }
    }
    cout<<"Enter number of seats for First class";
    cin>>firstclass;
    unreservedF=firstclass;
    cout<<"Enter number of seats for business class";
    cin>>businessclass;
    unreservedB=businessclass;
    cout<<"Enter number of seats for Economy class";
    cin>>economyclass;
    unreservedE=economyclass;
    
    cout<<"Choose a Plane\n\n";
    for(int i=0;i<=y;i++)
    {
        cout<<i<<"\t"<<f[i]<<endl;
    }
}


//FRONTEND
void flight::ticketBook(int x)
{
char choice;
cout<<"Choose a class between F,B,E";
cin>>choice;
switch(choice)
{
    case 'f':
    {
    if(x<firstclass)
    {
     reservedF=unreservedF-x;
    }
    else
    cout<<"These many seats are not available";
    }
    break;
    case 'b':
    {
    if(x<businessclass)

    {reservedB=businessclass-x;}
    else
    cout<<"These many seats are not available";
    }
    break;
    case 'e':{if(x<economyclass)
    {
    reservedE=economyclass-x;
    }
    else
    cout<<"These many seats are not available";}
    break;
}

}

void flight::cancelTicket(int y,int x)
{
cin>>y;
char choice;
switch (choice)
{
    case 'F':if(y<=x&&y<firstclass)
    {
    firstclass+y;
    }
    else
    cout<<"These many seats are not available";
    break;
    case 'B':if(y<=x&&y<businessclass)

    {businessclass+y;}
    else
    cout<<"These many seats are not available";
    break;
    case 'E':if(y<=x&&y<economyclass)
    {
    economyclass+y;
     }
    else
    cout<<"These many seats are not available";
    break;
}
}



void flight::passFrontendinfo()
{
    cout<<"Enter name of the passenger  ";
    cin>>name;
}

void flight::print()
{
    cout<<"\n\nPLANE STAT\n"<<"C"<<"\t"<<"TS"<<"\t"<<"R"<<"\t"<<" UR "<<endl
     <<"1"<<"\t"<<firstclass <<"\t"<<reservedF << "\t"<< unreservedF<<endl
     <<"2"<<"\t"<<businessclass<<"\t" << reservedB <<"\t"<<unreservedB<<endl
     <<"3"<<"\t"<< economyclass <<"\t"<<  reservedE <<"\t"<<unreservedE<<endl;
}

void flight::printTicket(int d)
{
    cout<<"\n"<<"Name            "<<name<<endl;
    cout<<"Plane name      "<<f[d]<<endl;
    cout<<"Number of seats "<<reservedB;////////////////////////////////////////////////////////////onlywha
}


int main()
{  
   flight f;
   f.passInfo();
   int x;
   cout<<"Enter the number by the Plane of your choice";
   cin>>x;
   flight t;
   t.passFrontendinfo();
   cout<<"Enter the number of seats you want to book";
   int c;
   cin>>c;
   t.ticketBook(c);
   cout<<::f[x]; 
   t.printTicket(x);
   t.print();

} 