#include <iostream>
using namespace std;

class Complex
{	int rl, im;
public:

	Complex(int real, int img) {
		rl = real;
		img = im;
	}

	Complex(Complex &c1)
	{
		rl = c1.rl;
		im = c1.im;
	}
	void show()
	{
		cout << "The complex number is : " << rl << " + i" << im;
	}
};

int main(){
	Complex c1(2,3);
	
	c1.show();

	Complex c2 = c1;

	c1.show();
}