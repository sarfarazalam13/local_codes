#include<iostream>
using namespace std;
    class student{
    public:
    string name;
    int age;
    bool gender;
    
    void displayinfo()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
    };
    int main(){
    student arr[3]; 
    {
        student student1;
        student1.name="saif";
        student1.age=22;
        student1.gender="1";
        student1.displayinfo();
    }return 0;}