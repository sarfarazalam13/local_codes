#include<iostream> 
using namespace std; 
int x = 13;  //global
int main()
{
 int x = 20; // Local x  

  cout << "Value of global x is " << ::x;

  cout<< "\nValue of local x is " << x;  

  return 0;
}