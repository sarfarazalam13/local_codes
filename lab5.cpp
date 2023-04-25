#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a numbber from 1 to 7";
    cin >>n;
    switch (n)
    {
    case 1:
        cout << "\n monday\n";
        break;
        case 2:
        cout << "\n tuesday\n";
        break;
        case 3:
        cout << "\n wednesday\n";
        break;
        case 4:
        cout << "\n thursday\n";
        break;
        case 5:
        cout << "\n friday\n";
        break;
        case 6:
        cout << "\n saturday\n";
        break;
    case 7:
        cout << "\n sunday \n";
        break;
    default:
        cout << "wrong choice";
        break;
    }

}