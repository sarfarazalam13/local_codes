#include<iostream>
using namespace std;
int fibonacci(int x)
{
    int a, b, c;
    a = -1;
    b = 1;
    c = a + b;
    a = b;
    b = c;
    return c;
    fibonacci(x);
}
int main()
{
    int x,fib;
    cin >> x;
    fib=fibonacci(x);
}