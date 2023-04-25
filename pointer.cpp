#include<iostream>
using namespace std;
int main()
{
    int i=13;
    int *j;
    j = &i;
    cout << i<<endl;
    cout << *(&i)<<endl;
    cout << *j<<endl;
    cout << j<<endl;
    cout << &i<<endl;
    cout << &j<<endl;
    
}
