#include<iostream>
//#include<math.h>
using namespace std;
/*int main()
{
    int num,x,counter=1,s;
    cin >> num;
    while(num>1)
    {
       x=num % 2;
       s=x+pow(10,counter);
       num= num / 2;
       counter++;
    }
    cout << s;
}*/
int main()
{
    int num, arr[10],i,j;
    cin >> num;
    for (i = 0; num >1;i++)
    {
        arr[i] = num % 2;
        num = num / 2;
    }
    for (j =i-1;j>= 0;j--)
    {
        cout<<arr[j];
    }
    return 0;
}