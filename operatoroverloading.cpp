#include<iostream>
using namespace std;

class nutrients {
private:
	int carb,prot,fat;
public:
	nutrients(int r = 0, int i =0,int f=0) {carb = r; prot= i;fat=f;}

	nutrients operator + (nutrients obj) {
		nutrients res;
		res.carb = carb + obj.carb;
		res.prot = prot+ obj.prot;
        res.fat=fat+ obj.fat;
		return res;
	}
	void print() { cout <<"total carohydrate"<<carb<<"\t"<< "total protein"<<prot<<"\t"<<"total fat" <<fat << endl; }
};

int main()
{
    nutrients F[2];
    int c,p,f;
    for(int i=0;i<2;i++)
    {
        cout<<"for food "<<i+1<<" enter nutients";
    cin>>c>>p>>f;
    nutrients(c,p,f);
    }
    
	nutrients F1(c,p,f), F2(c,p,f);
	nutrients c3 = F1 + F2;
	c3.print();
}