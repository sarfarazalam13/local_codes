#include<iostream>
using namespace std;
class message {
    string a;

public:
void pass()
{
    cout << "enter the value to be passed";
    cin >> a;
}
void show()
{
    cout<<"the value passed i form of message is- "<< a << endl;
}

};
int main()
{
    message M;
    M.pass(); //message passed
    M.show();
}