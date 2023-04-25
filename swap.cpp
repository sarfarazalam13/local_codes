#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
    cout << "after swap \na=" << *x << " b=" << *y << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "before swap \n a= " << a<<"\n" << "b= " << b;
    swap(&a, &b);
}