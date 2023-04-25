#include <bits/stdc++.h>  
using namespace std;  
int main()  
{  
int a[100][100],b[100][100],r,c,i,j,k,sum[100][100],counter=0,num,s=0;
char ch='y';
cout<<"enter the number of row=";    
cin>>r;    
cout<<"enter the number of column=";    
cin>>c;
cout << "enter the number of " << r << " X " << c << " matrices you want to add ";
cin >> num;
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
sum[i][j]=0;  
}    
} 

while(s<num)
{
    counter++;
    cout << "enter the " << counter << " matrix element=\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }    
}
/*counter++;
cout<<"enter the"<<counter<<" matrix element=\n";
 for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    } 
 
*/
for(i = 0; i < r; ++i)
{
        for(j = 0; j < c; ++j)
        {
            sum[i][j] += a[i][j]; // + b[i][j];
        }
}

    s++;
    // cout << "wanna add more??";
    //cin >> ch;
}
cout << endl << "Sum of "<<counter <<" matrices is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
            
                cout << endl;
        }
}