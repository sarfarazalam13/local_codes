#include<iostream>
using namespace std;
int main()
{
	int age, counter1=0,counter2=0,counter3=0;
    cout << "To exit and see results enter 6969"
         << "\n\n";
    while(1>0)
	{
        cout << "enter age ";
        cin>>age;
		if(age<18)
		{cout<<"fuck off kid "<<"\n";
		counter1++;}
		else if(age>=18&&age<45)
		{
			cout<<"vote daal na chadarmod"<<"\n";
			counter2++;
		}
		else if(age>=45&&age!=6969)
		{
			cout<<"kya budhau "<<"\n";
			counter3++;
		}
		else if(age==6969)
		{
			break;}
		
		
		}
        cout << "| kids fuced off= |" << counter1 << "\n"
             << "| chadarmods    = |" << counter2 << "\n"
             << "| budhaus       = |" << counter3 << "\n"
             << "|total voters   = |" << counter1 + counter2 + counter3;
}