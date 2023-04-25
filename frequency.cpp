#include<iostream>
using namespace std;
int main()
{
string s;
cin>>s;
int count,k=-1;
string arr[s.length()];
int c[s.length()];

for(int i=0;i<s.length();i++)
{
    count=1;
    for(int j=i+1;j<s.length();j++)
    {
    if(s[i]==s[j] && s[i]!='0')
        {
            count++;
            s[j]='0';
            arr[k]=s[i];
        }
        
        c[k]=count;
        
       
    }
    if(s[i]!=0)
    {
        k++;
    }
    

}
for(int i=0;i<s.length();i++)
{
    cout<<arr[i]<<" "<<c[i]<<endl;
}
}

