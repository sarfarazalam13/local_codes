#include<iostream>
using namespace std;
class student{
    float percentage;
    public:
    student(){}
    student(float x) //parametrized constructor
    {
        percentage = x;
    }
    friend float operator>=(student, student);
    void show(){
        cout << "the greater percentage=" << percentage;
    }
};
float operator>=(student s1, student s2)
{
        if(s1.percentage>=s2.percentage)
            return s1.percentage;
            else if(s1.percentage<=s2.percentage)
                return s2.percentage;
            
}
int main()
{
    student s1(99.9), s2(99.7);
    student high;
    high=s1 >= s2;
    high.show();
}