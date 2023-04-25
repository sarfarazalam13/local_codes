#include<iostream>
using namespace std;
class student{
        string studentname;
        float totalmarks;
        float maximummarks;
        public:
        void marks(int x);
        void passInfo();
        void displayInfo();
};
void student::marks(int x)
{
 int a[x];
 for(int i=0;i<x;i++)
 {
         cout<<"enter marks for subject "<<i+1<<endl;
         cin>>a[i];
         totalmarks+=a[i];
         maximummarks=a[0];
         if(a[i]>maximummarks)
         {
                maximummarks=a[i];
         }

 }

}
void student::passInfo()
{
        cout<<"enter students name ";
        cin>>studentname;
}
void student::displayInfo()
{
        cout<<"name "<<studentname<<endl<<"Total marks "<<totalmarks<<endl<<"Maximum marks "<<maximummarks;
}
int main()
{
        cout<<"enter number of students"<<"\n";
        int s;
        cin>>s;
        int z;
        cout<<"enter the number of subjects";
        cin>>z;
        student stud[s];
        for(int i=0;i<s;i++)
        {
         cout<<"for student "<<i+1<<"\n";       
        stud[i].passInfo();
        stud[i].marks(z);
        stud[i].displayInfo();
        }
}