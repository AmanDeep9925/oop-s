#include <iostream>
using namespace std;

class Shape
{
	protected:
	double x,y;
	public:
	void set_dim(double i,double j=0)
	{
		x=i; y=j;
	}
	virtual void show_area()
	{
		cout<<"No area computation defined";
		cout<<"for this class.\n";		 }
	};
class rectangle :public Shape
{
public:
void show_area()
	{
		cout<<" Length of rectangle ";
		cout<< x <<" and width "<< y;
		cout<<" has an area of : ";
		cout<<x*y<<"\n";
	   }
};
class circle :public Shape
{
public:
void show_area()
	{
		cout<<" circle with radius ";
		cout<< x ; 
		cout<<" has an area of :  ";
		cout<< 3.14 *x*x  << endl;
}
};
class square : public Shape
{
public:
	void show_area()
	{
		cout<<" square with dimension " << " x " ;
		cout<< x ;
		cout<<" has an area of : ";
		cout<<x*x <<endl;
	}
};
int main ()
{ 

Shape *p;
rectangle r;
circle c;
square s;
p=&r;
p->set_dim(10.0,5.0);
p->show_area();				
p=&c;
p->set_dim(9.0);
p->show_area();
p=&s;
p->set_dim(9.0);
p->show_area();
return 0;
}
