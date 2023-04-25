#include<iostream>
using namespace std;
class constructor {
public:
constructor()
{
    cout << "inside constructor\n";
}
~constructor( )
{
    cout << "destroyed \n";
}
};
int main( )
{
    cout << "inside main block \n";
    cout << "creating objects \n";
    constructor c;
    {
        cout << "inside block 1\n";
        cout << "created two objects\n";
        constructor c2, c3;
        cout << "leaving\n";
    }
    cout << "inside main block\n";
}