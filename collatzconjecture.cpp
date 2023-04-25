#include<iostream>
using namespace std;
int main()
{
    long x,cunter=0;
    cin >> x;
    while(x>1)
    { 
        if(x%2==0)
        {
             x = x / 2;
        }
        else
        {
            x=3 * x + 1;
        }
        cunter++;
    }
    cout << "steps befor the number gets stuck in 4's loop= " << cunter; 
}  