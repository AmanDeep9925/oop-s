#include <iostream>
#include <math.h>
using namespace std;

class complex
{
	float real, img;
public:
	complex() {
		real = 0;
		img = 0;
	}
	complex(float rl, float im) {
		real = rl; img = im;
	}

	void add(complex &c1, complex &c2) {
		real = c1.real + c2.real;
		img = c1.img + c2.img;

		cout << " \n THE SUM OF THE TWO NUMBER IS AS  :  " ;
		cout << real << " + i" << img;
		cout << "\n";
	}

	void diff(complex &c1, complex &c2) {
		real = c1.real - c2.real;
		img = c1.img - c2.img;

		cout << " \n THE DIFFERENCE OF THE TWO NUMBER IS AS  :  " ;
		cout << real << " + i" << img;
		cout << "\n";
	}

	void mul(complex &c1, complex &c2) {
		real = c1.real * c2.real - c1.img * c2.img;
		img = c1.real * c2.img + c1.img * c2.real;

		cout << " \n THE PRODUCT OF THE TWO NUMBER IS AS  :  " ;
		cout << real << " + i" << img;
		cout << "\n";
	}

	void div(complex &c1, complex &c2) {

		float res1 = pow(c2.real, 2);
		float res2 = pow(c2.img, 2);

		float con = res1 + res2;
		real = (c1.real * c2.real - c1.img * c2.img) / con;
		img = (c1.real * c2.img + c1.img * c2.real) / con;

		cout << " \n THE DIVISION OF THE TWO NUMBER IS AS  :  " ;
		cout << real << " + i" << img;
		cout << "\n";

	}

};

int main() {
	complex a(2.0, 5.0);
	complex b(3.0, 4.0);

	complex res;

	res.add(a, b);

	res.diff(a, b);

	res.mul(a, b);

	res.div(a, b);

}