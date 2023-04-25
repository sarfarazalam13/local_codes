#include <iostream>
using namespace std;

int main() {
    int t,a,x,b,y,sa=0,sb=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        cin>>x;
        cin>>b;
        cin>>y;
        sa=a/x;
        sb=b/y;
        if(sa>sb)
        {
            cout<<"Alice"<<endl;
        }
        else if(sa<sb)
        {
            cout<<"Bob"<<endl;
            
        }
        else
        {
        cout<<"Equal"<<endl;
        
        }
    }
	// your code goes here
	return 0;
}
