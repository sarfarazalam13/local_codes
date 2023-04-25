#include<iostream>
using namespace std;
int recur(int a)
{
    if(a>0)
    {
    cout << a<<"\n";
    recur(a - 1);
    //cout << a<<"\n";tail recurssion if and only if the last stament calls the function again itself
    }
    else return 0;
}
int main()
{
    int x;
    cin >> x;
    recur(x);
}