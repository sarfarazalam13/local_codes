#include<iostream>
int main()
{
    int x,r=0,s=0,sr=0;
    std::cin>>x;
    while(x>0)
    {
        r=x%10;
       
        if(r==0)
        {
            r=5;
        }
         s=r+s*10;
        x=x/10;
    }
    while(s>0)
    {
        r=s%10;
        sr=r+sr*10;
        s=s/10;
    }
    std::cout<<sr;
}