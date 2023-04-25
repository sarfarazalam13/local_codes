#include<iostream>
using namespace std;
int main()
{
    int x=1,t;
    do
    {
        t = 29 * x;

        cout << "29 *"<<x<<"="<<t<< endl;
        x++;
    } while (x<=10);
    return 0;
}