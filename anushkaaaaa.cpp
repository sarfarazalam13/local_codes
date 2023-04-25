#include<iostream>
using namespace std;
int main()
{
 
    for (int i = 2001; i <= 2050; i++)
    {
        if(i%4==0&&i!=100||i%400==0)
        {
            cout << "toh yhi krne aaye thay:" << i << endl;
        }
   }
   return 0;
}