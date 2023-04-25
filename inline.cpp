#include<iostream>
using namespace std;
inline void sum(int x, int y)
{
    int summ;
    summ= x + y;
    cout << summ;

}

int main()
{
    int a, b;
    cin >> a >> b;
    sum(a, b);
}