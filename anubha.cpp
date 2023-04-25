#include <iostream>
using namespace std;
int main()
{
    int i, a[10], s,l, max, h[10]={0};
    cout << "enter size of array" << endl;
    cin >> s;
    cout << "enter array" << endl;
    for (i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    for (i = 0; i < s; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "maximum element is" << max << endl;
    for (i = 0; i <= max; i++)
    {
        int x = a[i];
        int e = a[i + 1];
        for (int j = x + 1; j < e;j++)
        {
            cout << j;
        }
    }
    l=a[0];
    cout << " missing elemenets are " << endl;
    for (i = l; i <=max; i++)
    {
        if (h[i] == 0)
        {
            cout << " " << h[i];
        }
    }
    return 0;
}