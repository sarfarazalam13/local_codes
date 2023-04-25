#include<iostream>
using namespace std;
int main()
{
    int a, n,u;
    char ch;
    ch = 'y';
    while(ch=='y')
    {
    cout << "enter the numbers you want to apply operation on:" << endl;
    cin >> a >> n;
    cout << "choose the operator:" << endl;
    cin >> ch;
    switch (ch)
       
    {
        case '+':
            cout << "the add is: " << a + n<<endl;
            break;
            case '-':
            cout << "the minus is: " << a - n<<endl;
            break;
            case '*':
            cout << "the multiply is: " << a * n<<endl;
            break;
            case '/':
            cout << "the divide is: " << a / n<<endl;
            break;
            case '%':
            cout << "the rem is: " << a % n << endl;
            break;
            default:
                cout << "nikal yaha se" << endl;
                break;
    }
    ch = 'y'; 
    cout << "aa gaya swaad....ya or lena h.....swaad??" ;
    cin >> ch;
    }
    return 0;
}