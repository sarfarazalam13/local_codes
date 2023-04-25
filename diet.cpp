#include<iostream>
using namespace std;
class nutrients{

    float carbohydrates;
    float fats;
    float protein;
    public:
    void passInfo();
    void Add(int c,int f, int p)
    {
        Add operator+()
    }
    void printInfo();

};
void nutrients::passInfo()
{
    cin>>carbohydrates>>fats>>protein;

}
void nutrients::printInfo()
{
    cout<<carbohydrates<<fats<<protein;
}
void nutrients::Add(int c,int f,int p)
{
}

int main()
{
    nutrients F1;
    F1.passInfo();
    F1.printInfo();
    nutrients F2;
    F2.passInfo();
    F2.printInfo();
}