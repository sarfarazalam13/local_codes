#include <iostream>  
using namespace std;  
int main()  
{  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,sum[10][10],diff[10][10],transpose[10][10];    
cout<<"enter the number of row=";    
cin>>r;    
cout<<"enter the number of column=";    
cin>>c;    
cout<<"enter the first matrix element=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix element=\n";
 for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }   
//addition
for(i = 0; i < r; ++i)
{
        for(j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
}
cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        } 
//subtraction 
for(i = 0; i < r; ++i)
{
        for(j = 0; j < c; ++j)
        {
            diff[i][j] = a[i][j] - b[i][j];
        }
}
cout << endl << "difference of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << diff[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        } 

//multiplication    
cout<<"multiply of the matrix=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cout<<mul[i][j]<<" ";    
}    
cout<<"\n";    
}   
//transpose
   for (int i = 0; i < r; ++i)
      for (int j = 0; j < c; ++j) {
         transpose[j][i] = a[i][j];
      }

   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < c; ++i)
      for (int j = 0; j < r; ++j) {
         cout << " " << transpose[i][j];
         if (j == r- 1)
            cout << endl << endl;
      }
return 0;  
} 