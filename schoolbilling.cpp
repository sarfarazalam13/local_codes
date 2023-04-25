#include<iostream>
using namespace std;

int feeamount=0,deposit=0,dues=0,reservefund=100000,w=0;
string namekey;
int feedeposit(int classkey)
{
if(classkey<5&&classkey>0)
{
  feeamount=1500;
  cout<<"\nFee amount of a month="<<feeamount;
}
else if(classkey>5&&classkey<8)
{
  feeamount=2000;
  cout<<"\nFee amount of a month="<<feeamount;
}
else if(classkey>8)
{
  feeamount=2500;
  cout<<"\nFee amount of a month="<<feeamount;
}
cout<<"\nEnter the number of month for which you would like to pay up ";
int duration;
cin>>duration;
feeamount=feeamount*duration;
cout<<"fee amount= "<<feeamount;
cout<<"Enter the amount paid ";
cin>>deposit;
dues=feeamount-deposit;
cout<<"Dues= "<<dues;
}

int salary()
{
    int monthlysalary=5000,durationsalary,total=0;
    cout<<"Enter the month for which payment has to be made ";
    cin>>durationsalary;
    total=monthlysalary*durationsalary;
    cout<<"Total salary="<<total;
    
}

int main()
{
    //initial re
    char choice;
    cout<<"One Time data entry \nEnter the number of students ";
     string student[100];
     int stud;
     cin>>stud;
     student[stud];
     int classs[stud],roll[stud];
    for(int i=0;i<stud;i++)
    {
        cout<<"Enter name for student"<<i+1;
        cin>>student[i];
        cout<<"Enter class";
        cin>>classs[i];
        cout<<"Enter roll number";
        cin>>roll[i];
    }
     int teach;
     cout<<"One Time data entry\nEnter the number of teachers ";
     cin>>teach;
     string teacher[teach];
    for(int x=0;x<teach;x++)
    {
    cout<<"Enter the name of Teacher "<<x+1;
    cin>>teacher[x];
    } 

    //new admission
    char admission;
    cout<<"Any new admission?";
    cin>>admission;
    if(admission=='y')
    {
    for(int i=0;i<stud;i++)
    {
      student[i]=student[i+1];
      cin>>student[i];
      cin>>classs[i];
    }
    }
    char choicee='y';
    while(choicee=='y')
    {
    int date;
    string month;
    cout<<"enter date and month";
    cin>>date>>month;

    cout<<"To operate on data of, teacher press 't' or for students press 's'? ";
    cin>>choice;
    switch(choice)
    {
     case 's':
    cout<<"Search the Student\n Enter name ";
    cin>>namekey;
    cout<<"enter class";
    int classkey;
    cin>>classkey;
    cout<<"enter roll";
    int rollkey;
    cin>>rollkey;
    for(int i=0;i<stud;i++)
    {
        if(student[i]==namekey&&roll[i]==rollkey&&classs[i]==classkey)
        {
            cout<<student[i];
            w=i;
            feedeposit(classkey);
        }
    }
    break;
    case 't':
    cout<<"search the Teacher \n Enter name";
    string teacherkey;
    cin>>teacherkey;
    for(int i=0;i<teach;i++)
    {
        if(teacher[i]==teacherkey);
        {
            cout<<endl<<teacher[i];
            salary();
        }
    }
    break;
    }
    cout<<"To continue press y else press any other key to exit";
    cin>>choicee;
    cout<<"Date"<<date <<"Month "<<month<<"\n";
    for(int r=0;r<stud;r++)
    {
        cout<<student[r]<<"|"<<classs[r]<<"|"<<roll[r]<<endl;
    }

}