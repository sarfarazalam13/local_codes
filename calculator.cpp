#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char ch;
    cout << "enter the numbers";
    cin >> num1 >> num2;
    cout << "select an operator from +,-,/,*";
    cin >> ch;
    switch (ch)

    {
    case '+':
        cout << num2 + num1;
        break;
    case '-':
        cout << num2 - num1;
        break;
    case '/':
        cout << num2 / num1;
        break;
    case '*':
        cout << num2 * num1;
        break;
    default:
        cout << "wrong choice";
        break;
    }
}