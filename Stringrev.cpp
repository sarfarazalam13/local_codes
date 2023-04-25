#include<iostream>
using namespace std;
string stringrev(string s)
{
    int fin=s.length();
    int i=0;
    while(i<=fin)
    {
        swap(s[i],s[fin]);
        i++;
        fin--;
    }
    return s;
}

int main()
{
    string s;
    cin>>s;
    cout<<stringrev(s);
}
