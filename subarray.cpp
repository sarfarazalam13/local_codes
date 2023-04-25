#include <iostream>
using namespace std;
int main()
{
    int n;
    // cin >> n;
    int arr[5];
    for (int i = 0; i <= 5; i++)
    {
        cin >> arr[i];
    }
    int ar[0];
    int sum;
    for (int k = 0; k < 5; k++)
    {
        for (int i = k; i < 5; i++)
        {
            sum = 0;

            for (int j = 0; j < i; j++)
            {
                cout << arr[j];
                sum += ar[j];
            }
            cout << "sum=" << sum << endl;
        }
    }
}