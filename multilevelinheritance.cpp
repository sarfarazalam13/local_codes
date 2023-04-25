#include <iostream>
using namespace std;

class city
{
public:
  city()
  {
    cout << "Hello I am the 1st base class of cities" << endl;
  }
};
class delhi : public city
{
public:
  delhi()
  {
    cout << "Hello I am the capital of India Delhi" << endl;
  }
};
class location : public delhi
{
public:
  location()
  {
    cout << "I am pink city Jaipur " << endl;
  }
};
class home: public city{
public:
home()
{
    cout<<"my hometown bihar";
}
};

int main()
{
  location obj;
  home b;
  return 0;
}