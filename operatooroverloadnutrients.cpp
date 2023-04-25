#include<iostream>
using namespace std;
class nutrients {
    float carbohydrates, fats,proteins;
    public:
    void get(float x,float y, float z)
    {
       carbohydrates=x;
       fats=y;
       proteins=z;
    }
    nutrients operator +(nutrients x)
    {
        nutrients temp;
        temp.carbohydrates=carbohydrates+x.carbohydrates;
        temp.fats=fats+x.fats;
        temp.proteins=proteins+x.proteins;
        return temp;
    }
    void shw()
    {
        cout<<"carbohydrates ="<<carbohydrates<<"\n"<<"Fats ="<<fats<<"\n"<<"protein ="<<proteins;
    }

};
int main()
{
 nutrients f1,f2,f4,f3;
 f1.get(10.3,11.5,5.5);
 f2.get(5.4,2.3,4.7);
 f4.get(1,1,1);
 f3=f1.operator+(f2)+f4;
 f3.shw();

}