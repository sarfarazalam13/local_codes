#include<iostream>
using namespace std;//n!/r!(n-r)!
int factorial(int x)
{
    int c;
    if(x==0)
    {
        return 1;
    }
    else
    {
        return factorial(x - 1) * x;
    }
}
int main()
{
    int x,y, fact1,fact2,fact3,combinations;
    cin >> x>>y;
    fact1=factorial(x);
    fact2 = factorial(y);
    fact3 = factorial(x - y);
    combinations = fact1 / fact2 * fact3;
    cout<<"n= "<<fact1<<"\t"<<"r="<<fact2<<"\t"<<"n-r= "<<fact3<<"\n\ncombinations= "<<combinations;
}