#include<iostream>
using namespace std;
class Shape{
protected:
int width;
int height;
public:
void setwidth(int w)
{
    width=w;
}
void setheight(int h)
{
    height=h;
}
};
class Rectangle:public Shape{
public:
int getarea()
{
   return(width*height);
}
};
int main()
{
    Rectangle rect;
    rect.setwidth(4);
    rect.setheight(4);
    cout<<"total area: "<<rect.getarea()<<endl;
    return 0;
}