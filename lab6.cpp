#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three numbers";
    cin >> a >> b >> c;
    if(a>b)
    {
        if(b>c)
            cout << a << b << c;
    }
    else if(b>c)
    {
        if(c>a)
        cout <<b<< c << a;
    }
    else if(c>a)
    {
        if(b>a)
            cout << c << b << a;
    }
    return 0;
}